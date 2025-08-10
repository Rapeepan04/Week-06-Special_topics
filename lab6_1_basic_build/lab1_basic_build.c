#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("Hello from lab1_basic_build.c!\n");

    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
