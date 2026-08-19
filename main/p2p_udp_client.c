/*
 * p2p_udp_client.c
 *
 *  Created on: 10 авг. 2026 г.
 *      Author: boss
 */

#include "p2p_udp_client.h"

#include <stdio.h>
#include <string.h>
#include <errno.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "freertos/semphr.h"

#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"
#include "esp_event.h"
#include "esp_wifi.h"

#include "lwip/sockets.h"

static const char *TAG = "P2P_CLIENT";


#define RX_SOCKET_TIMEOUT_MS 200

static EventGroupHandle_t client_event_group;
#define WIFI_CONNECTED_BIT BIT0
#define GOT_IP_BIT         BIT1

static volatile bool is_connected_to_master = false;
static volatile bool g_stream_allowed       = false;

static int g_client_sock = -1;
static SemaphoreHandle_t g_sock_mutex = NULL;
static struct sockaddr_in g_master_addr;

static p2p_on_cmd_received_cb_t g_on_cmd_cb = NULL;
static uint16_t g_mjpeg_seq_counter = 0;

/* ============================================================
 * Internal: send ACK to master
 * ============================================================ */
static void send_ack_to_master(uint16_t seq_num)
{
    if (!g_sock_mutex) return;
    if (xSemaphoreTake(g_sock_mutex, pdMS_TO_TICKS(10)) != pdTRUE) return;

    if (g_client_sock < 0) {
        xSemaphoreGive(g_sock_mutex);
        return;
    }

    fg_header_t ack_hdr = {
        .magic       = 0x55,
        .type        = PKT_TYPE_ACK,
        .seq_num     = seq_num,
        .total_parts = 1,
        .part_idx    = 0,
        .payload_len = 0,
    };

    sendto(g_client_sock, &ack_hdr, sizeof(fg_header_t), 0,
           (struct sockaddr *)&g_master_addr, sizeof(g_master_addr));

    xSemaphoreGive(g_sock_mutex);
}

/* ============================================================
 * RX task: listens for commands from master
 * ============================================================ */
