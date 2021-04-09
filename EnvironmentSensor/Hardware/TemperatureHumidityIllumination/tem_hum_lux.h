/********************************************************************************
    * 文件名称 Tem_Hum_ill.h
    * 作     者：junfengGu
    * 版     本：V1.0
    * 编写日期 ：2020-11-01
*********************************************************************************
*********************************************************************************/
#ifndef __TEM_HUM_ILL_H__
#define __TEM_HUM_ILL_H__
/* 包含头文件 ----------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* 控制设备IO口定义 ------------------------------------------------------------*/

#define IA1_Motor_Pin GPIO_PIN_8
#define IA1_Motor_GPIO_Port GPIOB
#define IA1_Motor_GPIO_CLK_ENABLE() __HAL_RCC_GPIOB_CLK_ENABLE()
#define IA1_Light_Pin GPIO_PIN_0
#define IA1_Light_GPIO_Port GPIOA
#define IA1_Light_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()



/* 寄存器宏定义 --------------------------------------------------------------------*/
#define I2C_OWN_ADDRESS                            0x0A

#define SHT30_Addr 0x44
#define BH1750_Addr 0x46
#define BH1750_ON   0x01
#define BH1750_CON  0x10
#define BH1750_ONE  0x20
#define BH1750_RSET 0x07

void Init_Tem_Hum_Ill_Sensor(void);
void Tem_Hum_Ill_Sensor_Read_Data(void);



#endif





