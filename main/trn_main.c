
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "esp_private/esp_cache_private.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_log.h"
#include "misc/lv_types.h"
#include "nvs_flash.h"
#include "esp_cache.h"
#include "esp_netif.h"
#include "esp_event.h"
#include "esp_wifi.h"
#include "driver/ppa.h"

#include "app_video.h"
#include "bsp_display.h"
#include "p2p_udp_client.h" // Подключаем наш новый модуль клиента 
#include "ov5647.h"
#include "fg_ui_mediator.h"
#include "ui.h"


#define ALIGN_UP(num, align) (((num) + ((align) - 1)) & ~((align) - 1))
#define LCD_BUFFER_COUNT 2
#define CAMERA_BUFFER_COUNT 3
#define CAMERA_OUT_WIDTH   400
#define CAMERA_OUT_HEIGHT  320
#define CAM_BYTES_PER_PIX  2

#define VCB_DEBUG_MODE 0  // Установите 0 для отключения отладки

static const char *TAG = "app_main";
static ppa_client_handle_t ppa_srm_handle = NULL;
static size_t data_cache_line_size = 0;
static void *lcd_buffer[LCD_BUFFER_COUNT];

#include "esp_jpeg_enc.h" // <-- Правильный заголовок для esp_new_jpeg

// Глобальные переменные для MJPEG
static jpeg_enc_handle_t jpeg_enc_handle = NULL;
static uint8_t *jpeg_out_buffer = NULL;
static size_t last_jpeg_size = 0;
// func declare
size_t form_jpeg_from_rgb(const uint8_t *rgb_buf);
#include <stdbool.h>
#include <string.h>

// Резервируем безопасный размер под один JPEG кадр CAMERA_OUT_WIDTH x CAMERA_OUT_HEIGHT
#define NET_JPEG_MAX_SIZE (25 * 1024) 

// Выделенный изолированный буфер в PSRAM для отправки
static EXT_RAM_ATTR uint8_t net_mjpeg_buffer[NET_JPEG_MAX_SIZE];
static size_t net_mjpeg_size = 0;

// Атомарные флаги для полностью асинхронного обмена
static volatile bool net_request_new_frame = false; // Сигнал от сети: "Пришли следующий кадр"
static volatile bool net_has_fresh_frame   = false; // Флаг для сети: "В буфере лежит свежий кадр"

// Глобальные переменные
extern lv_obj_t *ui_imgCameraView;
extern volatile bool is_video_streaming;

//---------- START_AS_P2P_CLIENT
/*==========================================
 * Callback for processing command from master
 *============================================*/
void on_master_command(const uint8_t *data, uint16_t len) {
    ESP_LOGI(TAG, "Command from Master! Length: %d", len);
    if (!data || len == 0) return;

    // Разбираем flow-control команды (совпадают с 30_WIFI.h)
    switch (data[0]) {
        case 0xA1: // P2P_CMD_START_STREAM
            ESP_LOGI(TAG, ">>> Master ALLOWED stream");
            break;
        case 0xA2: // P2P_CMD_STOP_STREAM
            ESP_LOGI(TAG, ">>> Master STOPPED stream");
            break;
        default:
            ESP_LOGI(TAG, ">>> App command byte: 0x%02X", data[0]);
            break;
    }
    // Остальную обработку (если нужна) делаем здесь
}

// Дескриптор изображения для LVGL 9
static lv_image_dsc_t camera_image_dsc;

/* Задача LVGL для обработки таймеров и отрисовки */
void lvgl_port_task(void *arg) {
    ESP_LOGI(TAG, "LVGL task running...");
    while (1) {
        // Захватываем лок перед тиком графического движка
        if (bsp_display_lock(20)) {
            uint32_t task_delay_ms = lv_timer_handler();
            bsp_display_unlock();

            if (task_delay_ms < 1) task_delay_ms = 1;
            if (task_delay_ms > 50) task_delay_ms = 50;
            vTaskDelay(pdMS_TO_TICKS(task_delay_ms));
        } else {
            vTaskDelay(pdMS_TO_TICKS(1));
        }
    }
}



