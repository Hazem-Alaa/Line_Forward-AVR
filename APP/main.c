/*
* test_code.c
*
* Created: 9 - 9 - 2024 12  :  49  :  42 PM
* Author : Abu_El_A7ZaaM
*/

#include "../MCAL/DIO/DIO_interface.h"

int main(void)
{
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN1,OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN2,OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN3,OUTPUT);
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN4,OUTPUT);
	
	DIO_voidSetPinDir(DIO_PORTB,DIO_PIN0,INPUT);
	DIO_voidSetPinDir(DIO_PORTB,DIO_PIN1,INPUT);
	
	DIO_voidSetPinVal(DIO_PORTB,DIO_PIN0,LOW);
	DIO_voidSetPinVal(DIO_PORTB,DIO_PIN1,LOW);
	while (1)
	{
		
		if (DIO_u8GetPinVal(DIO_PORTB,DIO_PIN0)==1 && DIO_u8GetPinVal(DIO_PORTB,DIO_PIN1)==1)
		{
			/*FORWARD*/
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,HIGH);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN3,HIGH);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN4,LOW);
		}

		else if (DIO_u8GetPinVal(DIO_PORTB,DIO_PIN0)==0 && DIO_u8GetPinVal(DIO_PORTB,DIO_PIN1)==0)
		{
			/*REVERSE*/
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,HIGH);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN3,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN4,HIGH);
		}
		

		else if (DIO_u8GetPinVal(DIO_PORTB,DIO_PIN0)==0 && DIO_u8GetPinVal(DIO_PORTB,DIO_PIN1)==1)
		{
			
			/*RIGHT*/
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,HIGH);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN3,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN4,LOW);
		}

		else if (DIO_u8GetPinVal(DIO_PORTB,DIO_PIN0)==1 && DIO_u8GetPinVal(DIO_PORTB,DIO_PIN1)==0)
		{
			/*LEFT*/
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN3,LOW);
			DIO_voidSetPinVal(DIO_PORTC,DIO_PIN4,HIGH);
		}
	}
}