static void p2p_client_rx_task(void *pvParameters)
{
    const size_t rx_buf_size = sizeof(fg_header_t) + 512;
    uint8_t *rx_buf = malloc(rx_buf_size);
    if (!rx_buf) {
        ESP_LOGE(TAG, "rx_buf alloc failed");
        vTaskDelete(NULL);
        return;
    }

    struct sockaddr_in from_addr;
    socklen_t from_len = sizeof(from_addr);

    while (1) {
        /* Ждём, пока получим IP от мастера */
        xEventGroupWaitBits(client_event_group, GOT_IP_BIT,
                            pdFALSE, pdTRUE, portMAX_DELAY);

        int sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_IP);
        if (sock < 0) {
            ESP_LOGE(TAG, "Socket creation failed");
            vTaskDelay(pdMS_TO_TICKS(2000));
            continue;
        }

        /* Неблокирующий приём с таймаутом, чтобы периодически проверять
         * состояние is_connected_to_master и не зависать в recvfrom() */
        struct timeval tv = {
            .tv_sec  = 0,
            .tv_usec = RX_SOCKET_TIMEOUT_MS * 1000,
        };
        setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));

        memset(&g_master_addr, 0, sizeof(g_master_addr));
        g_master_addr.sin_addr.s_addr = inet_addr(MASTER_IP_ADDRESS);
        g_master_addr.sin_family      = AF_INET;
        g_master_addr.sin_port        = htons(UDP_PORT);

        struct sockaddr_in local_addr = {
            .sin_addr.s_addr = htonl(INADDR_ANY),
            .sin_family      = AF_INET,
            .sin_port        = htons(UDP_PORT),
        };

        if (bind(sock, (struct sockaddr *)&local_addr, sizeof(local_addr)) < 0) {
            ESP_LOGE(TAG, "Socket bind failed");
            close(sock);
            vTaskDelay(pdMS_TO_TICKS(2000));
            continue;
        }

        /* Регистрируем активный сокет под защитой mutex */
        xSemaphoreTake(g_sock_mutex, portMAX_DELAY);
        g_client_sock = sock;
        xSemaphoreGive(g_sock_mutex);

        ESP_LOGI(TAG, "P2P Network engine listening for Master commands...");

        while (is_connected_to_master) {
            int len = recvfrom(sock, rx_buf, rx_buf_size, 0,
                               (struct sockaddr *)&from_addr, &from_len);

            if (len < 0) {
                if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR) {
                    /* Таймаут или прерывание — это штатно, просто идём дальше */
                    continue;
                }
                ESP_LOGE(TAG, "Socket read critical error: errno=%d", errno);
                break;
            }

            if (len < (int)sizeof(fg_header_t)) {
                continue;
            }

            fg_header_t *hdr = (fg_header_t *)rx_buf;
            if (hdr->magic != 0x55) continue;

            /* Защита от повреждённых пакетов: payload не может быть длиннее буфера */
            if ((size_t)len < sizeof(fg_header_t) + hdr->payload_len) {
                ESP_LOGW(TAG, "Packet shorter than declared payload_len=%u (len=%d)",
                         hdr->payload_len, len);
                continue;
            }

            if (hdr->type == PKT_TYPE_CMD) {
                /* Автоматически разбираем команды управления потоком */
                if (hdr->payload_len >= 1) {
                    uint8_t cmd_byte = rx_buf[sizeof(fg_header_t)];
                    if (cmd_byte == P2P_CMD_START_STREAM) {
                        g_stream_allowed = true;
                        ESP_LOGI(TAG, "Master allowed stream");
                    } else if (cmd_byte == P2P_CMD_STOP_STREAM) {
                        g_stream_allowed = false;
                        ESP_LOGI(TAG, "Master stopped stream");
                    }
                }

                /* ACK отправляем ДО вызова callback, чтобы мастер быстрее получил подтверждение */
                send_ack_to_master(hdr->seq_num);

                if (g_on_cmd_cb) {
                    g_on_cmd_cb(rx_buf + sizeof(fg_header_t), hdr->payload_len);
                }
            }
        }

        /* Отключение: очищаем сокет */
        xSemaphoreTake(g_sock_mutex, portMAX_DELAY);
        g_client_sock = -1;
        xSemaphoreGive(g_sock_mutex);

        close(sock);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

    free(rx_buf);
    vTaskDelete(NULL);
}

/* ============================================================
 * Telemetry (fire-and-forget, до 500 байт)
 * ============================================================ */
esp_err_t p2p_uclient_send_telemetry(const uint8_t *data, uint16_t len)
{
    if (!is_connected_to_master) return ESP_ERR_INVALID_STATE;
    if (len > 500)               return ESP_ERR_INVALID_SIZE;
    if (!g_sock_mutex)           return ESP_ERR_INVALID_STATE;

    uint16_t packet_size = sizeof(fg_header_t) + len;
    uint8_t *tx_buf = malloc(packet_size);
    if (!tx_buf) return ESP_ERR_NO_MEM;

    fg_header_t *hdr = (fg_header_t *)tx_buf;
    hdr->magic       = 0x55;
    hdr->type        = PKT_TYPE_TELEMETRY;
    hdr->seq_num     = 0;
    hdr->total_parts = 1;
    hdr->part_idx    = 0;
    hdr->payload_len = len;
    memcpy(tx_buf + sizeof(fg_header_t), data, len);

    int res = -1;
    if (xSemaphoreTake(g_sock_mutex, pdMS_TO_TICKS(10)) == pdTRUE) {
        if (g_client_sock >= 0) {
            res = sendto(g_client_sock, tx_buf, packet_size, 0,
                         (struct sockaddr *)&g_master_addr, sizeof(g_master_addr));
        }
        xSemaphoreGive(g_sock_mutex);
    }

    free(tx_buf);
    return (res >= 0) ? ESP_OK : ESP_FAIL;
}