/* ========================================================================= */
/* 
*** Коллбэк обработки кадра с камеры — вызывается из задачи video_stream_task 
*/
static void camera_video_frame_operation(
    uint8_t *camera_buf,
    uint8_t camera_buf_index,
    uint32_t camera_buf_hes,
    uint32_t camera_buf_ves,
    size_t camera_buf_len,
    void *user_data)
{
    (void)camera_buf_len;
    (void)user_data;

    if (!is_video_streaming) {
        return;
    }

	// НАСТРОЙКА ГЕОМЕТРИИ: Финальные размеры на экране
	const uint32_t display_width = CAMERA_OUT_WIDTH; 
	const uint32_t display_height = CAMERA_OUT_HEIGHT;
	const uint32_t bytes_per_pixel = CAM_BYTES_PER_PIX;
	const uint32_t out_size = display_width * display_height * bytes_per_pixel; 
	const uint32_t buf_index = camera_buf_index % LCD_BUFFER_COUNT;

	// ИСПРАВЛЕНИЕ: Масштаб по оси X (для ширины 800, которая сожмется в высоту 320)
	// scale_x = Целевой Размер по этой же оси внутри логики PPA
	float scale_x = (float)display_height / (float)camera_buf_hes; // 320.0f / 800.0f = 0.40f

	// ИСПРАВЛЕНИЕ: Масштаб по оси Y (для высоты 640, которая растянется в ширину 400)
	float scale_y = (float)display_width / (float)camera_buf_ves;  // 400.0f / 640.0f = 0.625f

	ppa_srm_oper_config_t srm_config = {
	    .in.buffer = camera_buf,
	    .in.pic_w = camera_buf_hes,   // 800
	    .in.pic_h = camera_buf_ves,   // 640
	    .in.block_w = camera_buf_hes,
	    .in.block_h = camera_buf_ves,
	    .in.block_offset_x = 0,
	    .in.block_offset_y = 0,
	    .in.srm_cm = PPA_SRM_COLOR_MODE_RGB565,
	    
	    .out.buffer = lcd_buffer[buf_index],
	    .out.buffer_size = ALIGN_UP(out_size, data_cache_line_size),
	    .out.pic_w = display_width,   // 400
	    .out.pic_h = display_height,  // 320
	    .out.block_offset_x = 0,
	    .out.block_offset_y = 0,
	    .out.srm_cm = PPA_SRM_COLOR_MODE_RGB565,
	    
	    // Аппаратный поворот на 270 градусов по часовой (= 90 градусов против часовой)
	    .rotation_angle = PPA_SRM_ROTATION_ANGLE_270, 
	    .scale_x = scale_x, // 0.40
	    .scale_y = scale_y, // 0.625
	    
	    // Оставляем зеркалирование по вкусу. 
	    // Для сохранения "фронтального" режима при угле 270 обычно используется mirror_y = 1
	    .mirror_x = 0,
	    .mirror_y = 0, 
	    
	    .rgb_swap = 0,
	    .byte_swap = 0,
	    .mode = PPA_TRANS_MODE_BLOCKING,
	};


    esp_err_t ret = ppa_do_scale_rotate_mirror(ppa_srm_handle, &srm_config);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "PPA SRM failed: %d", ret);
        return;
    }

    // Синхронизация кэша после записи PPA (DMA → CPU)
    esp_cache_msync(lcd_buffer[buf_index], 
                    ALIGN_UP(out_size, data_cache_line_size),
                    ESP_CACHE_MSYNC_FLAG_DIR_M2C | ESP_CACHE_MSYNC_FLAG_TYPE_DATA);

    // --- Асинхронное кодирование в JPEG для сети ---
    if (is_video_streaming && p2p_uclient_is_stream_allowed() && net_request_new_frame) {
        size_t jpeg_len = form_jpeg_from_rgb((const uint8_t *)lcd_buffer[buf_index]);
        
        if (jpeg_len > 0 && jpeg_len <= NET_JPEG_MAX_SIZE) {
            memcpy(net_mjpeg_buffer, jpeg_out_buffer, jpeg_len);
            net_mjpeg_size = jpeg_len;
            net_has_fresh_frame = true;
            net_request_new_frame = false; 
        }
    }
    // -----------------------------------------------------------------
                    
    // Обновляем дескриптор для LVGL 9 под новые размеры 400x320
    camera_image_dsc.header.magic = LV_IMAGE_SRC_VARIABLE;
    camera_image_dsc.header.w = display_width;                        // 400
    camera_image_dsc.header.h = display_height;                       // 320
    camera_image_dsc.header.cf = LV_COLOR_FORMAT_RGB565;
    camera_image_dsc.header.stride = display_width * bytes_per_pixel; // 400 * 2 = 800 байт
    camera_image_dsc.data_size = out_size;
    camera_image_dsc.data = (const uint8_t *)lcd_buffer[buf_index];

    // Безопасное обновление LVGL через мьютекс
