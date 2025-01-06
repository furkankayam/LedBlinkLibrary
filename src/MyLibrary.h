#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include "Arduino.h"

#define PRINTER Serial
#define LED_ON(pin) digitalWrite(pin, HIGH)
#define LED_OFF(pin) digitalWrite(pin, LOW)

class MyLibrary {
  public:
    MyLibrary(int pin);
    void begin();
    void blink(int interval);

  private:
    int _pin;
};

#endif
