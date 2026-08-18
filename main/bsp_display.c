/*
 * bsp_display.c
 *
 *  Created on: 29 июл. 2026 г.
 *      Author: boss
 */

#include "bsp_display.h"
#include <stdio.h>
#include "esp_lv_adapter.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "esp_timer.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/spi_master.h"
#include "driver/i2c_master.h"
#include "driver/ledc.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_vendor.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_st7796.h"
#include "esp_lcd_touch_ft6x36.h"
#include "ui.h"

 static const char *TAG = "bsp_display";

 // Внутренние переменные модуля
 static esp_lcd_panel_handle_t lcd_panel_handle = NULL;
 static esp_lcd_touch_handle_t touch_handle = NULL;
 static i2c_master_bus_handle_t i2c_bus_handle = NULL;

 static lv_display_t *display = NULL;

 // Коллбэк тиков LVGL
 static uint32_t lvgl_tick_cb(void) {
     return esp_timer_get_time() / 1000;
 }

 // Коллбэк отправки буфера на дисплей
 static void lvgl_display_flush_cb(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map) {
     esp_lcd_panel_draw_bitmap(lcd_panel_handle, area->x1, area->y1, area->x2 + 1, area->y2 + 1, px_map);
 }

 // Уведомление о завершении DMA
 static bool notify_lvgl_flush_ready(esp_lcd_panel_io_handle_t panel_io, 
                                      esp_lcd_panel_io_event_data_t *edata, 
                                      void *user_ctx) {
     lv_display_t *disp = (lv_display_t *)user_ctx;
     lv_display_flush_ready(disp);
     return false;
 }

 // Коллбэк чтения тач-панели
 static void lvgl_touch_read_cb(lv_indev_t *indev, lv_indev_data_t *data) {
     if (touch_handle == NULL) {
         data->state = LV_INDEV_STATE_RELEASED;
         return;
     }
     
     esp_lcd_touch_point_data_t point;
     uint8_t touch_cnt = 0;
     esp_lcd_touch_read_data(touch_handle);
     esp_lcd_touch_get_data(touch_handle, &point, &touch_cnt, 1);
     
     if (touch_cnt > 0) {
         data->state = LV_INDEV_STATE_PRESSED;
         data->point.x = point.x;
         data->point.y = point.y;
     } else {
         data->state = LV_INDEV_STATE_RELEASED;
     }
 }

 lv_display_t *my_bsp_display_start(void) {
     ESP_LOGI(TAG, "Initializing display and LVGL...");
     
     // 1. Инициализация подсветки
     ledc_timer_config_t ledc_timer = {
         .speed_mode = LEDC_LOW_SPEED_MODE,
         .timer_num = LEDC_TIMER_0,
         .duty_resolution = LEDC_TIMER_10_BIT,
         .freq_hz = 5000,
         .clk_cfg = LEDC_AUTO_CLK
     };
     ledc_timer_config(&ledc_timer);
     
     ledc_channel_config_t ledc_channel = {
         .speed_mode = LEDC_LOW_SPEED_MODE,
         .channel = LEDC_CHANNEL_0,
         .timer_sel = LEDC_TIMER_0,
         .gpio_num = PIN_LCD_BL,
         .duty = 1023,
         .hpoint = 0
     };
     ledc_channel_config(&ledc_channel);
     
     // 2. Настройка SPI и дисплея ST7796
     spi_bus_config_t buscfg = {
         .sclk_io_num = PIN_LCD_SCLK,
         .mosi_io_num = PIN_LCD_MOSI,
         .miso_io_num = PIN_LCD_MISO,
         .quadwp_io_num = -1,
         .quadhd_io_num = -1,
         .max_transfer_sz = MBSP_LCD_H_RES * 80 * sizeof(uint16_t),
     };
     spi_bus_initialize(SPI2_HOST, &buscfg, SPI_DMA_CH_AUTO);
     
     esp_lcd_panel_io_handle_t io_handle = NULL;
     esp_lcd_panel_io_spi_config_t io_config = {
         .dc_gpio_num = PIN_LCD_DC,
         .cs_gpio_num = PIN_LCD_CS,
         .pclk_hz = MBSP_LCD_PIXEL_CLOCK_HZ,
         .lcd_cmd_bits = 8,
         .lcd_param_bits = 8,
         .spi_mode = 0,
         .trans_queue_depth = 10
     };
     esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)SPI2_HOST, &io_config, &io_handle);
     
     const esp_lcd_panel_dev_config_t panel_config = {
         .reset_gpio_num = PIN_LCD_RST,
         .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_BGR,
         .bits_per_pixel = 16,
     };
     esp_lcd_new_panel_st7796(io_handle, &panel_config, &lcd_panel_handle);
     esp_lcd_panel_reset(lcd_panel_handle);
     esp_lcd_panel_init(lcd_panel_handle);
     esp_lcd_panel_swap_xy(lcd_panel_handle, true);
     esp_lcd_panel_mirror(lcd_panel_handle, true, true);
     esp_lcd_panel_invert_color(lcd_panel_handle, true);
     esp_lcd_panel_disp_on_off(lcd_panel_handle, true);
     
     // 3. Инициализация тач-скрина FT6336
     gpio_config_t rst_gpio_conf = {
         .pin_bit_mask = (1ULL << PIN_TOUCH_RST),
         .mode = GPIO_MODE_OUTPUT,
         .pull_up_en = GPIO_PULLUP_DISABLE,
         .pull_down_en = GPIO_PULLDOWN_DISABLE
     };
     gpio_config(&rst_gpio_conf);
     
     gpio_set_level(PIN_TOUCH_RST, 0);
     vTaskDelay(pdMS_TO_TICKS(50));
     gpio_set_level(PIN_TOUCH_RST, 1);
     vTaskDelay(pdMS_TO_TICKS(200));
     
     i2c_master_bus_config_t i2c_mst_config = {
         .clk_source = I2C_CLK_SRC_DEFAULT,
         .i2c_port = I2C_NUM_0,
         .scl_io_num = PIN_TOUCH_SCL,
         .sda_io_num = PIN_TOUCH_SDA,
         .glitch_ignore_cnt = 7,
         .flags.enable_internal_pullup = true,
     };
     
     i2c_new_master_bus(&i2c_mst_config, &i2c_bus_handle);
     
     ESP_LOGI(TAG, "Scanning I2C bus...");
     for (uint8_t i = 1; i < 127; i++) {
         if (i2c_master_probe(i2c_bus_handle, i, 100) == ESP_OK) {
             ESP_LOGI(TAG, "Found I2C device at address: 0x%02X", i);
         }
     }
     
     esp_lcd_panel_io_handle_t tp_io_handle = NULL;
     esp_lcd_panel_io_i2c_config_t tp_io_config = {
         .dev_addr = 0x38,
         .scl_speed_hz = 100 * 1000,
         .control_phase_bytes = 1,
         .dc_bit_offset = 0,
         .lcd_cmd_bits = 8,
         .flags.disable_control_phase = 1
     };
     esp_lcd_new_panel_io_i2c(i2c_bus_handle, &tp_io_config, &tp_io_handle);
     
     esp_lcd_touch_config_t tp_cfg = {
         .x_max = MBSP_LCD_V_RES,
         .y_max = MBSP_LCD_H_RES,
         .rst_gpio_num = -1,
         .int_gpio_num = PIN_TOUCH_INT,
     };
     esp_lcd_touch_new_i2c_ft6x36(tp_io_handle, &tp_cfg, &touch_handle);
     
 #if CONFIG_ESP_LCD_TOUCH_HELPERS
     esp_lcd_touch_set_mirror_x(touch_handle, false);
     esp_lcd_touch_set_mirror_y(touch_handle, true);
     esp_lcd_touch_set_swap_xy(touch_handle, true);
 #else
     touch_handle->config.flags.swap_xy = true;
     touch_handle->config.flags.mirror_y = true;
 #endif
     
     // 4. Инициализация LVGL 9
	 ESP_LOGI(TAG, "Initializing ESP LVGL Adapter...");
	     const esp_lv_adapter_config_t adapter_config = ESP_LV_ADAPTER_DEFAULT_CONFIG();
	     esp_err_t ret = esp_lv_adapter_init(&adapter_config);
	     if (ret != ESP_OK) {
	         ESP_LOGE(TAG, "Failed to initialize LVGL adapter: %s", esp_err_to_name(ret));
	         return NULL;
	     }

	     // Выделяем память под буфер отрисовки
	     uint32_t buffer_size = MBSP_LCD_H_RES * 80 * sizeof(uint16_t);
	     void *buf1 = heap_caps_malloc(buffer_size, MALLOC_CAP_DMA | MALLOC_CAP_INTERNAL);
	     assert(buf1 != NULL);
	     
	     // Создаем дисплей LVGL 9
	     display = lv_display_create(MBSP_LCD_H_RES, MBSP_LCD_V_RES);
	     lv_display_set_flush_cb(display, lvgl_display_flush_cb);
	     lv_display_set_buffers(display, buf1, NULL, buffer_size, LV_DISPLAY_RENDER_MODE_PARTIAL);
	     lv_display_set_color_format(display, LV_COLOR_FORMAT_RGB565_SWAPPED);
	     
	     // Регистрируем DMA коллбэк для созданного дисплея
	     const esp_lcd_panel_io_callbacks_t cbs = {
	         .on_color_trans_done = notify_lvgl_flush_ready
	     };
	     esp_lcd_panel_io_register_event_callbacks(io_handle, &cbs, display);
	     
	     // Настраиваем тачскрин
	     lv_indev_t *indev = lv_indev_create();
	     lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
	     lv_indev_set_read_cb(indev, lvgl_touch_read_cb);
	     
	     // Подключаем тему
	     extern const lv_font_t ui_font_ftRbBlck14b1n111;
	     lv_theme_t *th = lv_theme_default_init(display,
	         lv_palette_main(LV_PALETTE_BLUE),
	         lv_palette_main(LV_PALETTE_RED),
	         false,
	         &ui_font_ftRbBlck14b1n111);
	     lv_display_set_theme(display, th);
	     
	     ESP_LOGI(TAG, "Display and LVGL initialized successfully via adapter");
	     return display;
	 
 }

 void my_bsp_display_backlight_on(void) {
     ledc_set_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0, 1023);
     ledc_update_duty(LEDC_LOW_SPEED_MODE, LEDC_CHANNEL_0);
 }

 i2c_master_bus_handle_t my_bsp_i2c_get_handle(void) {
     return i2c_bus_handle;
 }


 bool bsp_display_lock(uint32_t timeout_ms)
 {
     return (esp_lv_adapter_lock(timeout_ms) == ESP_OK);
 }

 void bsp_display_unlock(void)
 {
     esp_lv_adapter_unlock();
 }
 
