//
// Created by Tom Seago on 6/27/23.
//

#include "test_my_screen.h"

#include "sysmon.h"

#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"

static const char* TAG = TAG_BRAIN;

TestMyScreen::TestMyScreen() :
    m_driver(GPIO_NUM_18, GPIO_NUM_17, GPIO_NUM_21), // RST = 21
    m_screen(m_driver),
    m_screenTest(m_screen)
{

}

void
TestMyScreen::start() {
    gSysMon.start(DefaultBrainTasks.sysmon);

    GlobalConfig.load();

    m_screen.start(DefaultBrainTasks.screen);
    m_screenTest.start(DefaultBrainTasks.screenTest);
}