//    if(bsp_display_lock(-1)){
//        // Насильно перерисовываем и подгоняем размеры самого виджета, если они были жестко заданы
//        lv_obj_set_size(ui_imgCameraView, display_width, display_height);
//        lv_image_set_src(ui_imgCameraView, &camera_image_dsc);
//        lv_obj_invalidate(ui_imgCameraView);
//        bsp_display_unlock();		
//    }
}


/****************************************************************
** JPEG extension
*****************************************************************/

/**
 * @brief Инициализация аппаратного JPEG-кодека
 */
static void init_jpeg_encoder(void) {
    ESP_LOGI(TAG, "Initializing hardware JPEG encoder...");
    
    jpeg_enc_config_t cfg = {
        .width = CAMERA_OUT_WIDTH,              // Ширина виджета камеры
        .height = CAMERA_OUT_HEIGHT,             // Высота виджета камеры
        .src_type = JPEG_PIXEL_FORMAT_RGB565_LE, // Little Endian RGB565
        .subsampling = JPEG_SUBSAMPLE_420,       // Стандартное сжатие цвета
        .quality = 80,             // Качество 1-100
        .rotate = JPEG_ROTATE_0D,  // Поворот не нужен
        .task_enable = false,      // Синхронное кодирование
    };

    esp_err_t ret = jpeg_enc_open(&cfg, &jpeg_enc_handle);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "Failed to open JPEG encoder: %d", ret);
        return;
    }

    // Вычисляем максимальный размер выходного буфера
    // В этой версии библиотеки нет отдельной функции get_max_size, 
    // поэтому берем с запасом (обычно JPEG меньше RAW, но для надежности берем размер RAW)
    size_t max_size = CAMERA_OUT_WIDTH * CAMERA_OUT_HEIGHT * CAM_BYTES_PER_PIX; 
    
    // Выделяем буфер в PSRAM
    jpeg_out_buffer = (uint8_t *)heap_caps_malloc(max_size, MALLOC_CAP_SPIRAM);
    
    if (jpeg_out_buffer) {
        ESP_LOGI(TAG, "JPEG encoder ready. Buffer allocated: %u bytes", max_size);
    } else {
        ESP_LOGE(TAG, "Failed to allocate JPEG buffer in PSRAM");
        jpeg_enc_close(jpeg_enc_handle);
    }
}

/**
 * @brief Функция формирования JPEG из RGB565 буфера
 * @param rgb_buf Входной буфер RGB565 (после PPA)
 * @return Размер закодированного JPEG или 0 при ошибке
 */
size_t form_jpeg_from_rgb(const uint8_t *rgb_buf) {
    if (!jpeg_enc_handle || !jpeg_out_buffer || !rgb_buf) {
        return 0;
    }

    int encoded_size = 0;
    size_t input_size = CAMERA_OUT_WIDTH * CAMERA_OUT_HEIGHT * CAM_BYTES_PER_PIX; // Размер входного буфера в байтах
    size_t output_max_size = CAMERA_OUT_WIDTH * CAMERA_OUT_HEIGHT * CAM_BYTES_PER_PIX; // Максимальный размер выходного буфера

    // Вызов с правильной сигнатурой (6 аргументов)
    jpeg_error_t ret = jpeg_enc_process(
        jpeg_enc_handle, 
        rgb_buf, 
        (int)input_size, 
        jpeg_out_buffer, 
        (int)output_max_size, 
        &encoded_size
    );
    
    if (ret == JPEG_ERR_OK) {
        last_jpeg_size = (size_t)encoded_size;
        return last_jpeg_size;
    } 
    
    ESP_LOGE(TAG, "JPEG encoding failed: %d", ret);
    return 0;
}

