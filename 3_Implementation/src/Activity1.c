#include "Activity1.h"


void peripheral_init(void)
{
// set PD3=1 for LED
    DDRD |= (1<<PD3);
    DDRD &= ~(1<<PD1);
	//set bit PD0 for SeatSwitch
    PORTD |= (1<<PD1); 
	//clear bit
    DDRD &= ~(1<<PD2);
	//set bit PD0 for HeaterSwitch
    PORTD |= (1<<PD2); 
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN);
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int act1=0;
int Activity1_LED(void)
{
       peripheral_init();
	//both the switches are pressed
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) 
        {
            act1=1;
        }
	//in all other cases
        else  
        {
            act1=0;
        }
    return act1;

}
