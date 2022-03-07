/**
 * @file main.c
 * @author Vartik Vats
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "case1.h"
#include "case2.h"
#include "case3.h"
#include "case4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(case1_LED()==1)        //Check if both the switches are pressed
        {
           
            TurnLED_ON();           
            temp=case2_GetADC();     //Get the ADC value
            case3_PWM(temp);         //PWM output based on temperature
		    case4_USARTWrite(temp);  //To Serial monitor to print Temperature
        }
        else  
        {
            TurnLED_OFF();
		    _delay_ms(200);
        }
    }
    return 0;
}