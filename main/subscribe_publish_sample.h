/*
 * subscribe_publish_sample.h
 *
 *  Created on: 2019. 4. 4.
 *      Author: msh62
 */

#ifndef MAIN_SUBSCRIBE_PUBLISH_SAMPLE_H_
#define MAIN_SUBSCRIBE_PUBLISH_SAMPLE_H_


#define MSG_ID_NAME 0xA0
#define MSG_ID_PASSWORD 0XA1
#define MSG_ID_CONNECT 0X43

void wifi_connect_unpack(uint8_t *param);
void initialise_wifi();
void aws_iot_task(void *param);

typedef struct {
	uint8_t msg_id;
	uint8_t total_num;
	uint8_t current_num;
	uint8_t reserved;
	uint8_t value[16];
} wifi_connect_packet;


#endif /* MAIN_SUBSCRIBE_PUBLISH_SAMPLE_H_ */
