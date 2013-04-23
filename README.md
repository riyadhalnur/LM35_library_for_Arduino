# LM35 Analog Linear Temperature Sensor Library for Arduino

This library for [Arduino](http://www.arduino.cc) allows you to use the LM35 Analog Temperature Sensor to measure the ambient temperature and output it in Celcius and Fahrenheit. Normally, this sensor measures temperature in Celcius but the library contains the ability to get the temperature readings in Fahrenheit. The library also compensates for the 10 mV error in the tempearute readings. You can view the datasheett from http://www.ti.com/product/lm35.

## Ciruit Diagram
A basic LM35 circuit setup looks like the image below. The pinout is:  
* Pin 1 to 5V
* Pin 2 to Analog Port on Arduino (the example uses pin 0)
* Pin 3 to GND  
![Basic LM35 Circuit Schematic](https://dl.dropboxusercontent.com/u/27002489/schematic.png)

## Installation
To use it with Arduino, go the drive or folder you placed your Arduino IDE in and then place the folder in the Libraries folder.  
	path to Arduino > Libraries > place here
The example code can be accessed by opening the Arduino IDE.  
	File > Examples > LM35 > TempSerialMon

## Usage
Include the library header file in your sketch.  
	#include <lm35.h>
Create an object using any name (except lm35) to setup the sensor. The object should include a parameter which corressponds to the pin the sensor is connected to on the Arduino.  
	lm35 temps(0);
Here the object is called 'temps' is the object and the number between the first brackets is the pin number the sensor is connected to.

In the 'loop()' function, call the temperature measure function.  
	temps.MeasureTemp();
To get the temperature in Celcius, use TempInCelcius.  
	temps.TempInCelcius
To get the temperature in Fahrenheit, use TempInFahrenheit.  
	temps.TempInFahrenheit

## License
This library is released under the GNU General Public License 2.0. To read the full text visit the [site](https://gnu.org/licenses/gpl.html).

## More information
For more information, please visit [riyadhalnur.wordpress.com](http://riyadhalnur.wordpress.com)

Copyright &copy; 2013 Riyadh Al Nur. All rights reserved.