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

 extern uint16 Num_OverFlow;
 extern uint16 Init_Value;

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
  //LED0_Init();
  //Timer_Init();
  //Timer_Generate_Delay(250);
  //Timer_Start();
  PasswordCheck();
  uint16 temp=0;
  TempSensor_Init();
  LCD_Init();
   while (1)
   {

   TempSensor_Read(&temp);
   //LCD_Clear();
   //LCD_WriteInteger(temp);
   _delay_ms(100);


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

ISR(TIMER0_OVF_vect){
static uint16 counter=0;
counter++;
if(counter == Num_OverFlow){
TCNT0=Init_Value;
counter=0;
LED0_Toggle();
}
}

void PasswordCheck(){

uint16 temp=0;
TempSensor_Init();
LCD_Init();
KeyPad_Init();
uint8 i=0,match=0,keyValue=0;
//LCD_WriteString("Enter Password");
//_delay_ms(100);
uint8 arr[6]={5,4,3,2,1,7};
uint8 enteredPass[6]={};

_delay_ms(100);

for(i=0;i<6;i++){
	enteredPass[i]=KeyPad_GetValue();
	_delay_ms(100);
	LCD_WriteChar(enteredPass[i]);
	_delay_ms(100);
	if(enteredPass[i] == arr[i])
	match=1;
	else
	match=0;
}

if(match){
	LCD_WriteString("Pass match ");
	TempSensor_Read(&temp);
	LCD_Clear();
	LCD_WriteInteger(temp);
	_delay_ms(100);
	}else{
	LCD_Clear();
	for(i=0;i<6;i++){
		LCD_WriteChar(enteredPass[i]);
	}
	_delay_ms(100);
	LCD_Clear();
	LCD_WriteString("Pass Incorrect");
}

}