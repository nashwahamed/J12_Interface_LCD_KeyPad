/*
 * Temp_Sensor.c
 *
 * Created: 7/11/2020 2:13:24 PM
 *  Author: nashwa.hamed
 */ 
 #include "Temp_Sensor.h"

 void TempSensor_Init(void){
 ADC_Init();
 }
 void TempSensor_Read(uint16* temp){
 ADC_Read(temp);
 }