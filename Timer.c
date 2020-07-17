/*
 * Timer.c
 *
 * Created: 7/17/2020 12:28:45 PM
 *  Author: nashwa.hamed
 */ 
 #include "Timer.h"
  uint16 Num_OverFlow=0;
  uint16 Init_Value=0;
 void Timer_Init(void){
 /********Normal Mode********/
 //CLR_BIT(TCCR0,3);
 //CLR_BIT(TCCR0,6);
TCCR0 |= 0x00;

 //overflow interrupt
 //SET_BIT(TIMSK,0);
 TIMSK |= 0x01;
 //SET_BIT(SREG,8);
 SREG|=0x80;




 }
 void Timer_Start(void){
 //once prescaler connect will start counting
TCCR0 |= 0x05;
 // SET_BIT(TCCR0,0);
  //CLR_BIT(TCCR0,1);
 // SET_BIT(TCCR0,2);
 }
 void Timer_Stop(void){
 //stop clk
   CLR_BIT(TCCR0,0);
   CLR_BIT(TCCR0,1);
   CLR_BIT(TCCR0,2);
 }
 void Timer_Generate_Delay(uint8 delay_ms){
 uint8 Tick_Time=1024/16; //micro second
 uint16 Num_Tick=(delay_ms*1000)/Tick_Time;
 Num_OverFlow=Num_Tick/256;
 //float32 remider=(Num_Tick % 256);
 //Init_Value= 256-(remider * 256);
 Init_Value=256-(Num_Tick % 256);
 //Init_Value=256-((((float32)Num_Tick/256)-Num_OverFlow)*256)

 TCNT0=Init_Value;
 Num_OverFlow++;
 }