/*
 * print_stm32.c
 *
 *  Created on: Jul 27, 2024
 *      Author: tyfir
 */

#include "print_stm32.h"
#include "main.h"

void setHuartPrint(UART_HandleTypeDef huart_) {
	_huart = huart_;
}


int _write(int file, uint8_t* p, int len) {
	if(HAL_UART_Transmit(&_huart, p, len, len) == HAL_OK ) {
		return len;
	}
	return 0;
}
