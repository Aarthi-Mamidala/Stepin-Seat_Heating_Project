#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED


#include <util/delay.h>
#include <avr/io.h>

//Function Definitions

// Initialize the registers for ADC setup
void InitADC();

//Gives the ADC values for the selected channel



uint16_t ReadADC(uint8_t ch);

// Return the ADC value to main function
// uint16_t The ADC value
uint16_t activity2_GetADC(void);


#endif // ACTIVITY2_H_INCLUDED
