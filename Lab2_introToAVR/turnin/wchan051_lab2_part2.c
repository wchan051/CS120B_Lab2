/*	Author: wchan051
 *  Partner(s) Name: Wayland Chang
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

    /* Insert your solution below */
    
    DDRA = 0x00; PORTA = 0xFF;
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char cntavail;
    while (1) {
		if(PINA & 0x01) {
			cntavail++;
		} 
		if(PINA & 0x02) {
			cntavail++;
		}
		if(PINA & 0x04) {
			cntavail++;
		}
		if(PINA & 0x08) {
			cntavail++;
		}
		PORTC = 4 - cntavail;
		cntavail = 0;
    }
    return 1;
}
