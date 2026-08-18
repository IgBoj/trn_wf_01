/*
 *
 *  Created on: 8 авг. 2026 г.
 *      Author: Igor A. Boyko

** Использование отдельного промежуточного файла — это отличная инженерная практика. 
** Такой файл в архитектуре ПО называется Медиатором (HMI Mediator) или Связующим слоем (Glue Code).
** Это полностью решает две проблемы:
** --Чистота кода: Вы не захламляете ни main.c, ни файл автора 01_FG_HMI.c десятками строк логики привязки.
** -- Циклическая зависимость: Промежуточный файл выступает буфером. Компонент ui ничего не знает про main.c, 
**     а main.c ничего не знает про внутренности ui. Они оба общаются только через структуры и коллбэки медиатора.
*/
#ifndef FG_UI_MEDIATOR_H
#define FG_UI_MEDIATOR_H

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

// Структура, объединяющая все действия бэкенда (команды из main, wifi, p2p)
typedef struct {
    void (*on_wifi_scan_requested)(void);
    void (*on_p2p_start_stream)(void);
    void (*on_p2p_stop_stream)(void);
    void (*on_system_reset)(void);
} ui_backend_actions_t;

/**
 * @brief Регистрация обработчиков бэкенда в медиаторе
 */
void fg_ui_mediator_register_actions(const ui_backend_actions_t *actions);

/**
 * @brief Централизованная инициализация и связывание UI
 * @param parent Родитеский объект (например, вкладка tab_preop), или NULL для полного экрана
 */
void fg_ui_mediator_init_ui(lv_obj_t *parent);

// Функции-прослойки, которые будут вызываться из ui_events.c
void fg_ui_mediator_trigger_wifi_scan(void);
void fg_ui_mediator_trigger_p2p_stream(bool start);


/**
 * @brief 1. Вывод текста в любые текстовые виджеты SquareLine
 * @param target_obj Указатель на виджет (например, ui_Label1 или ui_TextArea1)
 * @param format Строка формата (как в printf)
 */
void fg_ui_mediator_set_text(lv_obj_t *target_obj, const char *format, ...);

/**
 * @brief 2. Переключение экранов SquareLine из Си-кода
 * @param target_screen Указатель на экран (например, ui_Screen2)
 * @param anim_type Тип анимации (например, LV_SCR_LOAD_ANIM_FADE_ON)
 * @param time_ms Время анимации в миллисекундах
 */
void fg_ui_mediator_load_screen(lv_obj_t *target_screen, lv_screen_load_anim_t anim_type, uint32_t time_ms);

/**
 * @brief 3. Switch Tabs inside a SquareLine Tabview object programmatically (LVGL v9 Fix)
 * @param target_tabview The SquareLine variable pointer (e.g., ui_TabView1)
 * @param tab_index Target tab index starting from 0
 * @param anim_en Smooth transition animation toggle (true/false)
 */
void fg_ui_mediator_set_ui_tab(lv_obj_t *target_tabview, uint32_t tab_index, bool anim_en);


/**
 * @brief 4. Принудительное возбуждение событий в UI (например, симуляция клика по кнопке)
 * @param target_obj Указатель на объект (например, ui_Button1)
 * @param event_code Код события (например, LV_EVENT_CLICKED)
 */
void fg_ui_mediator_send_event(lv_obj_t *target_obj, lv_event_code_t event_code);
/**
 * @brief 1. Вывод текста в любые текстовые виджеты SquareLine
 * @param target_obj Указатель на виджет (например, ui_Label1 или ui_TextArea1)
 * @param format Строка формата (как в printf)
 */
void fg_ui_mediator_set_text(lv_obj_t *target_obj, const char *format, ...);

/**
 * @brief 2. Переключение экранов SquareLine из Си-кода
 * @param target_screen Указатель на экран (например, ui_Screen2)
 * @param anim_type Тип анимации (например, LV_SCR_LOAD_ANIM_FADE_ON)
 * @param time_ms Время анимации в миллисекундах
 */
void fg_ui_mediator_load_screen(lv_obj_t *target_screen, lv_screen_load_anim_t anim_type, uint32_t time_ms);

/**
 * @brief 3. Переключение вкладок в нативном TabView проекта ForgeUI-P4
 * @param tab_index Порядковый номер вкладки (0 - Dashboard, 1 - Pre Op, 2 - System...)
 * @param anim_en Включить плавную анимацию переключения (true/false)
 */
void fg_ui_mediator_set_active_tab(uint32_t tab_index, bool anim_en);

/**
 * @brief 4. Принудительное возбуждение событий в UI (например, симуляция клика по кнопке)
 * @param target_obj Указатель на объект (например, ui_Button1)
 * @param event_code Код события (например, LV_EVENT_CLICKED)
 */
void fg_ui_mediator_send_event(lv_obj_t *target_obj, lv_event_code_t event_code);


#ifdef __cplusplus
}
#endif

#endif // FG_UI_MEDIATOR_H
