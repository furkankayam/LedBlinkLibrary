/*
  Author: Mehmet Furkan KAYA
  Date: 06/01/2025
  Description: First Arduino Library for controlling an LED
*/
#include <MyLibrary.h>

// Create an instance of MyLibrary, setting the LED pin to 13
MyLibrary led(13);

void setup() {
  // Initialize the LED
  PRINTER.begin(9600);
  led.begin();
}

void loop() {
  // Blink the LED with a 500 ms interval
  led.blink(500);
}
