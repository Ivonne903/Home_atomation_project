#include <msp430g2553.h>
#include <function.h>


/**
 * main.c
 */

/**********************************************************************************************************************
 void DefineInput_Opuput : Function to configure INPUT or OUPUT,
 Parameters:
 PxDIR
 X=1,2

 Pin = BITX
 X=0,1......7

 Input_Ouput= INPUT or OUPUT
 **********************************************************************************************************************/
void DefineInput_Opuput(volatile unsigned char *PxDIR ,unsigned char Pin , unsigned char Input_Ouput){
    if(Input_Ouput == INPUT){
         Pin = ~Pin;
        *PxDIR &= Pin;

    }
    if(OUPUT == Input_Ouput){
        *PxDIR |= Pin;
    }

}

/*********************************************************************************************************************
 void Enable_Disable_Pulup_down_Resistors: Function to Enable Pull down or Pull up resistors,
 Parameters:
 PxREN
 x= 1,2...

 Pin = BITX
 X=0,1......7

 Enable_Disable = ENABLE or DISABLE
***********************************************************************************************************************/

void Enable_Disable_Pulup_down_Resistors(volatile unsigned char *PxREN, unsigned char Pin, unsigned char Enable_Disable){
        if(ENABLE == Enable_Disable){
            *PxREN |= Pin;
        }
        if(DISABLE == Enable_Disable){
            Pin = ~Pin;
            *PxREN &= Pin;
        }


}

/*********************************************************************************************************************************
 Configure_Pullup_Pulldown_Resistor :  Function to Configure PUL UP or PULL DOWN resistor
 Parameters:
 PxOUT
 x= 1......7

 Pin = BITX
 X=0,1......7

 Up_Down = UP or DOWN

 ********************************************************************************************************************************/

void Configure_Pullup_Pulldown_Resistor(volatile unsigned char *PxOUT, unsigned char Pin, unsigned char Up_Down){
    if(UP == Up_Down){
        *PxOUT |= Pin;
    }
    if(DOWN == Up_Down){
        Pin = ~Pin;
        *PxOUT &= Pin;
       }

}

