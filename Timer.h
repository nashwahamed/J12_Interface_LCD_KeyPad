/*
 * Timer.h
 *
 * Created: 7/17/2020 12:28:57 PM
 *  Author: nashwa.hamed
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "ATMEGA32_Regs.h"
#include "BIT_Math.h"

void Timer_Init(void);
void Timer_Start(void);
void Timer_Stop(void);
void Timer_Generate_Delay(uint8 delay_ms);



#endif /* TIMER_H_ */