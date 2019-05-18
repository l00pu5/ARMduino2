#include <stdint.h>
#include "stm32f070.h"

void enable_clock(void);
void enable_GPIO_clock(void);
void enable_PERIPH_clock(void);
void configure_GPIO_B(void);
void configure_GPIO_C(void);
void configure_TIM3(void);
void configure_TIM14(void);
void delay(void);
void delay2(void);

void main(void)
{
 //enable_clock();
 enable_GPIO_clock();
 enable_PERIPH_clock();
 configure_GPIO_B();
 configure_GPIO_C();
 configure_TIM3();
 configure_TIM14();
 while(1)
 {
  for(unsigned int x=0; x<=0xffff; x++)
  {
   TIM3_CCR1 = x;
   TIM3_CCR2 = x;
   TIM3_CCR3 = x;
   TIM3_CCR4 = x;
   TIM14_CCR1 = x;
   delay();
  }
 }
}

void enable_clock(void)
{
 // TODO: enable PLL and wait for PLLRDY
}

void enable_GPIO_clock(void)
{
 RCC_AHBENR = 0x5e0014;
}

void enable_PERIPH_clock(void)
{
 RCC_APB1ENR = 0x102; // TIM3 + TIM14
}

void configure_GPIO_B(void)
{
 GPIOB_OTYPER = 0x00;
 GPIOB_OSPEEDR = 0x00;
 GPIOB_MODER = 0x08;
 GPIOB_AFRL = 0x00;
}

void configure_GPIO_C(void)
{
 GPIOC_OTYPER = 0x00;
 GPIOC_OSPEEDR = 0x00;
 GPIOC_MODER = 0xaa000;
 GPIOC_AFRL = 0x00;
}

void configure_TIM3(void)
{
 TIM3_CCMR1 = 0x6060;
 TIM3_CCMR2 = 0x6060;
 TIM3_CCER = 0x1111;
 TIM3_PSC = 0x00;
 TIM3_ARR = 0xffff;
 TIM3_CCR1 = 0x00;
 TIM3_CCR2 = 0x00;
 TIM3_CCR3 = 0x00;
 TIM3_CCR4 = 0x00;
 TIM3_CR1 = 0x01;
}

void configure_TIM14(void)
{
 TIM14_CCMR1 = 0x60;
 TIM14_CCER = 0x01;
 TIM14_PSC = 0x00;
 TIM14_ARR = 0xffff;
 TIM14_CCR1 = 0x00;
 TIM14_CR1 = 0x01;
}

void delay(void)
{
 unsigned int _t = 0x00;
 for(_t = 0; _t < 35; _t++){}
 return;
}

void delay2(void)
{
 unsigned int _t = 0x00;
 for(_t = 0; _t < 20; _t++){}
 return;
}
