#include "qtr_8a.h"

#include "stm32f030x8.h"
#include <stdio.h>
#include <stdint.h>
#include "usart.h"



void clk_enable()
{
	//GPIO A B C
	RCC->AHBENR |= (1<<17);
	RCC->AHBENR |= (1<<18);
	RCC->AHBENR |= (1<<19);

	//ADC
	RCC->APB2ENR |= (1<<9);

}

void gpio_config()
{
	//port mode
	//PA0
	GPIOA->MODER |= (1<<0);
	GPIOA->MODER |= (1<<1);
	//PA1
	GPIOA->MODER |= (1<<2);
	GPIOA->MODER |= (1<<3);
	//PA4
	GPIOA->MODER |= (1<<8);
	GPIOA->MODER |= (1<<9);
	//PB0
	GPIOB->MODER |= (1<<0);
	GPIOB->MODER |= (1<<1);
	//PC0
	GPIOC->MODER |= (1<<0);
	GPIOC->MODER |= (1<<1);
	//PC1
	GPIOC->MODER |= (1<<2);
	GPIOC->MODER |= (1<<3);

    //pupdr disabled
	GPIOA->PUPDR &=~ (1<<0);
	GPIOA->PUPDR &=~ (1<<1);
	//PA1
	GPIOA->PUPDR &=~ (1<<2);
	GPIOA->PUPDR &=~ (1<<3);
	//PA4
	GPIOA->PUPDR &=~ (1<<8);
	GPIOA->PUPDR &=~ (1<<9);
	//PB0
	GPIOB->PUPDR &=~ (1<<0);
	GPIOB->PUPDR &=~ (1<<1);
	//PC0
	GPIOC->PUPDR &=~ (1<<0);
	GPIOC->PUPDR &=~ (1<<1);
	//PC1
	GPIOC->PUPDR &=~ (1<<2);
	GPIOC->PUPDR &=~ (1<<3);

}

void adc_enable(void)
{
	 ADC1->CR     |=  (1<<0);
}

void adc_disable(void)
{
     ADC1->CR     &=~ (1<<0);
}

void adc_config(void)
{


	ADC1->SMPR |= ADC_SMPR_SMP_0 | ADC_SMPR_SMP_1 | ADC_SMPR_SMP_2;



}

void conv_start1(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL0;
	long unsigned int ADC_Result1;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result1 = ADC1->DR;

	 printf("Sensor %d, result: %lu\n",1,ADC_Result1);

}

void conv_start2(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL1;
	long unsigned int ADC_Result2;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result2 = ADC1->DR;

	 printf("Sensor %d, result: %lu\n",2,ADC_Result2);

}

void conv_start3(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL4;
	long unsigned int ADC_Result3;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result3 = ADC1->DR;

	 printf("Sensor %d, result: %lu\n",3,ADC_Result3);

}

void conv_start4(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL8;
	long unsigned int ADC_Result4;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result4= ADC1->DR;

	 printf("Sensor %d, result: %lu\n",4,ADC_Result4);

}

void conv_start5(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL10;
	long unsigned int ADC_Result5;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result5 = ADC1->DR;

	 printf("Sensor %d, result: %lu\n",5,ADC_Result5);

}

void conv_start6(void)
{
	ADC1->CHSELR = ADC_CHSELR_CHSEL11;
	long unsigned int ADC_Result6;
	ADC1->CR |= ADC_CR_ADSTART;
	 while ((ADC1->ISR & ADC_ISR_EOC) == 0)
	 {

	 }
	 ADC_Result6 = ADC1->DR;

	 printf("Sensor %d, result: %lu\n",6,ADC_Result6);

}

