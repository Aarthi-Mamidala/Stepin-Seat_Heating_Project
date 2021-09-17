/*
 */
#include"Activity1.h"
#include"Activity2.h"
#include"Activity3.h"
#include"Activity.h"
#include <avr/io.h>

int main(void)
{

    uint16_t temp;
    while(1)
    {
        if(Activity1_LED()==1)
        {
//Turn LED ON
            TurnLED_ON();
		//Get the ADC value
            temp=Activity2_GetADC();
		 //PWM output based on temperature
            Activity3_PWM(temp);
		//To Serial monitor to print Temperature
		    Activity4_USARTWrite(temp); 
        }
        else
        {
            TurnLED_OFF();
            _delay_ms(200);
        }
    }

    return 0;
}
