/*
 * led_task.c
 *
 *  Created on: 2019. 4. 4.
 *      Author: msh62
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_bt.h"
#include "driver/gpio.h"

#include "led_task.h"

void led_msg(uint8_t msg)
{
	if(msg == 0x11)
	{
		gpio_set_level(GPIO_NUM_0, 0);
		gpio_set_level(GPIO_NUM_2, 0);
		gpio_set_level(GPIO_NUM_4, 1);
	}
	else if(msg == 0x22)
	{
		gpio_set_level(GPIO_NUM_0, 1);
		gpio_set_level(GPIO_NUM_2, 0);
		gpio_set_level(GPIO_NUM_4, 0);
	}
	else if(msg == 0x33)
	{
		gpio_set_level(GPIO_NUM_0, 0);
		gpio_set_level(GPIO_NUM_2, 1);
		gpio_set_level(GPIO_NUM_4, 0);
	}
	else if(msg == 0x44)
	{
		gpio_set_level(GPIO_NUM_0, 1);
		gpio_set_level(GPIO_NUM_2, 1);
		gpio_set_level(GPIO_NUM_4, 0);
	}
}

void led_task()
{
	while(1)
	{
		gpio_set_level(GPIO_NUM_0, 0);
		gpio_set_level(GPIO_NUM_2, 0);
		gpio_set_level(GPIO_NUM_4, 1);
        vTaskDelay(1000 / portTICK_RATE_MS);

		gpio_set_level(GPIO_NUM_0, 1);
		gpio_set_level(GPIO_NUM_2, 0);
		gpio_set_level(GPIO_NUM_4, 0);
        vTaskDelay(1000 / portTICK_RATE_MS);

		gpio_set_level(GPIO_NUM_0, 0);
		gpio_set_level(GPIO_NUM_2, 1);
		gpio_set_level(GPIO_NUM_4, 0);
        vTaskDelay(1000 / portTICK_RATE_MS);

		gpio_set_level(GPIO_NUM_0, 1);
		gpio_set_level(GPIO_NUM_2, 1);
		gpio_set_level(GPIO_NUM_4, 0);
        vTaskDelay(1000 / portTICK_RATE_MS);
	}
}

void led_ready()
{
	 gpio_set_direction(GPIO_NUM_0, GPIO_MODE_OUTPUT);
	 gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);
	 gpio_set_direction(GPIO_NUM_4, GPIO_MODE_OUTPUT);


	 gpio_set_level(GPIO_NUM_0, 1);
	 gpio_set_level(GPIO_NUM_2, 1);
	 gpio_set_level(GPIO_NUM_4, 1);
	 ESP_LOGI(LED_TAG,"GPIO READY");
	 vTaskDelay(200/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 1);
	gpio_set_level(GPIO_NUM_2, 0);
	gpio_set_level(GPIO_NUM_4, 0);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 0);
	gpio_set_level(GPIO_NUM_2, 1);
	gpio_set_level(GPIO_NUM_4, 0);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 0);
	gpio_set_level(GPIO_NUM_2, 0);
	gpio_set_level(GPIO_NUM_4, 1);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 1);
	gpio_set_level(GPIO_NUM_2, 1);
	gpio_set_level(GPIO_NUM_4, 0);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 0);
	gpio_set_level(GPIO_NUM_2, 1);
	gpio_set_level(GPIO_NUM_4, 1);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 1);
	gpio_set_level(GPIO_NUM_2, 0);
	gpio_set_level(GPIO_NUM_4, 1);
	vTaskDelay(100/portTICK_PERIOD_MS);

	gpio_set_level(GPIO_NUM_0, 0);
	gpio_set_level(GPIO_NUM_2, 0);
	gpio_set_level(GPIO_NUM_4, 0);
}
