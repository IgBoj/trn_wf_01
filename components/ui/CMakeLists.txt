cmake_minimum_required(VERSION 3.16)

# 1. Автоматически находим все исходники UI
file(GLOB_RECURSE UI_SOURCES "*.c")
file(GLOB_RECURSE UI_HEADERS "*.h")

# 2. Автоматический патч файлов на лету перед компиляцией
foreach(FILE_PATH ${UI_SOURCES} ${UI_HEADERS})
    file(READ ${FILE_PATH} FILE_CONTENT)
    set(MODIFIED_FALSE 0)
    
    # Фикс 1: Исправляем путь к главному заголовку LVGL 9
    if(FILE_CONTENT MATCHES "lvgl/lvgl.h")
        string(REPLACE "lvgl/lvgl.h" "lvgl.h" FILE_CONTENT "${FILE_CONTENT}")
        set(MODIFIED_FALSE 1)
    endif()
    
    # Фикс 2: Аппаратное выравнивание массивов шрифтов по границе 4 байт для Flash-кэша ESP32-P4
    if(FILE_PATH MATCHES "ui_font_")
        if(FILE_CONTENT MATCHES "static const uint8_t" AND NOT FILE_CONTENT MATCHES "aligned\\(4\\)")
            string(REPLACE "static const uint8_t" "static const uint8_t __attribute__((aligned(4)))" FILE_CONTENT "${FILE_CONTENT}")
            set(MODIFIED_FALSE 1)
        endif()
        if(FILE_CONTENT MATCHES "static const lv_font_fmt_txt_" AND NOT FILE_CONTENT MATCHES "aligned\\(4\\)")
            string(REPLACE "static const lv_font_fmt_txt_" "static const lv_font_fmt_txt_ __attribute__((aligned(4)))" FILE_CONTENT "${FILE_CONTENT}")
            set(MODIFIED_FALSE 1)
        endif()
    endif()
    
    # Перезаписываем файл на диск только если были внесены изменения
    if(MODIFIED_FALSE)
        file(WRITE ${FILE_PATH} "${FILE_CONTENT}")
    endif()
endforeach()

# 3. Стандартная регистрация компонента
idf_component_register(
    SRCS ${UI_SOURCES}
    INCLUDE_DIRS "." "screens" "components" "fonts"
    REQUIRES lvgl__lvgl
)
