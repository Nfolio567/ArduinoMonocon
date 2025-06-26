#include<Stepper.h>

const int motorstep = 600;
const int clk = 11;
const int motor[] = {6,7};
Stepper myStepper(motorstep,2,3,4,5);
void setup() {
  myStepper.setSpeed(60);
  for(int i=2;i<=5;i++){pinMode(i,1);}
  pinMode(clk,1);
}

void loop() {
  tone(clk,120);
  myStepper.step(1230);
  for(int i=2;i<=5;i++){digitalWrite(i,0);}
  noTone(clk);
  
  Motor("R");
  delay(2000);
  Motor("ST");

  noTone(clk);
}
