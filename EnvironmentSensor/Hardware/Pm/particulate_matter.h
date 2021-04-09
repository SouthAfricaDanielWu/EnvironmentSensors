/**
  ******************************************************************************
  * File Name          : particulate_matter.h
  * Description        : This file contains all the functions prototypes for
  *                      the gpio
  ******************************************************************************
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PARTICULATE_MATTER_H
#define __PARTICULATE_MATTER_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
//#include "usart.h"
/* USER CODE BEGIN Private defines */

//usart2--PM
typedef struct{
	int8_t particulate_matter_pm1_high;
	int8_t particulate_matter_pm1_low;
	int8_t particulate_matter_pm25_high;
	int8_t particulate_matter_pm25_low;
	int8_t particulate_matter_pm10_high;
	int8_t particulate_matter_pm10_low;
}__PACKED PARTICULATE_MATTER;	
extern PARTICULATE_MATTER _particulate_matter_msg;


extern unsigned char PM_uart[50];

extern float PM1_concentration;
extern float PM25_concentration;
extern float PM10_concentration;

void Sensor_PM_Init(void);
void PM_Analysis(void);
void Read_PM(void);
	 
	 
	 
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
