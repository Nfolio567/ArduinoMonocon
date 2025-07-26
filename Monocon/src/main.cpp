#include <Arduino.h>
#include <Monocon.h>

using Side = Actuator::Side;
using Content = Actuator::Content;

constexpr int motor[] = {44, 45};
constexpr int stMotor[4] = {40, 41, 42, 43};
constexpr int clk = 29;
constexpr int nasg[] = {40, 41, 42, 43, 44, 45, 46, 47};
constexpr int nasgvcc[] = {24,25};
constexpr int buzzer = 28;
int step = 0;
Actuator actuator(clk, buzzer, nasg, nasgvcc, motor, stMotor);

void setup() {
  for (int i : motor) pinMode(i, 1);
  for (int i : nasg) pinMode(i, 1);
  for (int i : nasgvcc) pinMode(i, 1);
  for (int i : stMotor) pinMode(i, 1);
  pinMode(clk, 1);
  pinMode(buzzer, 1);
}

void loop() {
  step = 0;
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
  }

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

  /*for (int i=0;i<120;i++) {
    actuator.steppingMotor(Actuator::RIGHT, step);
  }
  delay(1000);*/
}
