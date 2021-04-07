/**
  ******************************************************************************
  * File Name          : gpio.c
  * Description        : This file provides code for the configuration
  *                      of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

	

	GPIO_InitTypeDef GPIO_InitStruct={0};
	

  /* GPIO Ports Clock Enable */

  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOD_CLK_ENABLE();
	__HAL_RCC_GPIOE_CLK_ENABLE();
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
	HAL_PWREx_EnableVddIO2();
	//HAL_PWREx_EnableVddUSB();
/***************************************************************
* 模块名称: POWER	//0 up;1down;
***************************************************************/	
		
	//POWER ENABLE
		GPIO_InitStruct.Pin = MODULE_POWER_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(MODULE_POWER_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(MODULE_POWER_ON_OFF_Port, MODULE_POWER_ON_OFF_Pin, GPIO_PIN_SET);	
	
/***************************************************************
* 模块名称: WIND
***************************************************************/	

		//Wind--ENABLE
		GPIO_InitStruct.Pin = WIND_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(WIND_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(WIND_ON_OFF_Port, WIND_ON_OFF_Pin, GPIO_PIN_SET);
		
		
		//WD-LED
		GPIO_InitStruct.Pin = WIND_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(WIND_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(WIND_LED_GPIO_Port, WIND_LED_Pin, GPIO_PIN_RESET);

/***************************************************************
* 模块名称: PM
***************************************************************/	
		//PM enable
		GPIO_InitStruct.Pin = PM_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(PM_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(PM_ON_OFF_Port, PM_ON_OFF_Pin, GPIO_PIN_SET);
	
		/*Configure GPIO pin : F */
		GPIO_InitStruct.Pin = PM_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(PM_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(PM_LED_GPIO_Port, PM_LED_Pin, GPIO_PIN_RESET);

/***************************************************************
* 模块名称: CO2
***************************************************************/	

		//CO2 enable
		GPIO_InitStruct.Pin = CO2_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(CO2_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(CO2_ON_OFF_Port, CO2_ON_OFF_Pin, GPIO_PIN_SET);


		/*Configure GPIO pin : D*/
		GPIO_InitStruct.Pin = CO2_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(CO2_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(CO2_LED_GPIO_Port, CO2_LED_Pin, GPIO_PIN_RESET);
		

/***************************************************************
* 模块名称: NB
***************************************************************/	




	
	
/***************************************************************
* 模块名称: NB--RESET
***************************************************************/	

		
  /*Configure GPIO pin Output Level */


  /*Configure GPIO pins : PG3 PG4 PG5 PG6 */
//  GPIO_InitStruct.Pin = GPIO_PIN_3|GPIO_PIN_5;
//  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
//  GPIO_InitStruct.Pull = GPIO_NOPULL;
//  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
//  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);
//	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_3|GPIO_PIN_5, GPIO_PIN_SET);

//  /*Configure GPIO pins : PG3 PG4 PG5 PG6 */
//  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_6;
//  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
//  GPIO_InitStruct.Pull = GPIO_NOPULL;
//  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
//  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);
//	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_4|GPIO_PIN_6, GPIO_PIN_RESET);	





	
	
/***************************************************************
* 模块名称: NOISE
***************************************************************/	

		//Noise enable
		GPIO_InitStruct.Pin = NOISE_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(NOISE_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(NOISE_ON_OFF_Port, NOISE_ON_OFF_Pin, GPIO_PIN_SET);


		GPIO_InitStruct.Pin = NOISE_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(NOISE_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(NOISE_LED_GPIO_Port, NOISE_LED_Pin, GPIO_PIN_RESET);
	
	
/***************************************************************
* 模块名称: ATMOSPHERIC_PRESSURE
***************************************************************/	
		
		GPIO_InitStruct.Pin = ATMOSPHERIC_PRESS_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ATMOSPHERIC_PRESS_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ATMOSPHERIC_PRESS_ON_OFF_Port, ATMOSPHERIC_PRESS_ON_OFF_Pin, GPIO_PIN_SET);


		GPIO_InitStruct.Pin = ATMOSPHERIC_PRESSURE_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ATMOSPHERIC_PRESSURE_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ATMOSPHERIC_PRESSURE_LED_GPIO_Port, ATMOSPHERIC_PRESSURE_LED_Pin, GPIO_PIN_RESET);

/***************************************************************
* 模块名称: ILLUMINATION
***************************************************************/	
		//ILLUMINATION enable
		GPIO_InitStruct.Pin = ILLUMINATION_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ILLUMINATION_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ILLUMINATION_ON_OFF_Port, ILLUMINATION_ON_OFF_Pin, GPIO_PIN_SET);

		GPIO_InitStruct.Pin = ILLUMINATION_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ILLUMINATION_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ILLUMINATION_LED_GPIO_Port, ILLUMINATION_LED_Pin, GPIO_PIN_RESET);

/***************************************************************
* 模块名称: ULTRAVIOLET
***************************************************************/	
		
		// ULTRAVIOLET enable
		GPIO_InitStruct.Pin = ULTRAVIOLET_ON_OFF_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ULTRAVIOLET_ON_OFF_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ULTRAVIOLET_ON_OFF_Port, ULTRAVIOLET_ON_OFF_Pin, GPIO_PIN_SET);

		GPIO_InitStruct.Pin = ULTRAVIOLET_LED_Pin;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
		HAL_GPIO_Init(ULTRAVIOLET_LED_GPIO_Port, &GPIO_InitStruct);
		HAL_GPIO_WritePin(ULTRAVIOLET_LED_GPIO_Port, ULTRAVIOLET_LED_Pin, GPIO_PIN_RESET);

/***************************************************************
* 模块名称: GREEN/RED LED TIP:LED RESET
***************************************************************/	

  /*Configure GPIO pin : D*/
  GPIO_InitStruct.Pin = RED_LED_Pin|GREEN_LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
	HAL_GPIO_WritePin(GPIOD, RED_LED_Pin|GREEN_LED_Pin, GPIO_PIN_RESET);
		
}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
