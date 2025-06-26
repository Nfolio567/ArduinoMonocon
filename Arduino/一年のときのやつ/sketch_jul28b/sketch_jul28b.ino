const int poop[] = {2,3,4,5,6,7,8,9};
const int poopvcc[] = {42,43};
const int volume = A0;
const int takts = 45;
const int motor[] = {6,7};
const int clk = 11;
const int MOTER_STEPS = 600;

#include<Stepper.h>
#include<TimerThree.h>

Stepper myStepper(MOTER_STEPS,2,3,4,5);

void setup() {
  digitalWrite(poopvcc[0,1],HIGH);
  tone(clk,120);
  myStepper.setSpeed(60);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Timer3.initialize(15000);
  Timer3.attachInterrupt(timerFire);
}

void timerFire() {
  digitalWrite(motor[0],HIGH);
  digitalWrite(motor[1],1);
  digitalWrite(poopvcc[0,1],LOW);
  tone(clk,120);
  static int i=0;
  static int pa[4][4]={1,0,0,1,0,0,1,1,0,1,1,0,1,1,0,0};
  i++;
  i=i%4;
  digitalWrite(2,pa[i][0]);
  digitalWrite(4,pa[i][1]);
  digitalWrite(3,pa[i][2]);
  digitalWrite(5,pa[i][3]);
  int value = 1;
}

void loop() {
  digitalWrite(poopvcc[0,1],HIGH);
  noTone(clk);
  sesg(3);
  int value = 0;
}
