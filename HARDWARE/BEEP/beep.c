#include "beep.h"

// 蜂鸣器GPIO初始化
void BEEP_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    // 使能GPIOB时钟
    RCC_APB2PeriphClockCmd(BEEP_GPIO_CLK, ENABLE);

    // 配置GPIO为推挽输出模式
    GPIO_InitStructure.GPIO_Pin = BEEP_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(BEEP_GPIO_PORT, &GPIO_InitStructure);

    // 默认关闭蜂鸣器
    BEEP_OFF();
}

// 开启蜂鸣器
void BEEP_ON(void)
{
    GPIO_SetBits(BEEP_GPIO_PORT, BEEP_PIN);
}

// 关闭蜂鸣器
void BEEP_OFF(void)
{
    GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN);
}
