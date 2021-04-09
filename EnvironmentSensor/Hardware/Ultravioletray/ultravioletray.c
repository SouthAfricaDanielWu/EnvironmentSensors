#include "ultravioletray.h"


float Ultraviolet_concentration;

/***************************************************************
* ��������: VEML6070_Init
* ˵    ��: д�����ʼ��BH1750
* ��    ��: ��
* �� �� ֵ: ��
***************************************************************/
void UltravioletRay_Init(void)
{ 
		//MX_I2C2_Init();
	  uint8_t t_Data = 0x06;
    HAL_I2C_Master_Transmit(&hi2c2,VEML6070_SLAVE_ADDRESS,&t_Data,1,0xff);
	
}


/***************************************************************
* ��������: Start_VEML6070_High
* ˵    ��: ����VEML6070_High
* ��    ��: ��
* �� �� ֵ: ��
***************************************************************/
void Start_VEML6070_High(void)
{
    uint8_t t_Data = 0x73;
    HAL_I2C_Master_Transmit(&hi2c2,VEML6070_SLAVE_ADDRESS,&t_Data,1,0xff); 
}

/***************************************************************
* ��������: Start_VEML6070_High
* ˵    ��: ����VEML6070_High
* ��    ��: ��
* �� �� ֵ: ��
***************************************************************/
void Start_VEML6070_Low(void)
{
    uint8_t t_Data = 0x71;
    HAL_I2C_Master_Transmit(&hi2c2,VEML6070_SLAVE_ADDRESS,&t_Data,1,0xff); 
}

/***************************************************************
* ��������: Convert_VEML6070
* ˵    ��: ��ֵת��
* ��    ��: ��
* �� �� ֵ: ��ǿֵ
***************************************************************/
float Convert_VEML6070(void)
{
	float result_uv;
	int result_high;
	int result_low;
	uint8_t BUF[1];
	
	Start_VEML6070_High();
	HAL_Delay(180);
	HAL_I2C_Master_Receive(&hi2c2, VEML6070_SLAVE_ADDRESS,BUF,1,0xff); 
	result_high=BUF[0];
	
	Start_VEML6070_Low();
	HAL_Delay(180);
	HAL_I2C_Master_Receive(&hi2c2, VEML6070_SLAVE_ADDRESS,BUF,1,0xff); 
	result_low=BUF[0];
	
	result_uv=(result_high<<8)+result_low;
  return result_uv;
}


void UltravioletRay_Read_Data(void){
	Sensor_Data.Ultraviolet=Convert_VEML6070();
}



































//void VEML6070_WriteCmd(uint8_t addr, uint8_t cmd_data)
//{
//  IIC_Start();
//	IIC_Send_Byte(addr);	   //����д����
//	IIC_Wait_Ack();
//  IIC_Send_Byte(addr);	   //����д���� 
//	IIC_Wait_Ack();
//  IIC_Stop();//����һ��ֹͣ����	
//}

//uint8_t VEML6070_ReadData(u8 addr)
//{
//	u8 temp;
//	
//  IIC_Start();
//	
//	IIC_Send_Byte(addr);	   //����д����
//	IIC_Wait_Ack();
//	
//	temp=IIC_Read_Byte(1);		   
//	
//  IIC_Stop();//����һ��ֹͣ����	
//	
//	return temp;
//}



//u16 veml6070_val;

//u16 VEML6070_ReadValue(void)
//{
//	u8  value_h=0;
//	u8  value_l=0;
//	
//  VEML6070_ReadData(VEML6070_ARA);
//	value_h = VEML6070_ReadData(VEML6070_READ_VALUE2);
//	
//	VEML6070_ReadData(VEML6070_ARA);
//	value_l = VEML6070_ReadData(VEML6070_READ_VALUE1);
//	veml6070_val = (value_h<<8) + value_l;
//	
//	VEML6070_ReadData(VEML6070_ARA);
//	VEML6070_WriteCmd(VEML6070_SLAVE_ADDRESS,VEML6070_SET_VALUE);
//	
//	delay_ms(500);
//	
//	return 1;
//}










