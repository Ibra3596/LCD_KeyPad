/*
 * LED.c
 *
 * Created: 8/7/2020 7:03:38 PM
 *  Author: Ibrahim
 */ 
#include "LED.h"
void LED0_Init(void)
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2 , DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN2 , DIO_PIN_HIGH);
}

void LED0_OFF(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN2 , DIO_PIN_LOW);
}

void LED0_TOGGLE(void)
{
	DIO_TogglePin(DIO_PORTC,DIO_PIN2);
}

/*

void LED1_Init(void)
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN7 , DIO_PIN_OUTPUT);
}
void LED1_ON(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN7 , DIO_PIN_HIGH);
}

void LED1_OFF(void)
{
	DIO_SetPinVal(DIO_PORTC , DIO_PIN7 , DIO_PIN_LOW);
}

void LED1_TOGGLE(void)
{
	DIO_TogglePin(DIO_PORTC,DIO_PIN7);
}*/