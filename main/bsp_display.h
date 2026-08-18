/*
 * bsp_display.h
 *
 *  Created on: 29 июл. 2026 г.
 *      Author: boss
 */

#ifndef BSP_DISPLAY_H
#define BSP_DISPLAY_H

#include "freertos/idf_additions.h"
#include "lvgl.h"
#include "driver/i2c_master.h"
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

 // Размеры дисплея Waveshare 3.5"
#define MBSP_LCD_H_RES         480
#define MBSP_LCD_V_RES         320
#define MBSP_LCD_PIXEL_CLOCK_HZ (40 * 1000 * 1000)

 // GPIO пины Waveshare 3.5"
#define PIN_LCD_MOSI      GPIO_NUM_20
#define PIN_LCD_SCLK      GPIO_NUM_21
#define PIN_LCD_MISO      GPIO_NUM_22
#define PIN_LCD_CS        GPIO_NUM_23
#define PIN_LCD_DC        GPIO_NUM_26
#define PIN_LCD_RST       GPIO_NUM_27
#define PIN_LCD_BL        GPIO_NUM_28
#define PIN_TOUCH_SCL     GPIO_NUM_8
#define PIN_TOUCH_SDA     GPIO_NUM_7
#define PIN_TOUCH_RST     GPIO_NUM_29
#define PIN_TOUCH_INT     GPIO_NUM_50

 /**
  * @brief Инициализация дисплея, LVGL и тач-панели
  * @return Указатель на lv_display_t или NULL при ошибке
  */
 lv_display_t *my_bsp_display_start(void);

 /**
  * @brief Включение подсветки дисплея
  */
void my_bsp_display_backlight_on(void);

 /**
  * @brief Получение хэндла I2C шины (общая с тачем и камерой)
  */
 i2c_master_bus_handle_t my_bsp_i2c_get_handle(void);

 /**
  * @brief Take LVGL mutex
  *
  * @param timeout_ms Timeout in [ms]. 0 will block indefinitely.
  * @return true  Mutex was taken
  * @return false Mutex was NOT taken
  */
 bool bsp_display_lock(uint32_t timeout_ms);

 /**
  * @brief Give LVGL mutex
  *
  */
 void bsp_display_unlock(void);
 /**
  * @brief Получение мьютекса LVGL для синхронизации
  */
 //SemaphoreHandle_t bsp_get_lvgl_mutex(void);

 #ifdef __cplusplus
 }
 #endif

 #endif // BSP_DISPLAY_H