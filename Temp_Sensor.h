/*
 * Temp_Sensor.h
 *
 * Created: 7/11/2020 2:13:11 PM
 *  Author: nashwa.hamed
 */ 


#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_
#include "ADC.h"

void TempSensor_Init(void);
void TempSensor_Read(uint16* temp);




#endif /* TEMP_SENSOR_H_ */