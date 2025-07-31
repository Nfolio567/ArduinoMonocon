/*
 *  7seg = 40, 41, 42, 43, 44, 45, 46, 47
 *  7vcc = 24, 25
 *  volume = 0~489,490~510,511~1023
 *  motor = 44, 45
 *  clk = 29
 *  buzzer = 28
 *  PhotoIc = 1→受光,0→遮光
 *  Stepper m = 40, 41, 42, 43
 *  MotorSteps = 120
 *
 *  inputPin
 *  1 = vcc
 *  2 = A0
 *  3 = A1
 *  4 = A2
 *  5 = GND
 */

#include <Arduino.h>
#include <Monocon.h>

using Side = Actuator::Side;
using Content = Actuator::Content;

Actuator::Actuator(
  const int clockPin,
  const int buzzerPin,
  const int* segmentPin,
  const int* segmentVcc,
  const int* motorPin,
  const int* stMotorPin
):
  clockPin(clockPin),
  buzzerPin(buzzerPin),
  segmentPin(segmentPin),
  segmentVcc(segmentVcc),
  motorPin(motorPin),
  stMotorPin(stMotorPin)
{}


Actuator::~Actuator() = default;


void Actuator::segment(const Side side, const Content content, const bool displayDots) const {
  digitalWrite(this->clockPin, LOW);
  for (int i=0;i<7;i++) digitalWrite(this->segmentPin[i], LOW);

  switch (side) {
    case Side::LEFT: {
      digitalWrite(this->segmentVcc[0], HIGH);
      digitalWrite(this->segmentVcc[1], LOW);
      for (int i=0;i<7;i++) {
        const int dataIndex = static_cast<int>(content);
        digitalWrite(this->segmentPin[i], segmentData[dataIndex][i]);
      }
      break;
    }
    case Side::RIGHT: {
      digitalWrite(this->segmentVcc[0], LOW);
      digitalWrite(this->segmentVcc[1], HIGH);
      for (int i=0;i<7;i++) {
        const int dataIndex = static_cast<int>(content);
        digitalWrite(this->segmentPin[i], segmentData[dataIndex][i]);
      }
      break;
    }
  }
  digitalWrite(this->segmentPin[7], displayDots);
}

void Actuator::segmentStop() const {
  for (int i=0;i<7;i++) digitalWrite(this->segmentPin[i], LOW);
  digitalWrite(this->segmentVcc[0], LOW);
  digitalWrite(this->segmentVcc[1], LOW);
}


void Actuator::motor(const Side side, const int pmw, const unsigned long ms) const {
  unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  while (true) {
    nowMillis = millis();
    switch (side) {
      case Side::LEFT: {
        analogWrite(this->motorPin[0], pmw);
        analogWrite(this->motorPin[1], 0);
        break;
      }
      case Side::RIGHT: {
        analogWrite(this->motorPin[0], 0);
        analogWrite(this->motorPin[1], pmw);
        break;
      }
    }
    digitalWrite(this->clockPin, 1);
    delayMicroseconds(2040);
    digitalWrite(this->clockPin, 0);
    if (nowMillis - prevMillis >= ms) {
      digitalWrite(this->clockPin, 1);
      digitalWrite(this->motorPin[0], 0);
      digitalWrite(this->motorPin[1], 0);
      digitalWrite(this->clockPin, 0);
      break;
    }
  }
}

void Actuator::motorStop() const {
  digitalWrite(this->motorPin[0],1);
  digitalWrite(this->motorPin[1],1);
  digitalWrite(this->clockPin, 1);
  delayMicroseconds(630);
  digitalWrite(this->clockPin, 0);
  delayMicroseconds(630);
}


void Actuator::buzzer(const int hertz, const unsigned long ms) const {
  const unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  tone(this->buzzerPin, hertz);

  while (true) {
    nowMillis = millis();
    if (nowMillis - prevMillis >= ms) {
      noTone(this->buzzerPin);
      break;
    }
  }
}


void Actuator::steppingMotor(const Side side, const int step) const {
  switch (side) {
    case Side::LEFT: {
      for (int i=0;i<4;i++) {
        digitalWrite(stMotorPin[i], steps[step][i]);
      }
      break;
    }
    case Side::RIGHT: {
      for (int i=0;i<4;i++) {
        digitalWrite(stMotorPin[i], steps[step][3-i]);
      }
      break;
    }
  }
  digitalWrite(this->clockPin, 1);
  delayMicroseconds(2700);
  digitalWrite(this->clockPin, 0);
  delayMicroseconds(2700);
}
