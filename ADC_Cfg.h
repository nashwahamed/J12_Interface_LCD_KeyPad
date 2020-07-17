/*
 * ADC_Cfg.h
 *
 *  Created on: Jul 17, 2020
 *      Author: nashwa.hamed
 */

#ifndef ADC_CFG_H_
#define ADC_CFG_H_
#include "ATMEGA32_Regs.h"

#define ADC_Resolution				10
#define ADC_CHANNEL					ADC_1
#define ADC_PRESCALER				ADC_PRESCALER_128
#define ADC_VREF					ADC_VREF_INTERNAL
#define ADC_CONVERSION_TRIGGER		ADC_AUTO_TRIGGER
#define ADC_INTERRUPT_STATUS		ADC_INTERRUPT_DISABLE
#define ADC_ADJUSTMENT				ADC_RightADJUST
#define ADC_Port					PORTA

#define ADC_0			0
#define ADC_1			1
#define ADC_2			2
#define ADC_3			3
#define ADC_4			4
#define ADC_5			5
#define ADC_6			6
#define ADC_7			7
#define ADC_8			8
#define ADC_9			9

#define ADC_PIN_HIGH		1
#define ADC_PIN_LOW			0

#define ADC_PORT_HIGH		0xFF
#define ADC_PORT_LOW		0x00

#define ADC_VREF_AREF				0
#define ADC_VREF_VCC				1
#define ADC_VREF_INTERNAL			2

#define ADC_RightADJUST				0
#define ADC_LEFTADJUST				1

#define ADC_MUX_0					0
#define ADC_MUX_1					1
#define ADC_MUX_2					2
#define ADC_MUX_3					3
#define ADC_MUX_4					4

#define ADC_ENABLE					7
#define ADC_STARTCONVERSION			6

#define ADC_AUTO_TRIGGER			5

#define ADC_INTERRUPT_ENABLE		0
#define ADC_INTERRUPT_DISABLE		1

#define ADC_FREE_RUNNING_MODE		0
#define ADC_ANALOG_COMPARATOR		1
#define ADC_EXTERNAL_INTERRUPT_0	2
#define ADC_TIMER_COUNTER0_COMPARE	3
#define ADC_TIMER_COUNTER0_OVERFLOW	4
#define ADC_TIMER_COUNTER_COMPARE	5
#define ADC_TIMER_COUNTER1_OVERFLOW	6
#define ADC_TIMER_COUNTER1_CAPTURE	7

#define ADC_INTERRUPT_FLAG			4
//#define ADC_INTERRUPT_ENABLE		3

#define ADC_PRESCALER_2				2
#define ADC_PRESCALER_4				4
#define ADC_PRESCALER_8				8
#define ADC_PRESCALER_16			16
#define ADC_PRESCALER_32			32
#define ADC_PRESCALER_64			64
#define ADC_PRESCALER_128			128



#endif /* ADC_CFG_H_ */
