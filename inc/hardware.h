/*
 * hardware.h
 *
 *  Created on: 6 f�vr. 2019
 *      Author: 200828272
 */

#ifndef HARDWARE_H_
#define HARDWARE_H_

#include "stm32f4xx_gpio.h"
#include "stm32f4xx_rcc.h"


#define LED2_GPIO		GPIOA
#define LED2_PinSource	GPIO_PinSource5
#define LED2_Pin		GPIO_Pin_5
#define LED3_GPIO		GPIOC
#define LED3_PinSource	GPIO_PinSource8
#define LED3_Pin		GPIO_Pin_8
#define LED4_GPIO		GPIOC
#define LED4_PinSource	GPIO_PinSource5
#define LED4_Pin		GPIO_Pin_5


#endif /* HARDWARE_H_ */
