/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"
#include "hardware.h"
			

int main(void)
{

//GPIO init-------------------------------------
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

GPIO_InitTypeDef GPIO_InitStructure;
GPIO_InitStructure.GPIO_Pin = LED2_Pin | LED3_Pin | LED4_Pin;
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;

GPIO_Init(LED2_GPIO,&GPIO_InitStructure);

	while(1)
	{
		GPIO_SetBits(GPIOC,LED3_Pin);

		for(double i; i<10000000; i++)
		{
			asm("nop");
		}
		GPIO_SetBits(GPIOC,LED2_Pin);
		for(double i; i<10000000; i++)
		{
			asm("nop");
		}
		GPIO_ResetBits(GPIOC,LED2_Pin);
	}
}
