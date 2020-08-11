/*
 * Button.c
 *
 * Created: 8/7/2020 8:12:50 PM
 *  Author: Ibrahim
 */ 


#include "Button.h"
#define  F_CPU 16000000
#include <util/delay.h>

void Button0_Init(void)
{
	
	 DIO_SetPinDir(DIO_PORTB , DIO_PIN0 , DIO_PIN_LOW);
}

uint8 Button0_GetValue(void)
{
	uint8 value = 0;
	
	value = GET_BIT(PINB,0);
	
	while (GET_BIT(PINB,0));
	
	_delay_ms(20);
	
	return value;
}
/*
void Button1_Init(void)
{
	
	DIO_SetPinDir(DIO_PORTB , DIO_PIN1 , DIO_PIN_LOW);
}

uint8 Button1_GetValue(void)
{
	uint8 value = 0;
	
	value = GET_BIT(PINB,1);
	
	while (GET_BIT(PINB,1));
	
	_delay_ms(20);
	
	return value;
}*/