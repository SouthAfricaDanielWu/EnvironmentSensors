#include "co2.h"



/*-----USART3--CO2-----------------------------*/
unsigned char UART3TxBuffer[8]={0xFE,0x04,0x00,0x03,0x00,0x01,0xD5,0xC5};
static uint8_t co2_rx_counter=0;
float Co2_concentration;
CO2 _co2_msg;
unsigned char Co2_uart[14];




void Sensor_Co2_Init(void){
	
	MX_USART3_UART_Init();
	//open IT
	HAL_UART_Receive_IT(&huart3,(uint8_t *)Co2_uart,14);
}



void Co2_Analysis(void){ 
			//FE 04 02 03 BE 2D A4 //CO2 READ 03*256+BE
			while(co2_rx_counter<14){
				if(Co2_uart[co2_rx_counter]==0xFE&&Co2_uart[co2_rx_counter+1]==0x04&&Co2_uart[co2_rx_counter+2]==0x02)
				{
					_co2_msg.co2_num_high=Co2_uart[co2_rx_counter+3];
					_co2_msg.co2_num_low=Co2_uart[co2_rx_counter+4];
					break;
				}else{
					co2_rx_counter+=1;
				}
			}
}



void Read_Co2(void)
{
	if(Co2_uart[7]!=0x00)
	{
		Co2_Analysis();
		//HAL_Delay(1000);
		
		if(_co2_msg.co2_num_high!=NULL&&_co2_msg.co2_num_low!=NULL)
		{
			Co2_concentration=(_co2_msg.co2_num_high*256)+_co2_msg.co2_num_low;
			printf("Co2 concentration: %0.2f ppm \r\n",(float)Co2_concentration);
		}
	}
	HAL_UART_Receive_IT(&huart3,(uint8_t *)Co2_uart,14);
}






















































