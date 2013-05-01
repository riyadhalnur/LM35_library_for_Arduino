/* 
Temperature reading on Serial Monitor using LM35 Analog Linear Temperature Sensor

Uses the LM35 analog sensor to measure temperature. The sketch reads sensor values every
5 seconds and outputs it on the Serial Monitor. The library can output readings in Celcius and 
Fahrenheit. 

For the circuit, please visit
riyadhalnur.wordpress.com

Created on: 23/04/2013
by Riyadh Al Nur
Version 1.1
The LM35 library copyright (c) 2013 Riyadh Al Nur. All rights reserved.
*/
#include <lm35.h> // include the library header

lm35 temps(0); /* create sensor object
(pin number should correpond to the 
analog pin the sensor is connected to) */

void setup() {
  Serial.begin(9600); // setup serial communication
}

void loop() {
  temps.MeasureTemp(); // start measuring temperature
  Serial.print(temps.TempInCelcius); // print temperature
  Serial.println("C");
  Serial.print(temps.TempInFahrenheit); // print temp in Fahrenheit
  Serial.println("F");
  delay(500); // delay of 5 seconds between readings
}
