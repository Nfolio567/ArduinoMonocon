//課題３
#include<TimerThree.h>

const int motor[] = {6,7};
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int clk = 11;

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  pinMode(clk,1);
  Timer3.initialize(2000);
  Timer3.attachInterrupt(TMotor);
  Timer3.start();
}

void loop() {
  Timer3.resume();
  digitalWrite(motor[1],1);
  noTone(clk);
  for(int i=0;i<100;i++){
    digitalWrite(nasgvcc[1], 1);
    digitalWrite(nasgvcc[0], 0);
    digitalWrite(nasg[0], 0);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 0);
    digitalWrite(nasg[3], 0);
    digitalWrite(nasg[4], 1);
    digitalWrite(nasg[5], 0);
    digitalWrite(nasg[6], 1);
    digitalWrite(nasg[7], 0);
    delay(10);
 }
 Motor("ST");
  delay(1);
  Timer3.stop();
  sesg(1,10,0);
  delay(1000);
}

void TMotor() {
  digitalWrite(nasgvcc[0],0);
  digitalWrite(nasgvcc[1],0);
  Motor("R");
  delay(1);
}
