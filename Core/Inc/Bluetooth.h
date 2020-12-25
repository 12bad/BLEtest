/*
	本代码适用于JDY-18低功耗蓝牙模块，使用串口通信
*/

#ifndef __BLUETOOTH_H
#define __BLUETOOTH_H

#include "usart.h"
#include "string.h"

#define BLE_MODE_SLAVE 0
#define BLE_MODE_MASTER 1

uint8_t AT[] = "AT+";
uint8_t ENTER[] = "\r\n";
uint8_t command[20];

//void BLE_setName();
//void BLE_setHosten();
//void BLE_setStarten();


#endif
