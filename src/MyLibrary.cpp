#include "MyLibrary.h"

MyLibrary::MyLibrary(int pin) {
  _pin = pin;
}

void MyLibrary::begin() {
  pinMode(_pin, OUTPUT);
}

void MyLibrary::blink(int interval) {
  LED_ON(_pin);
  PRINTER.println("HIGH");
  delay(interval);
  LED_OFF(_pin);
  PRINTER.println("LOW");
  delay(interval);
}
