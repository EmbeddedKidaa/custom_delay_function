#include "customdelay.h"
#include <blink.h>

/*

**Author: Yash Jadhav**

**objective:** 

This program was created to create a custom delay function like builtin function delay()
which pauses the code for required time.But at that moment, whole code halts. 
My problem was i wanted to blink builtin leds continously irrespective of delays happening. 
Therefore, I created my own function that not only behaves like builtin delay() but also allows 
speific passed functions to run even when delay() is operating.

**You can also pass respective parameters for them.**


*/
 void msg()
 {
     Serial.println("function called.");
 }

void setup() {

  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  task t[] = { {blink, 500}};// created an function pointer t pointing towars an array of functions
  
  customdelay(1000, t , 1);//custom function for delay operation. 3 seconds delayr


  msg();
}
