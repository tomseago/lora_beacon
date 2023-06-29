#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_event.h"

#include "esp_log.h"

#include "brain_common.h"
#include "test_my_screen.h"

static TestMyScreen gTestMyScreen;

extern "C" void app_main(void)
{
    esp_log_level_set("*", ESP_LOG_WARN);

    // TODO: Copy over more esp_log_level_set() things for specific components??

    // Configure the default event loop before anything else happens
    ESP_LOGD(TAG_MAIN, "Main task name = %s", pcTaskGetName(nullptr));
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    // SPIFFS is also a very basic thing
    ESP_ERROR_CHECK(brain_init_spiffs());

    // And now we are ready to boot into our happy happy
    // C++ componentized world.
    gTestMyScreen.start();

}
