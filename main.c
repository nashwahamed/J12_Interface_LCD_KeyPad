/*
 * LCD_KeyPad.c
 *
 * Created: 7/10/2020 1:15:29 AM
 * Author : nashwa.hamed
 */ 

#include "LCD.h"
#include "KeyPad.h"
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
   uint8 value = 0;
   
   LCD_Init();
   KeyPad_Init();
   
   //LCD_WriteChar('D');
   LCD_WriteInteger(128);
   while (1)
   {
	   value = KeyPad_GetValue();
	   
	   if(value)
	   {
		   LCD_WriteChar(value);
	   }
	   

   }
}

