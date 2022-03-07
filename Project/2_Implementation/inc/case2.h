/**
 * @file case2.h
 * @author 
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CASE_2_H__
#define __CASE_2_H__

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include <util/delay.h>
#include <avr/io.h>

/**
 * @brief Initialize the registers for ADC setup
 * 
 */
void InitADC();

/**
 * @brief Gives the ADC values for the selected channel
 * 
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Return the ADC value to main function
 * 
 * @return uint16_t The ADC value
 */
uint16_t case2_GetADC(void);

#endif 