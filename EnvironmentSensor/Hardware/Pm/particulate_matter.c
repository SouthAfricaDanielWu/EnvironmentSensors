#include "particulate_matter.h"


/*-----USART2--PM25-----------------------------*/
static uint8_t particulate_matter_rx_counter=0;
unsigned char PM_uart[50];
PARTICULATE_MATTER _particulate_matter_msg;

float PM25_concentration;
float PM10_concentration;
float PM1_concentration;
//42 4D 00 1C 00 11 00 17 00 19 00 11 00 17 00 19 0B DC 03 46 00 6A 00 08 00 02 00 00 97 00 03 68 

void Sensor_PM_Init(void){

	MX_USART2_UART_Init();
	//open IT
	HAL_UART_Receive_IT(&huart2,(uint8_t *)PM_uart,50);
}

void PM_Analysis(void){ 
			
			while(particulate_matter_rx_counter<50){
				if(PM_uart[particulate_matter_rx_counter]==0x42&&PM_uart[particulate_matter_rx_counter+1]==0x4D)
				{
					_particulate_matter_msg.particulate_matter_pm1_high=PM_uart[particulate_matter_rx_counter+10];
					_particulate_matter_msg.particulate_matter_pm1_low=PM_uart[particulate_matter_rx_counter+11];
					_particulate_matter_msg.particulate_matter_pm25_high=PM_uart[particulate_matter_rx_counter+12];
					_particulate_matter_msg.particulate_matter_pm25_low=PM_uart[particulate_matter_rx_counter+13];
					_particulate_matter_msg.particulate_matter_pm10_high=PM_uart[particulate_matter_rx_counter+14];
					_particulate_matter_msg.particulate_matter_pm10_low=PM_uart[particulate_matter_rx_counter+15];
					break;
				}else{
					particulate_matter_rx_counter+=1;
				}
			}
}

void Read_PM(void)
{
	if(PM_uart[13]!=0x00||PM_uart[14]!=0x00||PM_uart[15]!=0x00)
	{
		PM_Analysis();
		
		if(_particulate_matter_msg.particulate_matter_pm1_low!=NULL&&_particulate_matter_msg.particulate_matter_pm25_low!=NULL)
		{
			PM1_concentration=(_particulate_matter_msg.particulate_matter_pm1_high*256)+_particulate_matter_msg.particulate_matter_pm1_low;
			PM25_concentration=(_particulate_matter_msg.particulate_matter_pm25_high*256)+_particulate_matter_msg.particulate_matter_pm25_low;
			PM10_concentration=(_particulate_matter_msg.particulate_matter_pm10_high*256)+_particulate_matter_msg.particulate_matter_pm10_low;
			printf("PM1_concentration : %0.2f  ug/m3 ; PM25_concentration : %0.2f  ug/m3 ; PM10_concentration : %0.2f  ug/m3 ; \r\n",PM1_concentration,PM25_concentration,PM10_concentration);
		}
	}
	HAL_UART_Receive_IT(&huart2,(uint8_t *)PM_uart,50);
}

















































