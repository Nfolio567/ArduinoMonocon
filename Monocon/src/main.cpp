#include <Arduino.h>
#include <Monocon.h>
#include <TimerThree.h>

const int motor[] = {6,7};
const int stMotor[4] = {2, 3, 4, 5};
const int clk = 11;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int buzzer = 44;
int step = 0;
Actuator actuator(clk, 0, nasg, nasgvcc, motor, stMotor);

void setup() {
  for(int i=0;i<2;i++) pinMode(motor[i], 1);
  for(int i=0;i<8;i++) pinMode(nasg[i], 1);
  for(int i=0;i<2;i++) pinMode(nasgvcc[i], 1);
  //for (int i=0;i<4;i++) pinMode(stMotor[i], 1);
  pinMode(clk, 1);
  pinMode(buzzer, 1);
}

void loop() {
  actuator.segmentStop();
  actuator.motor(Actuator::RIGHT, 1);
  actuator.segment(Actuator::LEFT, Actuator::C);
  delay(1);
  actuator.segmentStop();
  actuator.motor(Actuator::RIGHT, 1);
  actuator.segment(Actuator::RIGHT, Actuator::d);
  delay(1);

  /*for (int i=0;i<120;i++) {
    actuator.stepingMotor(Actuator::RIGHT, step);
    step++;
    if(step == 4) step=0;
  }
  delay(1000);*/
}
