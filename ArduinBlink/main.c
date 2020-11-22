/*
 * ArduinBlink.c
 *
 * Created: 12/29/2019 9:48:36 PM
 * Author : Manny
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB|= 0b00100000;
	//PORTB&=11101111;
    /* Replace with your application code */
    while (1) 
    {
		PORTB|=0b00100000;
		_delay_ms(100);
		PORTB&=0b11011111;
		_delay_ms(100);
    }
}

