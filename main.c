#include "stm32f030x8.h"
#include <stdio.h>
#include "qtr_8rc.h"
#include "usart.h"

int main()
{
	usart_gpio_init();
	usart_init();
	clk_enable();
	gpio_config();
	adc_config();

	while(1)
	{
       // use any of the conv_start(your pin connection) for the connection of your choice. Check table in readme.md for connection refrence.
        adc_enable();
		conv_start1();
		adc_disable();

		adc_enable();
		conv_start2();
		adc_disable();

		adc_enable();
	    conv_start3();
	    adc_disable();

	    adc_enable();
		conv_start4();
		adc_disable();

		adc_enable();
	    conv_start5();
	    adc_disable();

	    adc_enable();
		conv_start6();
		adc_disable();

	}
}
