/**
 * @file case3.h
 * @author Vartik Vats
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CASE_3_H__
#define __CASE_3_H__

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#define PWM_20_PERCENT (205)     /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410)     /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717)     /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973)     /**< Output PWM for 95% duty cycle */
 
#include <util/delay.h>
#include <avr/io.h>

/**
 * @brief Timer1 registers 
 * 
 */
void InitTimer();
/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 * 
 * @param[in] temp The ADC value from case2
 */
void case3_PWM(uint16_t temp);

#endif 