/* ============================================================
 * MJPEG (сегментированная отправка с flow control)
 * ============================================================ */
esp_err_t p2p_uclient_send_mjpeg(const uint8_t *frame_data, uint32_t total_len)
{
    if (!is_connected_to_master) return ESP_ERR_INVALID_STATE;
    if (!g_stream_allowed)       return ESP_ERR_INVALID_STATE;
    if (total_len == 0)          return ESP_ERR_INVALID_ARG;
    if (!g_sock_mutex)           return ESP_ERR_INVALID_STATE;

    uint16_t total_parts = (uint16_t)((total_len + FG_CHUNK_MAX_PAYLOAD - 1) / FG_CHUNK_MAX_PAYLOAD);
    uint16_t current_seq = g_mjpeg_seq_counter++;

    uint8_t *chunk_buf = malloc(sizeof(fg_header_t) + FG_CHUNK_MAX_PAYLOAD);
    if (!chunk_buf) return ESP_ERR_NO_MEM;

    fg_header_t *hdr = (fg_header_t *)chunk_buf;
    hdr->magic       = 0x55;
    hdr->type        = PKT_TYPE_MJPEG_CHUNK;
    hdr->seq_num     = current_seq;
    hdr->total_parts = total_parts;

    uint32_t remaining = total_len;
    uint32_t offset    = 0;
    esp_err_t result   = ESP_OK;

    for (uint16_t i = 0; i < total_parts; i++) {
        /* Если мастер прервал стриминг или Wi-Fi упал — сразу выходим */
        if (!is_connected_to_master || !g_stream_allowed) {
            result = ESP_ERR_INVALID_STATE;
            break;
        }

        uint16_t current_payload_len = (remaining > FG_CHUNK_MAX_PAYLOAD)
                                       ? FG_CHUNK_MAX_PAYLOAD
                                       : (uint16_t)remaining;

        hdr->part_idx    = i;
        hdr->payload_len = current_payload_len;
        memcpy(chunk_buf + sizeof(fg_header_t), frame_data + offset, current_payload_len);

        int res = -1;
        if (xSemaphoreTake(g_sock_mutex, pdMS_TO_TICKS(10)) == pdTRUE) {
            if (g_client_sock >= 0) {
                res = sendto(g_client_sock, chunk_buf,
                             sizeof(fg_header_t) + current_payload_len, 0,
                             (struct sockaddr *)&g_master_addr, sizeof(g_master_addr));
            }
            xSemaphoreGive(g_sock_mutex);
        } else {
            result = ESP_FAIL;
            break;
        }

        if (res < 0) {
            ESP_LOGE(TAG, "Failed sending MJPEG chunk index %d", i);
            result = ESP_FAIL;
            break;
        }

        remaining -= current_payload_len;
        offset    += current_payload_len;

        /* Микро-задержка, чтобы не перегружать UDP/SDIO буферы */
        vTaskDelay(pdMS_TO_TICKS(4));
    }

    free(chunk_buf);
    return result;
}

/* ============================================================
 * Wi-Fi event handler
 * ============================================================ */
