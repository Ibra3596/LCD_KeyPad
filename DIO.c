/*
 * DIO.c
 *
 * Created: 8/7/2020 3:55:02 PM
 *  Author: Ibrahim
 */ 
#include "DIO.h"


void DIO_SetPortDir(uint8 Port , uint8 Dir)
{
	switch(Port)
	{
		case DIO_PORTA:
		DDRA = Dir;
		break;
		
		case DIO_PORTB:
		DDRB = Dir;
		break;
		
		case DIO_PORTC:
		DDRC = Dir;
		break;
		
		case DIO_PORTD:
		DDRD = Dir;
		break;
		
		default:
		break;
	}
}
void DIO_SetPinDir(uint8 Port , uint8 Dir , uint8 Pin)
{
	switch (Dir)
	{
		case DIO_PIN_OUTPUT:
			switch(Port)
				{
						case DIO_PORTA:
						SIT_BIT(DDRA,Pin);
						break;
					
						case  DIO_PORTB:
						SIT_BIT(DDRB,Pin);
						break;
					
						case  DIO_PORTC:
						SIT_BIT(DDRC,Pin);
						break;
					
						case  DIO_PORTD:
						SIT_BIT(DDRD,Pin);
						break;
					
						default:
						break;
				}
		break;
		
		case DIO_PIN_INPUT:
			switch(Port)
				{
					case DIO_PORTA:
					CLEAR_BIT(DDRA,Pin);
					break;
			
					case  DIO_PORTB:
					CLEAR_BIT(DDRB,Pin);
					break;
			
					case  DIO_PORTC:
					CLEAR_BIT(DDRC,Pin);
					break;
			
					case  DIO_PORTD:
					CLEAR_BIT(DDRD,Pin);
					break;
				
					default:
					break;
				}
		break;
		
		default:
		break;
	}
}

void DIO_SetPortVal(uint8 Port , uint8 Val)
{
	switch(Port)
	{
		case DIO_PORTA:
		PORTA = Val;
		break;
		
		case DIO_PORTB:
		PORTB = Val;
		break;
		
		case DIO_PORTC:
		PORTC = Val;
		break;
		
		case DIO_PORTD:
		PORTD = Val;
		break;
		
		default:
		break;
	}
	
}
 
void DIO_SetPinVal(uint8 Port ,uint8 Pin, uint8 Val)
{
	switch (Val)
	{
		case DIO_PIN_HIGH:
			switch(Port)
			{
				case DIO_PORTA:
				SIT_BIT(PORTA,Pin);
				break;
				
				case  DIO_PORTB:
				SIT_BIT(PORTB,Pin);
				break;
				
				case  DIO_PORTC:
				SIT_BIT(PORTC,Pin);
				break;
				
				case  DIO_PORTD:
				SIT_BIT(PORTD,Pin);
				break;
				
				default:
				break;
			}
		break;
		
		case DIO_PIN_LOW:
			switch(Port)
			{
				case DIO_PORTA:
				CLEAR_BIT(PORTA,Pin);
				break;
			
				case  DIO_PORTB:
				CLEAR_BIT(PORTB,Pin);
				break;
			
				case  DIO_PORTC:
				CLEAR_BIT(PORTC,Pin);
				break;
			
				case  DIO_PORTD:
				CLEAR_BIT(PORTD,Pin);
				break;
			
				default:
				break;
			}
		break;
		
		default:
		break;
	}
}

void DIO_ReadPort(uint8 Port , uint8* Val)
{
	switch(Port)
	{
		case DIO_PORTA:
		*Val = PINA;
		break;
		
		case DIO_PORTB:
		*Val = PINB;
		break;
		
		case DIO_PORTC:
		*Val = PINC;
		break;
		
		case DIO_PORTD:
		*Val = PIND;
		break;
		
		default:
		break;
	}
	
}
void DIO_ReadPin(uint8 Port ,uint8 Pin, uint8* Val)
{
	switch(Port)
	{
		case DIO_PORTA:
		*Val = GET_BIT(PINA,Pin);
		break;
		
		case DIO_PORTB:
		*Val = GET_BIT(PINB,Pin);
		break;
		
		case DIO_PORTC:
		*Val = GET_BIT(PIND,Pin);
		break;
		
		case DIO_PORTD:
		*Val = GET_BIT(PIND,Pin);
		break;
		
		default:
		break;
	}
	
}

void DIO_TogglePin(uint8 Port , uint8 Pin)
{
	switch(Port)
	{
		case DIO_PORTA:
		TOGGLE_BIT(PORTA,Pin);
		break;
		
		case DIO_PORTB:
		TOGGLE_BIT(PORTB,Pin);
		break;
		
		case DIO_PORTC:
		TOGGLE_BIT(PORTC,Pin);
		break;
		
		case DIO_PORTD:
		TOGGLE_BIT(PORTD,Pin);
		break;
		
		default:
		break;
	}
	
}