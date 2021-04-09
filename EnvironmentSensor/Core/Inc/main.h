/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include "stm32l4xx.h"
#include "i2c.h"
#include "usart.h"
#include "usb_device.h"
#include "gpio.h"
#include "tem_Hum_lux.h"
#include "ultravioletray.h"
#include "adc.h"
#include "noise.h"
#include "co2.h"	
#include "particulate_matter.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//POWER ON/OFF
#define MODULE_POWER_ON_OFF_Pin GPIO_PIN_1
#define MODULE_POWER_ON_OFF_Port GPIOE


//NB--ON/OFF
#define NB_ON_OFF_Pin GPIO_PIN_7
#define NB_ON_OFF_Port GPIOE
//NB--RESET--ON/OFF
#define RESET_NB_ON_OFF_Pin GPIO_PIN_12
#define RESET_NB_ON_OFF_Port GPIOE


//Wind--ON/OFF
#define WIND_ON_OFF_Pin GPIO_PIN_0
#define WIND_ON_OFF_Port GPIOG
//Wind--KEY
#define WIND_KEY_Pin GPIO_PIN_12
#define WIND_KEY_GPIO_Port GPIOG
//Wind--LED
#define WIND_LED_Pin GPIO_PIN_1
#define WIND_LED_GPIO_Port GPIOG


//CO2--ON/OFF
#define CO2_ON_OFF_Pin GPIO_PIN_11
#define CO2_ON_OFF_Port GPIOD
//CO2--LED
#define CO2_LED_Pin GPIO_PIN_10
#define CO2_LED_GPIO_Port GPIOD
//CO2--Key
#define CO2_KEY_Pin GPIO_PIN_10
#define CO2_KEY_GPIO_Port GPIOG


//PM--ON/OFF
#define PM_ON_OFF_Pin GPIO_PIN_12
#define PM_ON_OFF_Port GPIOF
//PM--LED
#define PM_LED_Pin GPIO_PIN_11
#define PM_LED_GPIO_Port GPIOF
//PM--Key
#define PM_KEY_Pin GPIO_PIN_13
#define PM_KEY_GPIO_Port GPIOG


//NOISE--ON/OFF
#define NOISE_ON_OFF_Pin GPIO_PIN_14
#define NOISE_ON_OFF_Port GPIOF
//NOISE--KEY
#define NOISE_KEY_Pin GPIO_PIN_11
#define NOISE_KEY_GPIO_Port GPIOG
//NOISE--LED
#define NOISE_LED_Pin GPIO_PIN_15
#define NOISE_LED_GPIO_Port GPIOF

//ATMOSPHERIC_PRESSURE--ON/OFF
#define ATMOSPHERIC_PRESS_ON_OFF_Pin GPIO_PIN_15
#define ATMOSPHERIC_PRESS_ON_OFF_Port GPIOD
//ATMOSPHERIC_PRESSURE--KEY
#define ATMOSPHERIC_PRESSURE_KEY_Pin GPIO_PIN_3
#define ATMOSPHERIC_PRESSURE_KEY_GPIO_Port GPIOD
//ATMOSPHERIC_PRESSURE--LED
#define ATMOSPHERIC_PRESSURE_LED_Pin GPIO_PIN_2
#define ATMOSPHERIC_PRESSURE_LED_GPIO_Port GPIOG

//ILLUMINATION--ON_OFF
#define ILLUMINATION_ON_OFF_Pin GPIO_PIN_3
#define ILLUMINATION_ON_OFF_Port GPIOG
//ILLUMINATION--KEY
#define ILLUMINATION_KEY_Pin GPIO_PIN_4
#define ILLUMINATION_KEY_GPIO_Port GPIOD
//ILLUMINATION--LED
#define ILLUMINATION_LED_Pin GPIO_PIN_4
#define ILLUMINATION_LED_GPIO_Port GPIOG

//ULTRAVIOLET--ON/OFF
#define ULTRAVIOLET_ON_OFF_Pin GPIO_PIN_5
#define ULTRAVIOLET_ON_OFF_Port GPIOG
//ULTRAVIOLET--KEY
#define ULTRAVIOLET_KEY_Pin GPIO_PIN_9
#define ULTRAVIOLET_KEY_GPIO_Port GPIOG
//ULTRAVIOLET--LED
#define ULTRAVIOLET_LED_Pin GPIO_PIN_6
#define ULTRAVIOLET_LED_GPIO_Port GPIOG

//RED--LED
#define RED_LED_Pin GPIO_PIN_1
#define RED_LED_GPIO_Port GPIOD
//GREEN--LED
#define GREEN_LED_Pin GPIO_PIN_0
#define GREEN_LED_GPIO_Port GPIOD

/* 传感器数据类型定义 ------------------------------------------------------------*/
typedef struct
{
		float    Lux;							
		float    Humidity;        
    float    Temperature;     
		float 	 PM25;
		float    Noise;
		float    CO2;
		float 	 Ultraviolet;
		float    Battery;
		float    Press;
		float    WindSpeed;
		float    WindDirection;
} Sensor_Data_TypeDef;

extern Sensor_Data_TypeDef Sensor_Data;


/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
