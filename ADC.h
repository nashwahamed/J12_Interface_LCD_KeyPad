/*
 * ADC.h
 *
 *  Created on: Jul 17, 2020
 *      Author: nashwa.hamed
 */

#ifndef ADC_H_
#define ADC_H_
#include "ADC_Cfg.h"

void ADC_Init(void);
void ADC_Read(uint16* data);
void ADC_StartConversion(void);
void ADC_EnablePIN(void);
void ADC_SetConversion(void);
void ADC_SelectVoltageRefernce(void);


#endif /* ADC_H_ */
