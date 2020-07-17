/*
 * ADC.c
 *
 * Created: 7/11/2020 12:33:07 PM
 *  Author: nashwa.hamed
 */ 
 #include "ADC.h"
 void ADC_Init(void){
	 #if ADC_VOLTAGE_REFERENCE == ADC_VREF_AVCC
	 SET_BIT(ADMUX,6);
	 CLR_BIT(ADMUX,7);

	 #endif 
	 #if ADC_CHANNEL	==ADC_CHANNEL_1
	 SET_BIT(ADMUX,0);
	 #endif
	 #if ADC_ADJUSCENT==ADC_RIGHT_ADJUST
	 CLR_BIT(ADMUX,5);
	 #endif
	 #if ADC_CONVERSION==ADC_AUTO_TRIGGER
	 SET_BIT(ADCSRA,5);
	 #endif
	 #if ADC_PRESCALER==ADC_PRESC_128
	 SET_BIT(ADCSRA,0);
	 SET_BIT(ADCSRA,1);
	 SET_BIT(ADCSRA,2);

	 #endif 
	  #if ADC_INTERRUPT_STATUS==ADC_INTERRUPT_DISABLE
	  CLR_BIT(ADCSRA,3);
	  #endif
	  //enable ADC
SET_BIT(ADCSRA,7);
 }

 void ADC_Read(uint16* val){
 uint16 digital_value=0;
 SET_BIT(ADCSRA,6); //start conversion
 #if ADC_INTERRUPT_STATUS==ADC_INTERRUPT_DISABLE
  while(!(GET_BIT(ADCSRA,4)));
  digital_value=ADC_Adjust;
  *val=((digital_value *500)/1024); //temp 1 degree per 10mv
   #endif
 }