static void wifi_event_handler(void *arg, esp_event_base_t event_base,
                               int32_t event_id, void *event_data)
{
    if (event_base == WIFI_EVENT) {
        switch (event_id) {
            case WIFI_EVENT_STA_START:
                ESP_LOGI(TAG, "STA started, connecting...");
                esp_wifi_connect();
                break;

            case WIFI_EVENT_STA_CONNECTED: {
                wifi_event_sta_connected_t *conn_event = (wifi_event_sta_connected_t *)event_data;
                ESP_LOGI(TAG, "Connected to SSID: %s, Channel: %d",
                         conn_event->ssid, conn_event->channel);
                xEventGroupSetBits(client_event_group, WIFI_CONNECTED_BIT);
                break;
            }

            case WIFI_EVENT_STA_DISCONNECTED: {
                wifi_event_sta_disconnected_t *event = (wifi_event_sta_disconnected_t *)event_data;
                ESP_LOGW(TAG, "Disconnected. Reason code: %d", event->reason);

                is_connected_to_master = false;
                g_stream_allowed       = false;
                xEventGroupClearBits(client_event_group, WIFI_CONNECTED_BIT | GOT_IP_BIT);

                /* Немедленный reconnect — неблокирующий вызов */
                esp_wifi_connect();
                break;
            }

            default:
                break;
        }
    } else if (event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t *event = (ip_event_got_ip_t *)event_data;
        ESP_LOGI(TAG, "IP Assigned: " IPSTR, IP2STR(&event->ip_info.ip));
        xEventGroupSetBits(client_event_group, GOT_IP_BIT);
        is_connected_to_master = true;
    }
}

/* ============================================================
 * STA Wi-Fi config
 * ============================================================ */
static void init_wifi_sta(void)
{
    wifi_config_t wifi_config = {
        .sta = {
            .ssid     = MASTER_AP_SSID,
            .password = MASTER_AP_PASSWORD,
            .threshold.authmode = WIFI_AUTH_WPA2_PSK,
        },
    };
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_STA, &wifi_config));
    ESP_LOGI(TAG, "STA Configuration applied for SSID: %s", MASTER_AP_SSID);
}

/* ============================================================
 * Public: init / deinit / state helpers
 * ============================================================ */
void p2p_uclient_init(void)
{
    ESP_LOGI(TAG, "=== P2P CLIENT INIT ===");

    client_event_group = xEventGroupCreate();
    if (!g_sock_mutex) {
        g_sock_mutex = xSemaphoreCreateMutex();
    }

    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    ESP_ERROR_CHECK(esp_wifi_init(&cfg));

    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL, NULL));
    ESP_ERROR_CHECK(esp_event_handler_instance_register(
        IP_EVENT, IP_EVENT_STA_GOT_IP, &wifi_event_handler, NULL, NULL));

    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_STA));
    init_wifi_sta();
    ESP_ERROR_CHECK(esp_wifi_start());

    xTaskCreatePinnedToCore(p2p_client_rx_task, "p2p_cli_rx", 4096, NULL, 5, NULL, 1);
    ESP_LOGI(TAG, "P2P CLIENT INITIALIZED SUCCESSFUL");
}

bool p2p_uclient_is_connected(void)
{
    return is_connected_to_master;
}

bool p2p_uclient_is_stream_allowed(void)
{
    return g_stream_allowed;
}

void p2p_uclient_register_cmd_callback(p2p_on_cmd_received_cb_t cb)
{
    g_on_cmd_cb = cb;
}

void p2p_client_deinit(void)
{
    esp_wifi_disconnect();
    esp_wifi_stop();
    esp_wifi_deinit();

    if (client_event_group) {
        vEventGroupDelete(client_event_group);
        client_event_group = NULL;
    }
    if (g_sock_mutex) {
        vSemaphoreDelete(g_sock_mutex);
        g_sock_mutex = NULL;
    }
    is_connected_to_master = false;
    g_stream_allowed       = false;
}

/* ============================================================
 * TEST API: принудительное управление состоянием подключения
 * ============================================================ */
void p2p_uclient_test_force_connected(bool force)
{
    if (force) {
        if (client_event_group) {
            xEventGroupSetBits(client_event_group, WIFI_CONNECTED_BIT | GOT_IP_BIT);
        }
        // Ждём, пока RX-задача создаст сокет
        vTaskDelay(pdMS_TO_TICKS(1000));
        is_connected_to_master = true;
		g_stream_allowed       = true;
        ESP_LOGW(TAG, "TEST: forced connected = true");
    } else {
        is_connected_to_master = false;
		g_stream_allowed       = false;
        ESP_LOGW(TAG, "TEST: forced connected = false");
    }
}
