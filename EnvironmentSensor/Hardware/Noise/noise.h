/**
  ******************************************************************************
  * File Name          : noise.h
  * Description        : This file contains all the functions prototypes for
  *                      the gpio
  ******************************************************************************
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __NOISE_H
#define __NOISE_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

//uart5--noise
//Stimulate Noise Sensor 
extern unsigned char UART5TxBuffer[];
//01 03 02 01 F1 78 50  //01<<8+F1
	 
	 
typedef struct{
	uint8_t noise_num_high;
	uint8_t noise_num_low;
}__PACKED NOISE;	
extern NOISE _noise_msg;
extern float Noise_concentration;

/* USER CODE END Private defines */
void Sensor_Noise_Init(void);
void Noise_Analysis(void);
void Read_Noise(void);
extern unsigned char Noise_uart[14];
	 
	 
	 
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
