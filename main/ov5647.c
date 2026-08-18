/*
 * ov5647.c
 *
 *  Created on: 10 авг. 2026 г.
 *      Author: boss
 */

#include "ov5647.h"
#include "esp_log.h"
#include "freertos/projdefs.h"
#include "portmacro.h"

static const char *TAG = "ov_5647";


 /* Прямая запись в регистр OV5647 через новое API I2C */

 esp_err_t ov5647_write_reg(i2c_master_bus_handle_t bus, uint16_t reg, uint8_t val) {
     i2c_device_config_t dev_cfg = {
         .dev_addr_length = I2C_ADDR_BIT_LEN_7,
         .device_address = 0x36,
         .scl_speed_hz = 100000,
     };
     i2c_master_dev_handle_t dev_handle;
     esp_err_t ret = i2c_master_bus_add_device(bus, &dev_cfg, &dev_handle);
     if (ret != ESP_OK) return ret;

     uint8_t data[3] = { (uint8_t)((reg >> 8) & 0xFF), (uint8_t)(reg & 0xFF), val };
     ret = i2c_master_transmit(dev_handle, data, 3, pdMS_TO_TICKS(100));
     i2c_master_bus_rm_device(dev_handle);
     return ret;
 }
 

 /* Прямое чтение из регистра OV5647 */
 esp_err_t ov5647_read_reg(i2c_master_bus_handle_t bus, uint16_t reg, uint8_t *val) {
     i2c_device_config_t dev_cfg = {
         .dev_addr_length = I2C_ADDR_BIT_LEN_7,
         .device_address = 0x36,
         .scl_speed_hz = 100000,
     };
     i2c_master_dev_handle_t dev_handle;
     esp_err_t ret = i2c_master_bus_add_device(bus, &dev_cfg, &dev_handle);
     if (ret != ESP_OK) return ret;

     // Сначала отправляем адрес регистра (Write transaction)
     uint8_t reg_data[2] = { (uint8_t)((reg >> 8) & 0xFF), (uint8_t)(reg & 0xFF) };
     ret = i2c_master_transmit(dev_handle, reg_data, 2, pdMS_TO_TICKS(100));
     if (ret != ESP_OK) {
         i2c_master_bus_rm_device(dev_handle);
         return ret;
     }

     // Затем читаем значение (Read transaction)
     ret = i2c_master_receive(dev_handle, val, 1, pdMS_TO_TICKS(100));
     i2c_master_bus_rm_device(dev_handle);
     return ret;
 }

 /* Функция для вывода текущего состояния параметров камеры */
 void read_and_log_ov5647_params(i2c_master_bus_handle_t bus) {
     ESP_LOGI(TAG, "=== Reading current OV5647 parameters ===");
     
     uint8_t val = 0;
     
     // Яркость (0x5587)
     if (ov5647_read_reg(bus, 0x5587, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Brightness (0x5587): 0x%02X (%d)", val, val);
     
     // Контраст (0x5588)
     if (ov5647_read_reg(bus, 0x5588, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Contrast   (0x5588): 0x%02X (%d)", val, val);
         
     // Насыщенность U (0x5583)
     if (ov5647_read_reg(bus, 0x5583, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Saturation U (0x5583): 0x%02X", val);

     // Насыщенность V (0x5584)
     if (ov5647_read_reg(bus, 0x5584, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Saturation V (0x5584): 0x%02X", val);

     // AWB Control (0x5180)
     if (ov5647_read_reg(bus, 0x5180, &val) == ESP_OK) 
         ESP_LOGI(TAG, "AWB Ctrl   (0x5180): 0x%02X", val);

     // Gain High (0x350A)
     if (ov5647_read_reg(bus, 0x350A, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Gain High  (0x350A): 0x%02X", val);
         
     // Gain Low (0x350B)
     if (ov5647_read_reg(bus, 0x350B, &val) == ESP_OK) 
         ESP_LOGI(TAG, "Gain Low   (0x350B): 0x%02X", val);

     ESP_LOGI(TAG, "=== End of OV5647 parameters ===");
 }
 

 /* Настройка яркости и параметров изображения через регистры OV5647 */
 void configure_ov5647_brightness(i2c_master_bus_handle_t bus) {
     ESP_LOGI(TAG, "Configuring OV5647 registers for brightness...");
     
     // 1. Яркость (Brightness): Регистр 0x5587
     // Диапазон: 0x00 - 0xFF. По умолчанию обычно 0x00 или 0x10.
     ov5647_write_reg(bus, 0x5587, 0x40); 
     
     // 2. Контраст (Contrast): Регистр 0x5588
     ov5647_write_reg(bus, 0x5588, 0x08);

     // 3. Насыщенность (Saturation): Регистры 0x5583 (U) и 0x5584 (V)
     ov5647_write_reg(bus, 0x5583, 0x08);
     ov5647_write_reg(bus, 0x5584, 0x08);

     // 4. Автоматический баланс белого (AWB): Регистр 0x5180
     ov5647_write_reg(bus, 0x5180, 0x01); 

     // 5. Максимальное усиление (Gain): Регистры 0x350A (High) и 0x350B (Low)
     ov5647_write_reg(bus, 0x350A, 0x03); 
     ov5647_write_reg(bus, 0x350B, 0xFF); 

     ESP_LOGI(TAG, "OV5647 brightness configured.");
 }

