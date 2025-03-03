#ifndef BEEP_H
#define BEEP_H

#include "stm32f10x.h" // 假设您使用的是STM32F10x系列

// 蜂鸣器相关宏定义
#define BEEP_GPIO_CLK        RCC_APB2Periph_GPIOB // 假设GPIOB是蜂鸣器的时钟
#define BEEP_GPIO_PORT       GPIOB
#define BEEP_PIN             GPIO_Pin_12         // 假设GPIOB的Pin12连接到蜂鸣器

// 蜂鸣器控制函数声明
void BEEP_Init(void);
void BEEP_ON(void);
void BEEP_OFF(void);

#endif // BEEP_H

