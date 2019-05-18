#ifndef STM32F070_H
#define STM32F070_H

#include <stdint.h>

#define RCC 0x40021000
#define RCC_CR (*(volatile uint32_t *) (RCC + 0x00))
#define RCC_CFGR (*(volatile uint32_t *) (RCC + 0x04))
#define RCC_AHBENR (*(volatile uint32_t *) (RCC + 0x14))
#define RCC_APB1ENR (*(volatile uint32_t *) (RCC + 0x1c))
#define RCC_APB2ENR (*(volatile uint32_t *) (RCC + 0x18))
#define RCC_CFGR2 (*(volatile uint32_t *) (RCC + 0x2c))
#define RCC_CFGR3 (*(volatile uint32_t *) (RCC + 0x30))

#define GPIOA 0x48000000
#define GPIOA_MODER (*(volatile uint32_t *) (GPIOA + 0x00))
#define GPIOA_ODR (*(volatile uint32_t *) (GPIOA + 0x14))
#define GPIOA_OTYPER (*(volatile uint32_t *) (GPIOA + 0x04))
#define GPIOA_OSPEEDR (*(volatile uint32_t *) (GPIOA + 0x08))
#define GPIOA_AFRL (*(volatile uint32_t *) (GPIOA + 0x20))
#define GPIOA_AFRH (*(volatile uint32_t *) (GPIOA + 0x24))
#define GPIOA_BSRR (*(volatile uint32_t *) (GPIOA + 0x18))
#define GPIOB 0x48000400
#define GPIOB_MODER (*(volatile uint32_t *) (GPIOB + 0x00))
#define GPIOB_ODR (*(volatile uint32_t *) (GPIOB + 0x14))
#define GPIOB_OTYPER (*(volatile uint32_t *) (GPIOB + 0x04))
#define GPIOB_OSPEEDR (*(volatile uint32_t *) (GPIOB + 0x08))
#define GPIOB_AFRL (*(volatile uint32_t *) (GPIOB + 0x20))
#define GPIOB_AFRH (*(volatile uint32_t *) (GPIOB + 0x24))
#define GPIOB_BSRR (*(volatile uint32_t *) (GPIOB + 0x18))
#define GPIOC 0x48000800
#define GPIOC_MODER (*(volatile uint32_t *) (GPIOC + 0x00))
#define GPIOC_ODR (*(volatile uint32_t *) (GPIOC + 0x14))
#define GPIOC_OTYPER (*(volatile uint32_t *) (GPIOC + 0x04))
#define GPIOC_OSPEEDR (*(volatile uint32_t *) (GPIOC + 0x08))
#define GPIOC_AFRL (*(volatile uint32_t *) (GPIOC + 0x20))
#define GPIOC_AFRH (*(volatile uint32_t *) (GPIOC + 0x24))
#define GPIOC_BSRR (*(volatile uint32_t *) (GPIOC + 0x18))
#define GPIOD 0x48000c00
#define GPIOD_MODER (*(volatile uint32_t *) (GPIOD + 0x00))
#define GPIOD_ODR (*(volatile uint32_t *) (GPIOD + 0x14))
#define GPIOD_OTYPER (*(volatile uint32_t *) (GPIOD + 0x04))
#define GPIOD_OSPEEDR (*(volatile uint32_t *) (GPIOD + 0x08))
#define GPIOD_AFRL (*(volatile uint32_t *) (GPIOD + 0x20))
#define GPIOD_AFRH (*(volatile uint32_t *) (GPIOD + 0x24))
#define GPIOD_BSRR (*(volatile uint32_t *) (GPIOD + 0x18))

#define TIM3 0x40000400
#define TIM3_CR1 (*(volatile uint16_t *) (TIM3 + 0x00))
#define TIM3_CCMR1 (*(volatile uint16_t *) (TIM3 + 0x18))
#define TIM3_CCMR2 (*(volatile uint16_t *) (TIM3 + 0x1c))
#define TIM3_CCER (*(volatile uint16_t *) (TIM3 + 0x20))
#define TIM3_PSC (*(volatile uint16_t *) (TIM3 + 0x28))
#define TIM3_ARR (*(volatile uint16_t *) (TIM3 + 0x2c))
#define TIM3_CCR1 (*(volatile uint16_t *) (TIM3 + 0x34))
#define TIM3_CCR2 (*(volatile uint16_t *) (TIM3 + 0x38))
#define TIM3_CCR3 (*(volatile uint16_t *) (TIM3 + 0x3c))
#define TIM3_CCR4 (*(volatile uint16_t *) (TIM3 + 0x40))

#define TIM14 0x40002000
#define TIM14_CR1 (*(volatile uint16_t *) (TIM14 + 0x00))
#define TIM14_CCMR1 (*(volatile uint16_t *) (TIM14 + 0x18))
#define TIM14_CCER (*(volatile uint16_t *) (TIM14 + 0x20))
#define TIM14_PSC (*(volatile uint16_t *) (TIM14 + 0x24))
#define TIM14_ARR (*(volatile uint16_t *) (TIM14 + 0x2c))
#define TIM14_CCR1 (*(volatile uint16_t *) (TIM14 + 0x34))

#endif