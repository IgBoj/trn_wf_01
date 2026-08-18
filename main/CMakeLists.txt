cmake_minimum_required(VERSION 3.16)

# 1. Автоматически находим все исходники UI
file(GLOB_RECURSE UI_SOURCES "*.c")
file(GLOB_RECURSE UI_HEADERS "*.h")


idf_component_register(
	SRCS "trn_main.c" ${UI_SOURCES}
	INCLUDE_DIRS "."
    PRIV_INCLUDE_DIRS .
    PRIV_REQUIRES
    	esp_mm
    	esp_wifi
	REQUIRES 
	    ui
#		esp_lcd_ek79007 
		esp_lvgl_adapter 
		lvgl__lvgl
        esp_timer 
        driver 
        esp_driver_ledc 
        esp_driver_spi 
        esp_driver_i2c 
        esp_driver_gpio
		nvs_flash
		esp_hw_support
		esp_driver_ppa
		esp_new_jpeg
)