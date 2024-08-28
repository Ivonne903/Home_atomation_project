#include <msp430g2553.h>


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR=0; // Direction Register 0b = Port configured as input, 1b = Port configured as output
	P1DIR|=BIT6|BIT0;
	P1REN=0; //Pullup or Pulldown Resistor Enable Register
	P1REN|=BIT3;//P1.3 habilita resistencia
	P1SEL=0; //Function Selection Register
	P1SEL2=0; //Function Selection Register  as I/0 port
	P1OUT=0; //When I/O configured to input mode and pullups/pulldowns enabled:0b = Pulldown selected1b = Pullup selected
	P1OUT|=BIT3|BIT0;
	while(1)
	{

	    if ((P1IN&BIT3)==0) //P1.3 esta precionado
	    {
	      P1OUT&=~BIT0; //apaga P1.0
	      P1OUT|=BIT6; //prende P1.6


	    }
	    else //P1.3 no est� presionado
	    {
	        P1OUT&=~BIT6; // apaga P1.6
	        P1OUT|=BIT0;  // prende P1.0

	    }


	}
	

}
