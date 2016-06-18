#include "Arduino.h"
#include "ArduinoDcMotor.h"

ArduinoDcMotor::ArduinoDcMotor(int pin1, int pin2) {
  this->pin1 = pin1;
  this->pin2 = pin2;
  analogWrite(pin2, 0);
}

void ArduinoDcMotor::on() {
  this->running = true;
  analogWrite(pin1, 255);
}

void ArduinoDcMotor::off() {
  this->running = false;
  analogWrite(pin1, 0); 
}

bool ArduinoDcMotor::isOn() {
  return this->running;
}

void ArduinoDcMotor::toggle() {
  if (this->isOn()) {
    this->off();
  } else {
    this->on();
  }
}
