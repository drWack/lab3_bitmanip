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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
	unsigned char atot;
	unsigned char btot;
	unsigned char i;
    while (1) {
	i=atot = btot = 0;

	while(i < 7)
	{	
	
	atot =atot + ((PINA>>i)&0x01);
	btot =btot + ((PINB>>i)&0x01);
	i++;
	}
	atot = atot+btot;
	PORTC = atot;
    }
    return 0;
}
