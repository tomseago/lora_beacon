idf_component_register(SRCS "common.cpp" "tasks.cpp" "config.cpp" "jsmn.cpp"
                       INCLUDE_DIRS "include"
                       REQUIRES spiffs jsmn driver app_update)


# This is needed or else the ESP_LOGX functions generate errors during compile
# because of printf format checking. Grr. See https://github.com/espressif/esp-idf/issues/10379
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
