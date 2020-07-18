/*
 * LCD_KeyPad.c
 *
 * Created: 7/10/2020 1:15:29 AM
 * Author : nashwa.hamed
 */ 

#include "LCD.h"
#include "KeyPad.h"
#include "Timer.h"
#include "Temp_Sensor.h"
#include "LED.h"
#define F_CPU 16000000
#include <util/delay.h>
 #include <avr/interrupt.h>

 //extern uint16 Num_OverFlow;
 //extern uint16 Init_Value;
 extern uint16 Num_Tick;


 /******global for password**********/
uint8 i=0,match=0,keyValue=0,iteration=0,arrIndex=0;
uint8 arr[6]={5,4,3,2,1,7};
uint8 enteredPass[6]={};
uint16 temp=0;
 /*********global password end region**********/

void PasswordCheck(void);

int main(void)
{
    /* Replace with your application code */
  // uint8 value = 0;
   
  /*LCD_Init();
   KeyPad_Init();
  // TempSensor_Init();
   LCD_WriteChar('D');
  // LCD_WriteString("-128");
  uint16 temp=0;*/

  /**********PMW start************/
  //LED0_Init();
  //PWM0
  //PWM0_Init();
  //PWM0_Generate(70);
  //PWM0_Start();
  /***************PMW end***********/

  /*Timer_Init();
  Timer_Generate_Delay(250);
  Timer_Start();*/
  //Timer0_SetCallBack(LED0_Toggle);

  /*Timer1_Init();
  Timer1_Generate_Delay(500);
  Timer1_Start();
  Timer1_SetCallBack(LED0_Toggle);*/

 
  // uint16 temp=0;
  //TempSensor_Init();
 // LCD_Init();

 /*****************password check variable start***********************/
 	TempSensor_Init();
 	LCD_Init();
 	KeyPad_Init();
	/***********************password check variable end region**********************/

   while (1)
   {

   PasswordCheck();

   //TempSensor_Read(&temp);
   //LCD_Clear();
   //LCD_WriteInteger(temp);
   //_delay_ms(100);


	   /*value = KeyPad_GetValue();
	   
	   if(value)
	   {
		   LCD_WriteChar(value);
	   }*/
	   
	   /*  TempSensor_Read(&temp);
		 LCD_Clear();
	     LCD_WriteInteger(temp);
		 _delay_ms(500);*/
   }
}

/**************TIMER 0 INterrupt old way before callback function*****************/
/*ISR(TIMER0_OVF_vect){
static uint16 counter=0;
counter++;
if(counter == Num_OverFlow){
TCNT0=Init_Value;
counter=0;
LED0_Toggle();
}
}*/


void PasswordCheck(){
/*
if(iteration==0){
	LCD_WriteString("Enter Pass");
	_delay_ms(10);
	LCD_Clear();
}*/



keyValue=KeyPad_GetValue();
if(keyValue){
	if(iteration<=6)
		iteration++;
	enteredPass[arrIndex]=keyValue;
	LCD_WriteChar(enteredPass[arrIndex]);
	arrIndex++;

if(iteration==6){
	for(i=0;i<6;i++){
		if(enteredPass[i] == arr[i])
		match=1;
		else{
		match=0;
		break;
		}
	}
}

if(match && iteration>=6){
	LCD_WriteString("Pass match ");
	TempSensor_Read(&temp);
	LCD_Clear();
	LCD_WriteInteger(temp);
	_delay_ms(100);
	}else if(iteration>=6){
	LCD_Clear();
	for(i=0;i<6;i++){
		LCD_WriteChar(enteredPass[i]);
	}
	_delay_ms(100);
	LCD_Clear();
	LCD_WriteString("Pass Incorrect");
	_delay_ms(100);
	LCD_Clear();
	iteration=0;
	arrIndex=0;
	}
	}
}


/********************CTC Interrupt old way before callback function********************/
ISR(TIMER0_COMP_vect){
static uint16 count=0;
count ++;
if(count==Num_Tick){
	count=0;
	LED0_Toggle();
}
}