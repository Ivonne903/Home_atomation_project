/*
 * function.h
 *
 *  Created on: 28/08/2024
 *      Author: Ivonne
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_





#endif /* FUNCTION_H_ */



#define INPUT (unsigned char)0
#define OUPUT (unsigned char)1
#define ENABLE (unsigned char)1
#define DISABLE (unsigned char)0
#define UP (unsigned char)1
#define DOWN (unsigned char)0


void DefineInput_Opuput(volatile unsigned char *PxDIR ,unsigned char Pin , unsigned char Input_Ouput);
void Enable_Disable_Pulup_down_Resistors(volatile unsigned char *PxREN, unsigned char Pin, unsigned char Enable_Disable);
void Configure_Pullup_Pulldown_Resistor(volatile unsigned char *PxOUT, unsigned char Pin, unsigned char Up_Down);
