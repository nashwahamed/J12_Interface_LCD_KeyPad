/*
 * ADC.h
 *
 * Created: 7/11/2020 12:33:23 PM
 *  Author: nashwa.hamed
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "ADC_Cfg.h"
#include "ATMEGA32_Regs.h"
#include "BIT_Math.h"

#define ADC_VREF_AVCC		0

#define ADC_RIGHT_ADJUST	0

#define  ADC_CHANNEL_1		1
#define ADC_AUTO_TRIGGER	0
#define  ADC_PRESC_128		7
#define ADC_INTERRUPT_DISABLE	0
/**************API**********/

void ADC_Init(void);
void ADC_Read(uint16* val);


#endif /* ADC_H_ */