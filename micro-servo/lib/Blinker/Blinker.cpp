#include "Blinker.h"

Blinker::Blinker(uint8_t _pin, unsigned long _interval)
    : pin(_pin), blinkInterval(_interval), lastToggleTime(0), ledState(false)
{
}

void Blinker::begin()
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  ledState = false;
  lastToggleTime = millis();
}

void Blinker::setInterval(unsigned long _interval)
{
  blinkInterval = _interval;
}

void Blinker::update()
{
  unsigned long currentTime = millis();

  if (currentTime - lastToggleTime >= blinkInterval)
  {
    toggle();
    lastToggleTime = currentTime;
  }
}

void Blinker::on()
{
  digitalWrite(pin, HIGH);
  ledState = true;
}

void Blinker::off()
{
  digitalWrite(pin, LOW);
  ledState = false;
}

void Blinker::toggle()
{
  ledState = !ledState;
  digitalWrite(pin, ledState ? HIGH : LOW);
}

bool Blinker::getState() const
{
  return ledState;
}

void Blinker::setState(bool state)
{
  ledState = state;
  digitalWrite(pin, state ? HIGH : LOW);
}
