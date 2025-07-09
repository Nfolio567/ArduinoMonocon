#include <Arduino.h>
#include <Monocon.h>
const int motor[] = {6,7};
const int clk = 11;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
Actuator actuator(clk, 0, nasg, nasgvcc, motor);

void setup() {
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  pinMode(clk,1);
  
}

void loop() {
  actuator.segment(Actuator::R, 8);
  actuator.motor(Actuator::L, 1000);
  actuator.motorStop();
  delay(1000);
}
