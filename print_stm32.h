/*
 * print_stm32.h
 *
 *  Created on: Jul 27, 2024
 *      Author: tyfir
 */

#include "main.h"

UART_HandleTypeDef _huart;

void setHuartPrint(UART_HandleTypeDef huart_);
int _write(int file, uint8_t* p, int len);
