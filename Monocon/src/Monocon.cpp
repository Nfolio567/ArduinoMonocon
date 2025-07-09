#include <Arduino.h>
#include <Monocon.h>

Actuator::Actuator(
  const int clockPin,
  const int buzzerPin,
  const int* segmentPin,
  const int* segmentVcc,
  const int* motorPin
):
  clockPin(clockPin),
  buzzerPin(buzzerPin),
  segmentPin(segmentPin),
  segmentVcc(segmentVcc),
  motorPin(motorPin)
{}

Actuator::~Actuator() {
}

/**
 * @param pinNum: Number of segment pin
 * @param vccPinNum: Number of vcc pin (LR)
 * @param 
 */
void Actuator::segment(Side side, Number num, bool displayDots) {
  if (side == L) {
    digitalWrite(this->segmentVcc[0], HIGH);
    digitalWrite(this->segmentVcc[1], LOW);
    switch (num) {
      case 0: {
        digitalWrite(this->segmentPin[0], HIGH);//0
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 1: {
        digitalWrite(this->segmentPin[0], LOW);//1
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 2: {
        digitalWrite(this->segmentPin[0], HIGH);//2
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], LOW);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 3: {
        digitalWrite(this->segmentPin[0], HIGH);//3
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 4: {
        digitalWrite(this->segmentPin[0], LOW);//4
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 5: {
        digitalWrite(this->segmentPin[0], HIGH);//5
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 6: {
        digitalWrite(this->segmentPin[0], HIGH);//6
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 7: {
        digitalWrite(this->segmentPin[0], HIGH);//7
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 8: {
        digitalWrite(this->segmentPin[0], HIGH);
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 9: {
        digitalWrite(this->segmentPin[0], HIGH);//9
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case None: {
        digitalWrite(this->segmentPin[0], LOW);//nothing
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], LOW);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
    }
  } else if (side == R) {
    digitalWrite(this->segmentVcc[0], LOW);
    digitalWrite(this->segmentVcc[1], HIGH);

    switch (num) {
      case 0: {
        digitalWrite(this->segmentPin[0], HIGH);//0
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 1: {
        digitalWrite(this->segmentPin[0], LOW);//1
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 2: {
        digitalWrite(this->segmentPin[0], HIGH);//2
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], LOW);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 3: {
        digitalWrite(this->segmentPin[0], HIGH);//3
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 4: {
        digitalWrite(this->segmentPin[0], LOW);//4
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 5: {
        digitalWrite(this->segmentPin[0], HIGH);//5
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 6: {
        digitalWrite(this->segmentPin[0], HIGH);//6
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 7: {
        digitalWrite(this->segmentPin[0], HIGH);//7
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 8: {
        digitalWrite(this->segmentPin[0], HIGH);
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], HIGH);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case 9: {
        digitalWrite(this->segmentPin[0], HIGH);//9
        digitalWrite(this->segmentPin[1], HIGH);
        digitalWrite(this->segmentPin[2], HIGH);
        digitalWrite(this->segmentPin[3], HIGH);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], HIGH);
        digitalWrite(this->segmentPin[6], HIGH);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
      case None: {
        digitalWrite(this->segmentPin[0], LOW);//nothing
        digitalWrite(this->segmentPin[1], LOW);
        digitalWrite(this->segmentPin[2], LOW);
        digitalWrite(this->segmentPin[3], LOW);
        digitalWrite(this->segmentPin[4], LOW);
        digitalWrite(this->segmentPin[5], LOW);
        digitalWrite(this->segmentPin[6], LOW);
        digitalWrite(this->segmentPin[7], displayDots);
        break;
      }
    }
  }
}

void Actuator::motor(Side side, const unsigned long ms) {
  unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  while (true) {
    nowMillis = millis();
    switch (side) {
      case L: {
        digitalWrite(this->clockPin, 1);
        analogWrite(this->motorPin[0], 50);
        analogWrite(this->motorPin[1], 0);
        digitalWrite(this->clockPin, 0);
        break;
      }
      case R: {
        digitalWrite(this->clockPin, 1);
        analogWrite(this->motorPin[0], 0);
        analogWrite(this->motorPin[1], 50);
        digitalWrite(this->clockPin, 0);
        break;
      }
    }
    motorStop();
    if (nowMillis - prevMillis >= ms) {
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

void Actuator::buzzer(const int hertz) {
  tone(this->buzzerPin, hertz);
}
