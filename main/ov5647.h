/*
 * ov5647.h
 *
 *  Created on: 10 авг. 2026 г.
 *      Author: boss
 */

#ifndef MAIN_OV5647_H_
#define MAIN_OV5647_H_
#include "esp_err.h"
#include "driver/i2c_master.h"

/* Прямая запись в регистр OV5647 через новое API I2C */
esp_err_t ov5647_write_reg(i2c_master_bus_handle_t bus, uint16_t reg, uint8_t val);

/* Прямое чтение из регистра OV5647 */
esp_err_t ov5647_read_reg(i2c_master_bus_handle_t bus, uint16_t reg, uint8_t *val);
 
/* Функция для вывода текущего состояния параметров камеры */
void read_and_log_ov5647_params(i2c_master_bus_handle_t bus);
 
/* Настройка яркости и параметров изображения через регистры OV5647 */
void configure_ov5647_brightness(i2c_master_bus_handle_t bus);

#endif /* MAIN_OV5647_H_ */
