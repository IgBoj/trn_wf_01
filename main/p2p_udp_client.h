/*
 * p2p_udp_client.h
 *
 *  Created on: 10 авг. 2026 г.
 *      Author: boss
 */

#ifndef P2P_UDP_CLIENT_H
#define P2P_UDP_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include "esp_err.h"

#define LWS_TEST_NODE 0

#if LWS_TEST_NODE
	#define MASTER_AP_SSID      "ASUS"
	#define MASTER_AP_PASSWORD  "10011967"
	#define MASTER_IP_ADDRESS   "192.168.1.66"
	#define UDP_PORT            5533
#else
	#define MASTER_AP_SSID      "ForgeUI-P4-P2P"
	#define MASTER_AP_PASSWORD  "12345678"
	#define MASTER_IP_ADDRESS   "192.168.4.1"
	#define UDP_PORT            3333
#endif

/* ============================================================
 * Protocol constants (должны совпадать с мастером 30_WIFI.h)
 * ============================================================ */
#define PKT_TYPE_CMD         0x01
#define PKT_TYPE_TELEMETRY   0x02
#define PKT_TYPE_MJPEG_CHUNK 0x03
#define PKT_TYPE_ACK         0x04

/* Application-level flow control commands */
#define P2P_CMD_START_STREAM 0xA1   /* Мастер разрешает клиенту начать MJPEG-поток */
#define P2P_CMD_STOP_STREAM  0xA2   /* Мастер запрещает MJPEG-поток */

/* Максимальный размер полезной нагрузки одного UDP-чанка */
#define FG_CHUNK_MAX_PAYLOAD 1400

#pragma pack(push, 1)
typedef struct {
    uint8_t  magic;       /* Всегда 0x55 */
    uint8_t  type;        /* fg_pkt_type_t */
    uint16_t seq_num;     /* Порядковый номер */
    uint16_t total_parts; /* Для MJPEG: общее число чанков */
    uint16_t part_idx;    /* Для MJPEG: индекс текущего чанка */
    uint16_t payload_len; /* Длина payload, идущего сразу после заголовка */
} fg_header_t;
#pragma pack(pop)

/* ============================================================
 * Callbacks
 * ============================================================ */
typedef void (*p2p_on_cmd_received_cb_t)(const uint8_t *data, uint16_t len);

/* ============================================================
 * Public API
 * ============================================================ */

/* Инициализация Wi-Fi STA и сетевых задач */
void p2p_uclient_init(void);

/* Проверка подключения к мастеру (SoftAP + DHCP получен) */
bool p2p_uclient_is_connected(void);

/* Разрешён ли стриминг MJPEG мастером (flow control) */
bool p2p_uclient_is_stream_allowed(void);

/* Регистрация callback для обработки команд от мастера */
void p2p_uclient_register_cmd_callback(p2p_on_cmd_received_cb_t cb);

/* Корректное завершение работы клиента */
void p2p_client_deinit(void);

/* Отправка телеметрии (fire-and-forget, до 500 байт) */
esp_err_t p2p_uclient_send_telemetry(const uint8_t *data, uint16_t len);

/* Отправка MJPEG кадра, автоматически разбивается на чанки.
 * Возвращает ESP_ERR_INVALID_STATE, если мастер не разрешил стриминг. */
esp_err_t p2p_uclient_send_mjpeg(const uint8_t *frame_data, uint32_t total_len);
/* ============================================================
 * TEST API — только для отладки, не использовать в production
 * ============================================================ */
void p2p_uclient_test_force_connected(bool force);

#endif /* P2P_UDP_CLIENT_H */