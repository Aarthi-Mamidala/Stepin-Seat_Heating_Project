#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#define PWM_20_PERCENT (205) 
#define PWM_40_PERCENT (410) 
#define PWM_70_PERCENT (717) 
#define PWM_95_PERCENT (973) 

 
#include <util/delay.h>
#include <avr/io.h>

void InitTimer();

void Activity3_PWM(uint16_t temp);



#endif // ACTIVITY3_H_INCLUDED
