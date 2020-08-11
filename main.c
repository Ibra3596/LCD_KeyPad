/*
 * DIO_first.1.c
 *
 * Created: 7/25/2020 11:53:08 PM
 * Author : Ibrahim
 */ 

//#include <avr/io.h>


#include "LED.h"
#include "Button.h"
#define  F_CPU 16000000
#include <util/delay.h>



int main(void)
{
	uint8 Button0Value =0;
	//uint8 Button1Value =0;
	LED0_Init();
	//LED1_Init();
	Button0_Init();
	//Button1_Init();
	
	LED0_ON();
	//LED1_ON();
	
    /* Replace with your application code */
	
    while (1) 
    {
		
		Button0Value = Button0_GetValue();
	//	Button1Value = Button1_GetValue();
		if(Button0Value)
		{
			LED0_TOGGLE();
		}


/*		if(Button1Value==1)
		{
			LED1_TOGGLE();
		}
		*/
    }
}

