//
// Created by sajith on 3/23/22.
//

#ifndef TEST_EMBEDDED_PROJECT_REALTIME_KERNEL_H
#define TEST_EMBEDDED_PROJECT_REALTIME_KERNEL_H

#include "stm32f4xx.h"

#define RED (1U <<14)
#define GREEN (1U <<12)
#define BLUE (1U <<15)
#define ORANGE (1U <<13)

#define RED_BIT (1U<<28)
#define GREEN_BIT (1U<<24)
#define ORANGE_BIT (1U<<26)
#define BLUE_BIT (1U<<30)

#define GPIOD_CLOCK (1<<3)
void GPIO_Init();

void Func();


#endif //TEST_EMBEDDED_PROJECT_REALTIME_KERNEL_H
