#include "noise.h"


unsigned char UART5TxBuffer[8]={0x01,0x03,0x00,0x00,0x00,0x01,0x84,0x0A};
static uint8_t noise_rx_counter;
float Noise_concentration;
NOISE _noise_msg;
unsigned char Noise_uart[14];
//unsigned char Noise_uart[10]={0x01,0x03,0x02,0x02,0x2C,0xB8,0xF9,0x01,0x03,0x01};



void Sensor_Noise_Init(void){
	
	MX_UART5_Init();
	//open IT
	HAL_UART_Receive_IT(&huart5,(uint8_t *)Noise_uart,14);
}



void Noise_Analysis(void){ 
			
			while(noise_rx_counter<14){
				if(Noise_uart[noise_rx_counter]==0x01&&Noise_uart[noise_rx_counter+1]==0x03&&Noise_uart[noise_rx_counter+2]==0x02)
				{
					_noise_msg.noise_num_high=Noise_uart[noise_rx_counter+3];
					_noise_msg.noise_num_low=Noise_uart[noise_rx_counter+4];
					break;
				}else{
					noise_rx_counter+=1;
				}
			}
}



void Read_Noise(void)
{
	if(Noise_uart[7]!=0x00)
	{
		Noise_Analysis();
		//HAL_Delay(1000);
		
		if(_noise_msg.noise_num_high!=NULL&&_noise_msg.noise_num_low!=NULL)
		{
			Noise_concentration=((_noise_msg.noise_num_high*256)+_noise_msg.noise_num_low)*0.1;
			printf("noise : %0.2f dB \r\n",(float)Noise_concentration);
		}
	}
	HAL_UART_Receive_IT(&huart5,(uint8_t *)Noise_uart,14);
}






















































