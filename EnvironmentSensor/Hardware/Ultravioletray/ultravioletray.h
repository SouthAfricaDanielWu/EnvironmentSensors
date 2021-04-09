#ifndef _ULTRAVIOLETRAY_H
#define _ULTRAVIOLETRAY_H

#include "main.h"


#define VEML6070_SLAVE_ADDRESS    0x70
#define VEML6070_READ_VALUE1      0x71   //���������ݵ�8λ
#define VEML6070_READ_VALUE2      0x73   //���������ݸ�8λ

#define VEML6070_SET_VALUE        0x22   //bit7-6 0;bit5 ACK;bit4 THD;bit3 IT1;bit2 IT0;bit1 1;bit0 SD

#define VEML6070_SLEEP            0x03   //˯�ߣ����͹���

#define VEML6070_RESET            0x06   //��ʼ��ʱд��IIC������

#define VEML6070_ARA              0x18   //��Ӧ��ַ

#define VEML6070_INIT_TRANSFER_COUNT  5 

#define VEML6070_ACK               11
#define VEML6070_BUFFER_SIZE       2



extern float Ultraviolet_concentration;

void UltravioletRay_Init(void);
void UltravioletRay_Read_Data(void);


#endif

