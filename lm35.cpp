/*
  lm35.h - LM35 Analog Linear Temperature Sensor Library
  Version 1.1
  2013 Copyright (c) Riyadh Al Nur.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "lm35.h"

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

lm35::lm35(int pin)
{
  _pin = pin;
}
void lm35::MeasureTemp(void)
{
  val = analogRead(_pin);
  dat = (val*500)>>10; // adjust sensor value by 500 (the sensor outputs readings at mV) and adjust for 10mV offset (see datasheet)
  TempInCelcius = dat;
  fah = (dat * (9/5)) + 32; // convert celcius to fahrenheit
  TempInFahrenheit = fah;
}