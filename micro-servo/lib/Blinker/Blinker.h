#ifndef BLINKER_H
#define BLINKER_H

#include <Arduino.h>

class Blinker {
private:
    uint8_t pin;
    unsigned long blinkInterval;
    unsigned long lastToggleTime;
    bool ledState;

public:
    // Constructor
    Blinker(uint8_t _pin, unsigned long _interval = 1000);

    // Initialize the LED pin
    void begin();

    // Set blink interval in milliseconds
    void setInterval(unsigned long _interval);

    // Main update function - call this in loop()
    void update();

    // Turn LED on
    void on();

    // Turn LED off
    void off();

    // Toggle LED state
    void toggle();

    // Get current LED state
    bool getState() const;

    // Set LED state directly
    void setState(bool state);
};

#endif // BLINKER_H
