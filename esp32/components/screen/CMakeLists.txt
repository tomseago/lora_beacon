idf_component_register(SRCS 
                        "screen.cpp" "screen_driver.cpp" "screen_driver_ssd1306.cpp" "screen_test.cpp" 
                        "widget_wrangler.cpp"
                    INCLUDE_DIRS "include"
                    REQUIRES brain-util)
