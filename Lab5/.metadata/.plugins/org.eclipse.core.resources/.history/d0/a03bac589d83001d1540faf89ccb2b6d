/*
 * command_parser.c
 *
 *  Created on: Dec 24, 2022
 *      Author: WELCOME
 */
#include "command_parser.h"


void command_parser_fsm() {
	switch(status_parser) {
	case INIT_STRING:
		if(temp == '!') {
			status_parser = WAIT_TO_END;
			command_index = 0;
		}
		break;

	case WAIT_TO_END:
		if(temp == '#') {
			status_parser = INIT_STRING;
			command[command_index] = '\0';
			command_flag = 1;
		}
		else {
			if (temp == '!')
				command_index = 0;
			else {
				command[command_index++] = temp;
				if (command_index == MAX_BUFFER_SIZE) command_index = 0;
			}
		}
		break;
	default:
		break;
	}
}
