/**
  ******************************************************************************
  * File Name          : co2.h
  * Description        : This file contains all the functions prototypes for
  *                      the gpio
  ******************************************************************************
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CO2_H
#define __CO2_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usart.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

//uart3--co2
extern unsigned char UART3TxBuffer[];
	 
typedef struct{
	uint8_t co2_num_high;
	uint8_t co2_num_low;
}__PACKED CO2;	
extern CO2 _co2_msg;
extern float Co2_concentration;



void Sensor_Co2_Init(void);
void Co2_Analysis(void);
void Read_Co2(void);
extern unsigned char Co2_uart[14];
	 
	 
	 
/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
