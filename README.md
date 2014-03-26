# LM35 Analog Linear Temperature Sensor Library for Arduino v1.1

This library for [Arduino](http://www.arduino.cc) allows you to use the LM35 Analog Temperature Sensor to measure the ambient temperature and output it in Celcius and Fahrenheit. Normally, this sensor measures temperature in Celcius but the library can also output the temperature readings in Fahrenheit. The library also compensates for the 10 mV error in the temperature readings. You can view the datasheet from http://www.ti.com/product/lm35.

## Ciruit Diagram
A basic LM35 circuit setup looks like the image below. The pinout is:  
* Pin 1 to 5V
* Pin 2 to Analog Port on Arduino (the example uses pin 0)
* Pin 3 to GND  
![Basic LM35 Circuit Schematic](https://dl.dropboxusercontent.com/u/27002489/schematic.png)

## Installation
To use it with Arduino, go the drive or folder you placed your Arduino IDE in and then place the folder in the Libraries folder.  
    ```path_to_Arduino > Libraries > place_here```  
The example code can be accessed by opening the Arduino IDE.  
    ```File > Examples > LM35 > TempSerialMon```   
I find it best to rename the folder 'LM35'. 

## Usage
Include the library header file in your sketch.  
    ```#include <lm35.h>```  
Create an object using any name (except lm35) to setup the sensor. The object should include a parameter which corressponds to the pin the sensor is connected to on the Arduino.  
    ````lm35 temps(0);````  
Here the object is called 'temps' is the object and the number between the first brackets is the pin number the sensor is connected to.

In the 'loop()' function, call the temperature measure function.  
    ```temps.MeasureTemp();```  
To get the temperature in Celcius, use TempInCelcius.  
    ```temps.TempInCelcius```  
To get the temperature in Fahrenheit, use TempInFahrenheit.  
    ```temps.TempInFahrenheit```  

## Changelog
Changes in 1.1 
* Fixed few lines of code 
* Cleanup of original code
* Updated README

## Planned Updates 
These are ideas that I'm currently working on implementing in future updates. I don't know how successful I will be in completing them but I will be activiely developing it in this repo. So if anyone wants to help out, you are most welcome. 
* Processing sketch to plot temperature readings in real-time or over a period
* Add interaction to plot 
* Store temperature data in MySQL database 
* Use database records to draw jQuery based plots on webpage

## License
This library is released under the GNU General Public License 2.1. To read the full text visit the [site](https://gnu.org/licenses/gpl.html).

## More information
For more information, please visit [blog.verticalaxisbd.com](http://blog.verticalaxisbd.com)

Follow me on [twitter](https://twitter.com/riyadhalnur),  [LinkedIn](http://bd.linkedin.com/in/riyadhalnur),  [Google+](http://plus.google.com//u/0/+RiyadhAlNur) or [Facebook](http://www.facebook.com/riyadhalnur).

Copyright &copy; 2013 Riyadh Al Nur. All rights reserved.

