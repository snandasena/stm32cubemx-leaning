//
// Created by sajith on 3/24/22.
//

#include "realtime_kernel.h"


void GPIO_Init()
{
    RCC->AHB1ENR |= GPIOD_CLOCK;
    GPIOD->MODER |= RED_BIT | GREEN_BIT | ORANGE_BIT | BLUE_BIT;
}

void Func()
{
    while (1)
    {
        /* USER CODE END WHILE */
        GPIOD->ODR |= BLUE | GREEN | ORANGE | RED;
        /* USER CODE BEGIN 3 */
    }
}