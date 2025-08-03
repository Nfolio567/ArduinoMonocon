#include <Arduino.h>
#include <Monocon.h>

using Side = Actuator::Side;
using Content = Actuator::Content;

constexpr int motor[] = {44, 45};
constexpr int stMotor[4] = {40, 41, 42, 43};
constexpr int clk = 29;
constexpr int segment[] = {40, 41, 42, 43, 44, 45, 46, 47};
constexpr int segmentVcc[] = {24,25};
constexpr int buzzer = 28;
constexpr int taktSwitch = A1;
constexpr int variableResistance = A0;
int step = 0;
int buzzerState = 0;
unsigned long prevMillis = millis();
unsigned long nowMillis = 0;
Actuator actuator(clk, buzzer, segment, segmentVcc, motor, stMotor);

void setup() {
  for (const int i : motor) pinMode(i, 1);
  for (const int i : segment) pinMode(i, 1);
  for (const int i : segmentVcc) pinMode(i, 1);
  for (const int i : stMotor) pinMode(i, 1);
  pinMode(clk, 1);
  pinMode(buzzer, 1);
  pinMode(taktSwitch, 0);
  pinMode(variableResistance, 0);
  Serial.begin(9600);
}

void loop() {
  /** 暇やったらここにあるコード解読してみて
   * もしかしたらコード不十分の可能性あるかも
   */

  // １個目
  /*const int switchState = digitalRead(taktSwitch);
  if (switchState == 0) {
    prevMillis = millis();
    buzzerState = 0;
    step = 0;
    noTone(buzzer);
    actuator.segment(Side::LEFT, Content::L);
  } else {
    nowMillis = millis();
    actuator.segmentStop();
    actuator.steppingMotor(Side::RIGHT, step);
    step++;
    if (step == 4) step = 0;
    actuator.segment(Side::RIGHT, Content::d);
    delay(1);
    actuator.segment(Side::LEFT, Content::b);
    delay(1);
    if (nowMillis - prevMillis >= 1000) {
      noTone(buzzer);
    } else if (nowMillis - prevMillis >= 0) {
      tone(buzzer, 140);
    }
    if (nowMillis - prevMillis >= 2000) {
      prevMillis = millis();
    }
    Serial.println(nowMillis - prevMillis);
  }*/

  // ２個目
  /*if (switchState == 1) {
    actuator.segmentStop();
    actuator.motorStop();
    actuator.segment(Side::RIGHT, Content::n);
    tone(buzzer, 140);
  } else {
    noTone(buzzer);
    actuator.segmentStop();
    actuator.motor(Side::RIGHT, 60, 1);
    actuator.segment(Side::RIGHT, Content::M);
    delay(1);
  }*/

  // ３個目
  /*step = 0;
  for (int i=0;i<240;i++) {  
    actuator.segmentStop();
    actuator.steppingMotor(Side::RIGHT, step);
    step++;
    if (step == 4) step = 0;
    actuator.segment(Side::RIGHT, Content::M);
    delay(1);
  }

  step = 0;
  for (int i=0;i<240;i++) {
    actuator.segmentStop();
    actuator.steppingMotor(Side::LEFT, step);
    step++;
    if (step == 4) step = 0;
    actuator.segment(Side::LEFT, Content::n);
    delay(1);
  }*/

  // ４個目
  /*actuator.segmentStop();
  actuator.steppingMotor(Side::RIGHT, step);
  step++;
  if(step == 4) step=0;
  actuator.segment(Side::LEFT, Content::C);
  delay(1);
  actuator.segmentStop();
  actuator.steppingMotor(Side::RIGHT, step);
  step++;
  if(step == 4) step=0;
  actuator.segment(Side::RIGHT, Content::d); 
  delay(1);*/
}