/*****************************************************************
** MAIN App
******************************************************************/
void app_main(void) {
	// -------- START UDP --------------
	// 1. Core init
	p2p_uclient_init();
	
	// 2. Map command listeners
	p2p_uclient_register_cmd_callback(on_master_command);

	// Dummy tracking buffers
	uint8_t fake_telemetry[20] = {'H', 'i', '!', ' '};
#if LWS_TEST_NODE
	/* ---------- TEST ONLY ---------- */
	   p2p_uclient_test_force_connected(true);
	/* ------------------------------- */

#endif	
	vTaskDelay(pdMS_TO_TICKS(2000));
	
	// -------- START DISPLAY --------------
	// 1. Инициализация дисплея и LVGL
	my_bsp_display_start();
	my_bsp_display_backlight_on();

	// 2. ИНИЦИАЛИЗАЦИЯ UI ИЗ SQUARELINE
	// Вместо извлечения мьютекса вызываем вашу потокобезопасную обертку
	if (bsp_display_lock(-1)) { 
	    ui_init();
	    bsp_display_unlock();
	    ESP_LOGI(TAG, "UI initialized safely via lock");
	} else {
	    ESP_LOGE(TAG, "Critical: Could not acquire LVGL lock for UI initialization!");
	    return;
	}

	// 3. ЗАПУСК ЗАДАЧИ LVGL
	xTaskCreatePinnedToCore(lvgl_port_task, "LVGL_Task", 8192, NULL, 5, NULL, 1);
	ESP_LOGI(TAG, "LVGL task started");
	
	// -------------- START VIDEO SubSystem
	// 4. Регистрируем PPA клиент
	ppa_client_config_t ppa_srm_config = {
	    .oper_type = PPA_OPERATION_SRM,
	};
	ESP_ERROR_CHECK(ppa_register_client(&ppa_srm_config, &ppa_srm_handle));
	ESP_ERROR_CHECK(esp_cache_get_alignment(MALLOC_CAP_SPIRAM, &data_cache_line_size));

	// 4.1. Регистрируем JPEG encoder
	init_jpeg_encoder();

	// 5. Инициализация видео подсистемы
	i2c_master_bus_handle_t i2c_bus_ = my_bsp_i2c_get_handle();
	ESP_LOGI(TAG, "I2C bus handle: %p", i2c_bus_);

	ESP_LOGI(TAG, "Probing OV5647 at I2C address 0x36...");
	esp_err_t probe_ret = i2c_master_probe(i2c_bus_, 0x36, 100);
	if (probe_ret == ESP_OK) {
	    ESP_LOGI(TAG, "OV5647 detected at 0x36");
	} else {
	    ESP_LOGE(TAG, "OV5647 NOT detected at 0x36, error: 0x%x", probe_ret);
	}

	ESP_LOGI(TAG, "Initializing esp_video subsystem...");
	esp_err_t ret = app_video_main(i2c_bus_);
	if (ret != ESP_OK) {
	    ESP_LOGE(TAG, "app_video_main FAILED with err=0x%x (%s)", ret, esp_err_to_name(ret));
	    return;
	}
	ESP_LOGI(TAG, "esp_video initialized successfully");

	vTaskDelay(pdMS_TO_TICKS(500));

	// 6. Открываем видео устройство
	int video_cam_fd = app_video_open(ESP_VIDEO_MIPI_CSI_DEVICE_NAME, APP_VIDEO_FMT);
	if (video_cam_fd < 0) {
	    ESP_LOGE(TAG, "video cam open failed");
	    return;
	}
	ESP_LOGI(TAG, "Camera opened successfully, fd=%d", video_cam_fd);

	// ---------------------------
	read_and_log_ov5647_params(i2c_bus_);
	configure_ov5647_brightness(i2c_bus_);
	ESP_LOGI(TAG, "Camera parameters changed !!!!!!!!");
	read_and_log_ov5647_params(i2c_bus_);

	// Даём время на регистрацию устройства в VFS
	vTaskDelay(pdMS_TO_TICKS(500));

	// 7. Выделяем буферы для LCD
	size_t lcd_buf_size = ALIGN_UP(CAMERA_OUT_WIDTH * CAMERA_OUT_HEIGHT   * CAM_BYTES_PER_PIX  , data_cache_line_size);
	for (int i = 0; i < LCD_BUFFER_COUNT; i++) {
	    lcd_buffer[i] = heap_caps_aligned_calloc(data_cache_line_size, 1, lcd_buf_size, MALLOC_CAP_SPIRAM);
	    if (lcd_buffer[i] == NULL) {
	        ESP_LOGE(TAG, "alloc lcd_buffer[%d] failed", i);
	        return;
	    }
	}


	// 8. Выделяем буферы для камеры
	void *camera_buf[CAMERA_BUFFER_COUNT];
	for (int i = 0; i < CAMERA_BUFFER_COUNT; i++) {
		uint32_t buff_size = app_video_get_buf_size();
	    camera_buf[i] = heap_caps_aligned_calloc(
	        data_cache_line_size, 1, buff_size, MALLOC_CAP_SPIRAM);
	    if (camera_buf[i] == NULL) {
	        ESP_LOGE(TAG, "alloc camera_buf[%d] failed", i);
	        return;
	    } else{
			ESP_LOGI(TAG, "alloc camera_buf[ %d ] size [ %f ]", i, buff_size/1024.0);		
	    }
	}
	// 9. Регистрируем буферы и коллбэк
	ESP_ERROR_CHECK(app_video_set_bufs(video_cam_fd, CAMERA_BUFFER_COUNT, (const void **)camera_buf));
	ESP_ERROR_CHECK(app_video_register_frame_operation_cb(camera_video_frame_operation));

	// 10. Запускаем поток захвата видео
	ESP_ERROR_CHECK(app_video_stream_task_start(video_cam_fd, 0, NULL));

	ESP_LOGI(TAG, "System initialized successfully! Press START button.");
	
	// Настройка автоматического таймера для удержания FPS
	TickType_t xLastWakeTime = xTaskGetTickCount();
	const TickType_t xFrequency = pdMS_TO_TICKS(200); // Интервал ровно 200 мс (5 FPS)

	while (1) {
	    // Поток засыпает ровно до начала следующего 200 мс интервала
	    vTaskDelayUntil(&xLastWakeTime, xFrequency);  

	    if (!p2p_uclient_is_connected()) {
	        ESP_LOGI(TAG, "(Conn lost)");
	        net_request_new_frame = false;
	        net_has_fresh_frame = false;
	        continue;
	    }
	    
	    // Телеметрию шлём всегда — она лёгкая
	    p2p_uclient_send_telemetry(fake_telemetry, sizeof(fake_telemetry));
	    vTaskDelay(pdMS_TO_TICKS(10));

	    // MJPEG шлём ТОЛЬКО когда мастер явно разрешил
	    if (p2p_uclient_is_stream_allowed()) {
	        
	        // 1. Проверяем, успел ли поток камеры положить свежий кадр с момента прошлой итерации
	        if (net_has_fresh_frame && net_mjpeg_size > 0) {
	            
	            // Сбрасываем флаг перед отправкой, чтобы открыть доступ для подготовки следующего кадра
	            net_has_fresh_frame = false;
	            
	            // Взводим предзаказ на следующий кадр, который камера подготовит, пока этот отправляется
	            net_request_new_frame = true; 

	            // Вызываем вашу проверенную функцию отправки. 
	            // Она может работать сколько угодно долго (в пределах 200 мс), данные в net_mjpeg_buffer защищены!
	            p2p_uclient_send_mjpeg(net_mjpeg_buffer, net_mjpeg_size);
	            
	            ESP_LOGI(TAG, "%ikB JPEG 5 FPS", (int)(net_mjpeg_size / 1024));
	            
	        } else {
	            // Если это самый первый запуск или камера пропустила такт
	            ESP_LOGD(TAG, "No fresh frame in buffer, requesting...");
	            net_request_new_frame = true; 
	        }
	        
	        vTaskDelay(pdMS_TO_TICKS(10));
	    } else {
	        // Если стриминг запрещен, держим запросы закрытыми
	        net_request_new_frame = false;
	        net_has_fresh_frame = false;
	        ESP_LOGI(TAG, "Stream NA");
	    }
	}

#if LWS_TEST_NODE
    if (fake_mjpeg_frame) free(fake_mjpeg_frame);
#endif	  
}
