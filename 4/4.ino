//課題４
#include<TimerThree.h>

const int motor[] = {6,7};
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int clk = 11;
const int stmotor[] = {2,3,4,5};
const int taktSwitch = 45;
int stcnt = 0;
int stm[4][4] = {{1,0,0,1},{1,1,0,0},{0,1,1,0},{0,0,1,1}};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
  pinMode(clk,1);
  pinMode(taktSwitch,0);
  Timer3.initialize(6000);
  Timer3.attachInterrupt(STMotor);
  Timer3.start();
}

void loop() {
  int takt = digitalRead(taktSwitch);

  if(takt == 0){
    Timer3.stop();
    digitalWrite(nasgvcc[0], 0);
    digitalWrite(nasgvcc[1], 1);
    digitalWrite(nasg[0], 0);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 1);
    digitalWrite(nasg[3], 1);
    digitalWrite(nasg[4], 0);
    digitalWrite(nasg[5], 1);
    digitalWrite(nasg[6], 1);
    digitalWrite(nasg[7], 0);
  }else if(takt == 1){
    Timer3.resume();
    digitalWrite(nasgvcc[0], 1);
    digitalWrite(nasgvcc[1], 0);
    digitalWrite(nasg[0], 0);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 0);
    digitalWrite(nasg[3], 1);
    digitalWrite(nasg[4], 1);
    digitalWrite(nasg[5], 1);
    digitalWrite(nasg[6], 0);
    digitalWrite(nasg[7], 0);
  }
}

void STMotor() {
  digitalWrite(nasgvcc[0], 0);
  digitalWrite(nasgvcc[1], 0);
  digitalWrite(motor[0],1);
  digitalWrite(motor[1],1);

  digitalWrite(stmotor[0],stm[stcnt][0]);
  digitalWrite(stmotor[2],stm[stcnt][1]);
  digitalWrite(stmotor[1],stm[stcnt][2]);
  digitalWrite(stmotor[3],stm[stcnt][3]);
  digitalWrite(clk,1);
  delay(10);
  digitalWrite(clk,0);
  delay(10);
  stcnt++;
  if(stcnt == 4){stcnt = 0;}
}
