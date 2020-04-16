/*	Author: jmach017
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA =0xFF;
	DDRB = 0xFF; PORTB = 0x00;
    /* Insert your solution below */
	unsigned char data;

		
    while (1) {
	data = (PINA&0x0F);
	switch(data)
	{
		case 15:
		case 14:
		case 13:
			PORTB = 0x3F; break;
		case 12:
		case 11:
		case 10:
			PORTB = 0x3E; break;
		case 9:
		case 8:
		case 7:
			PORTB = 0x3C; break;
		case 6:
		case 5:
			PORTB = 0x38; break;
		case 4:
		case 3:
			PORTB = 0X70; break;
		case 2:
		case 1: 
			PORTB = 0x60; break;
		case 0: 
			PORTB = 0x40; break;
		
	default: PORTB = 0x00; break;		
		

	}

    }
    return 0;
}
