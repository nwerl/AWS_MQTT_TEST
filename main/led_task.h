/*
 * led_task.h
 *
 *  Created on: 2019. 4. 4.
 *      Author: msh62
 */
#include <stdint.h>

#ifndef MAIN_LED_TASK_H_
#define MAIN_LED_TASK_H_

#define LED_TAG "LED_TASK"

void led_msg(uint8_t msg);
void led_task();
void led_ready();

#endif /* MAIN_LED_TASK_H_ */
