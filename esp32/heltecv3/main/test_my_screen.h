//
// Created by Tom Seago on 6/27/23.
//

#pragma once

#include "brain_common.h"

#include "screen.h"
#include "screen_driver_ssd1306.h"
#include "screen_test.h"


class TestMyScreen {
public:
    TestMyScreen();

    void start();

private:
    ScreenDriverSSD1306 m_driver;
    Screen m_screen;
    ScreenTest m_screenTest;
};