#include "Bluetooth.h"


void BLE_Init(UART_HandleTypeDef &huart,uint8_t *name,uint8_t mode){
	BLE_setName(UART_HandleTypeDef &huart,uint8_t *name);
	BLE_setHosten();
	BLE_setStarten();
}

void BLE_SetName(UART_HandleTypeDef &huart,uint8_t *name){
	uint8_t NAME[] = "NAME";
	strcpy(command,AT);
	strcat(command,NAME);
	strcat(command,name);
	strcat(command,ENTER);
	uint16_t size = sizeof(commmand) / sizeof(uint8_t);
	HAL_UART_Transmit_DMA(&huart,command,size);
	huart->State=HAL_UART_STATE_READY; 
}

void BLE_SetHosten(UART_HandleTypeDef &huart,uint8_t mode){
	uint8_t ROLE[] = "ROLE";
	strcpy(command,AT);
	strcat(command,ROLE);
	if(mode == 0){
		strcat(command,mode);
	}
	else if(mode == 1){
		strcmp(command,mode);
	}
	strcat(command,ENTER);
	
	
}

void BLE_SetStarten(UART_HandleTypeDef &huart){
	
}
