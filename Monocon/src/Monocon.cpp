#include <Arduino.h>
#include <Monocon.h>

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

Actuator::~Actuator() {
}

void Actuator::segment(Side side, Content content, bool displayDots) {
  digitalWrite(this->clockPin, LOW);

  switch (side) {
    case LEFT: {
      digitalWrite(this->segmentVcc[0], HIGH);
      digitalWrite(this->segmentVcc[1], LOW);
      for (int i=0;i<7;i++) {
        const int dataIndex = static_cast<int>(content);
        digitalWrite(this->segmentPin[i], segmentData[dataIndex][i]);
      }
      break;
    }
    case RIGHT: {
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

void Actuator::segmentStop() {
  for (int i=0;i<7;i++) digitalWrite(this->segmentPin[i], LOW);
  digitalWrite(this->segmentVcc[0], LOW);
  digitalWrite(this->segmentVcc[1], LOW);
}

void Actuator::restartSegment() {
  digitalWrite(this->segmentVcc[0], HIGH);
  digitalWrite(this->segmentVcc[1], HIGH);
}

void Actuator::motor(Side side, const unsigned long ms) {
  unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  while (true) {
    nowMillis = millis();
    switch (side) {
      case LEFT: {
        //digitalWrite(this->clockPin, 1);
        analogWrite(this->motorPin[0], 50);
        analogWrite(this->motorPin[1], 0);
        //digitalWrite(this->clockPin, 0);
        break;
      }
      case RIGHT: {
        analogWrite(this->motorPin[0], 0);
        analogWrite(this->motorPin[1], 50);
        break;
      }
    }
    digitalWrite(this->clockPin, 1);
    delayMicroseconds(630);
    digitalWrite(this->clockPin, 0);
    delayMicroseconds(630);
    //motorStop();
    if (nowMillis - prevMillis >= ms) {
      digitalWrite(this->clockPin, 1);
      digitalWrite(this->motorPin[0], 0);
      digitalWrite(this->motorPin[1], 0);
      digitalWrite(this->clockPin, 0);
      break;
    }
  }
}

void Actuator::motorStop() {
  digitalWrite(this->clockPin,1);
  digitalWrite(this->motorPin[0],1);
  digitalWrite(this->motorPin[1],1);
  digitalWrite(this->clockPin, 0);
}

void Actuator::buzzer(const int hertz, unsigned long ms) {
  unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  tone(this->buzzerPin, hertz);

  while (true) {
    nowMillis = millis();
    if (nowMillis - prevMillis >= ms) {
      noTone(this->buzzerPin);
    }
  }
}

void Actuator::stepingMotor(Side side, const int step) {
  switch (side) {
    case RIGHT: {
      for (int i=0;i<4;i++) {
        digitalWrite(stMotorPin[i], steps[step][i]);
      }
      break;
    }
    case LEFT: {
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
