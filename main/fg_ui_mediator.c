/*************************************************************
**Файл реализации main/fg_ui_mediator.c
** Этот файл хранит указатели на реальные функции бэкенда 
** и безопасно дергает их.
**************************************************************/
#include "fg_ui_mediator.h"
//#include "bsp/esp32_p4_wifi6_touch_lcd_35.h"
#include "bsp_display.h"
#include "esp_log.h"
#include "ui.h" // Подключаем заголовок из components/ui/

static const char *TAG = "UI_MEDIATOR";
static ui_backend_actions_t s_backend_actions = {0};

void fg_ui_mediator_register_actions(const ui_backend_actions_t *actions) {
    if (actions) {
        s_backend_actions = *actions;
        ESP_LOGI(TAG, "Backend actions successfully mapped to HMI mediator.");
    }
}

void fg_ui_mediator_init_ui(lv_obj_t *parent) {
    ESP_LOGI(TAG, "Initializing SquareLine UI via mediator layer...");
    
    if (parent == NULL) {
        // Если инициализируем на весь экран (Вариант 1)
        ui_init(); 
    } else {
        // Если встраиваем внутрь вкладки (Вариант 2, кастомный ui_init)
//        ui_Screen1 = lv_obj_create(parent); 
//        lv_obj_set_size(ui_Screen1, LV_PCT(100), LV_PCT(100));
//        lv_obj_remove_style_all(ui_Screen1); 
//        ui_Screen1_screen_init(); 
		;
    }
}

// Каждая функция проверяет, зарегистрирован ли коллбэк, защищая от NullPointer Crash
void fg_ui_mediator_trigger_wifi_scan(void) {
    if (s_backend_actions.on_wifi_scan_requested) {
        s_backend_actions.on_wifi_scan_requested();
    } else {
        ESP_LOGW(TAG, "Wifi scan requested, but no backend handler registered!");
    }
}

void fg_ui_mediator_trigger_p2p_stream(bool start) {
    if (start && s_backend_actions.on_p2p_start_stream) {
        s_backend_actions.on_p2p_start_stream();
    } else if (!start && s_backend_actions.on_p2p_stop_stream) {
        s_backend_actions.on_p2p_stop_stream();
    }
}
// 1. Вывод текста в label / textarea
void fg_ui_mediator_set_text(lv_obj_t *target_obj, const char *format, ...) {
    if (target_obj == NULL) return;

    char buffer[256];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    // Захватываем графический контекст
    if (bsp_display_lock(portMAX_DELAY)) {
        
        // Автоматически определяем тип виджета и применяем нужный метод ядра LVGL
        if (lv_obj_check_type(target_obj, &lv_label_class)) {
            lv_label_set_text(target_obj, buffer);
        } 
        else if (lv_obj_check_type(target_obj, &lv_textarea_class)) {
            lv_textarea_set_text(target_obj, buffer);
        }
        
        bsp_display_unlock();
    }
}

// 2. Переключение окон SquareLine
void fg_ui_mediator_load_screen(lv_obj_t *target_screen, lv_screen_load_anim_t anim_type, uint32_t time_ms) {
    if (target_screen == NULL) return;

    if (bsp_display_lock(portMAX_DELAY)) {
        // Загружаем экран встроенными средствами LVGL v9
        lv_screen_load_anim(target_screen, anim_type, time_ms, 0, false);
        bsp_display_unlock();
        ESP_LOGI(TAG, "UI Screen changed programmatically");
    }
}

// 3.  Switch tabs directly on a SquareLine Tabview object
void fg_ui_mediator_set_ui_tab(lv_obj_t *target_tabview, uint32_t tab_index, bool anim_en) {
    if (target_tabview == NULL) return;

    if (bsp_display_lock(portMAX_DELAY)) {
        // Native LVGL v9 renamed call for changing active tabs safely:
        lv_tabview_set_active(target_tabview, tab_index, anim_en ? LV_ANIM_ON : LV_ANIM_OFF);
        bsp_display_unlock();
        ESP_LOGI(TAG, "SquareLine Tabview selection changed programmatically to index %lu", tab_index);
    }
}

// 4. Возбуждение (симуляция) событий в UI
void fg_ui_mediator_send_event(lv_obj_t *target_obj, lv_event_code_t event_code) {
    if (target_obj == NULL) return;

    if (bsp_display_lock(portMAX_DELAY)) {
        // Отправляем событие напрямую в ядро LVGL. 
        // Это заставит SquareLine выполнить привязанный к объекту экшен/функцию
        lv_obj_send_event(target_obj, event_code, NULL);
        bsp_display_unlock();
    }
}