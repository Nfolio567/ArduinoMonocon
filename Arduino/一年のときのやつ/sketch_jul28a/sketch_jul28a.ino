const int poop[] = {2,3,4,5,6,7,8,9};
const int poopvcc[] = {42,43};
const int volume = A0;
const int takts = 45;
const int motor[] = {6,7};
const int clk = 11;
const int MOTER_STEPS = 600;
const int bzaa = 44;
const int photoic = 46;

#include<TimerThree.h>

Stepper myStepper(MOTOR_STEPS,2,3,4,5);

void setup() {
  myStepper.setSpeed(60);
  for(int i=0;i<8;i++)pinMode(poop[i],1);
  for(int i=0;i<2;i++)pinMode(poopvcc[i],1);
  for(int i=0;i<2;i++)pinMode(motor[i],1);
  pinMode(volume,0);
  pinMode(takts,0);
  pinMode(clk,1);
  pinMode(bzaa,1);
  pinMode(photo,0);
}

void loop() {
  int takt = digitalRead(takts);
  int photo = digitalRead(photoic);
  int volume = 
}
