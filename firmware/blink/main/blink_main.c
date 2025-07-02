/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"

void app_main(void) {
    printf("Hello world!\n");
	
    gpio_reset_pin(3);
    gpio_set_direction(3, GPIO_MODE_OUTPUT);
    gpio_reset_pin(4);
    gpio_set_direction(4, GPIO_MODE_OUTPUT);

    bool toggle = true;

    for (;;) {
	toggle = !toggle;
        printf("State: %d\n", toggle);
        gpio_set_level(3, toggle);
        gpio_set_level(4, !toggle);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

    fflush(stdout);
    esp_restart();
}
