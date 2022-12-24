/*
 * global.h
 *
 *  Created on: Dec 24, 2022
 *      Author: WELCOME
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

// Status command parser
#define INIT_STRING 	0
#define WAIT_TO_END		1

// Status UART communication
#define WAIT_RST 		6
#define SEND_ADC		7
#define WAIT_TO_OK 		8
#define MAX_BUFFER_SIZE 30

extern int status_parser;
extern int status_uart;

// Variables to read data
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

// Variables to read command
extern uint8_t command_flag;
extern uint8_t command[MAX_BUFFER_SIZE];
extern uint8_t command_index;

// String to display console
extern char str[50];
// ADC Value
extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
