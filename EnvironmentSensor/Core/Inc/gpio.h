/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for
  *                      the gpio
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
	 
	 
//POWER ON/OFF
#define MODULE_POWER_ON_OFF_Pin GPIO_PIN_1
#define MODULE_POWER_ON_OFF_Port GPIOE
	 
	 
//RED--LED
#define RED_LED_Pin GPIO_PIN_1
#define RED_LED_GPIO_Port GPIOD
//GREEN--LED
#define GREEN_LED_Pin GPIO_PIN_0
#define GREEN_LED_GPIO_Port GPIOD
	 
	 
//ULTRAVIOLET--ON/OFF
#define ULTRAVIOLET_ON_OFF_Pin GPIO_PIN_5
#define ULTRAVIOLET_ON_OFF_Port GPIOG
//ULTRAVIOLET--KEY
#define ULTRAVIOLET_KEY_Pin GPIO_PIN_9
#define ULTRAVIOLET_KEY_GPIO_Port GPIOG
//ULTRAVIOLET--LED
#define ULTRAVIOLET_LED_Pin GPIO_PIN_6
#define ULTRAVIOLET_LED_GPIO_Port GPIOG




/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_GPIO_Init(void);

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
