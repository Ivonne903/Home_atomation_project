#include <msp430g2553.h>
#include <function.h>


/**
 * main.c
 */



void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	DefineInput_Opuput(&P1DIR,(unsigned char)BIT3,INPUT); // P1BIT1 configured as Input
	DefineInput_Opuput(&P1DIR,(unsigned char)BIT6,OUPUT); // P1BIT6 configured as Input
	DefineInput_Opuput(&P1DIR,(unsigned char)BIT0,OUPUT); // P1BIT1 configured as Input
	Enable_Disable_Pulup_down_Resistors(&P1REN, (unsigned char)BIT3,ENABLE);// Enable Pullpudown Resistor for BIT3
	P1SEL=0; //Function Selection Register
	P1SEL2=0; //Function Selection Register  as I/0 port
	Configure_Pullup_Pulldown_Resistor(&P1OUT, (unsigned char)BIT3,UP);

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
