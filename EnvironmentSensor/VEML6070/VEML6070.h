#ifndef _VEML6070_H
#define _VEML6070_H

#include "i2c.h"
#include "main.h"
//#include "dwt.h"

#define VEML6070_SLAVE_ADDRESS    0x70
#define VEML6070_READ_VALUE1      0x71   //紫外线数据低8位
#define VEML6070_READ_VALUE2      0x73   //紫外线数据高8位

#define VEML6070_SET_VALUE        0x22   //bit7-6 0;bit5 ACK;bit4 THD;bit3 IT1;bit2 IT0;bit1 1;bit0 SD

#define VEML6070_SLEEP            0x03   //睡眠，降低功耗

#define VEML6070_RESET            0x06   //初始化时写入IIC的数据

#define VEML6070_ARA              0x18   //响应地址

#define VEML6070_INIT_TRANSFER_COUNT  5 

#define VEML6070_ACK               11
#define VEML6070_BUFFER_SIZE       2



extern float Ultraviolet_concentration;

void VEML6070_Init(void);
void VEML6070_Read_Data(void);





#endif

