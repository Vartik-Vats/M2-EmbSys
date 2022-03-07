/**
 * @file case1.h
 * @author Vartik Vats
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CASE_1_H__
#define __CASE_1_H__

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#define F_CPU 16000000UL 	         /**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)             /**< LED Port Number */
#define LED_PIN  (PORTD2)            /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)      /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)        /**< Port for Temperature Sensor   */

#include <util/delay.h>
#include <avr/io.h>

/**
 * @brief Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief Case 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int case1_LED(void);

#endif 