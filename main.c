#include <msp430g2553.h>


/**
 * main.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR=0; // Registro para indicar si es entrada o salida 0=entrada 1= salida
	P1DIR|=BIT6|BIT0; //P1.0 y P1.6 son salida
	P1REN=0; //registro indica habilitaci�n de resistencia pull-up y pull down
	P1REN|=BIT3;//P1.3 habilita resistencia
	P1SEL=0; // vinculaci�n a gpio
	P1SEL2=0; // vinculaci�n a GPIO
	P1OUT=0; //Registro para entradas indica 1-pull 0=pull-down
	P1OUT|=BIT3|BIT0; // Registro para las salidas que indica el nivel del pin 1=3.3v 0 =0v
	//P1.3 tiene pull-up y P1.0 = 3.3V P1.6 =0;
	while(1)
	{
	    P1OUT = 0X40;
	    /*if ((P1IN&BIT3==0)) //P1.3 esta precionado
	    {
	      P1OUT&=~BIT0; //apaga P1.0
	      P1OUT|=BIT6; //prende P1.6
	    }
	    else //P1.3 no est� presionado
	    {
	        P1OUT&=~BIT6; // apaga P1.6
	        P1OUT|=BIT0;  // prende P1.0

	    }
	    */

	}
	

	return 0;
}
