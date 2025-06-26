const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int stmotor[] = {2,3,4,5};
const int clk = 11;
const int motor[] = {6,7};
int stm[4][4] = {{1,0,0,1},{1,1,0,0},{0,1,1,0},{0,0,1,1}};
int stcnt = 0;
int rpm = 1;
int count = 0;

#include<Stepper.h>
#include<TimerThree.h>

Stepper myStepper(120,2,3,4,5);
void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
  pinMode(clk,1);
  myStepper.setSpeed(60);
  Serial.begin(9600);
  Timer3.initialize(6000);
  Timer3.attachInterrupt(unko);
  Timer3.start();
}

void loop() {
  /*for(int i=0;i<4;i++){
    Serial.println(stcnt);
    digitalWrite(clk,1);
    digitalWrite(stmotor[0],stm[stcnt][0]);
    digitalWrite(stmotor[2],stm[stcnt][1]);
    digitalWrite(stmotor[1],stm[stcnt][2]);
    digitalWrite(stmotor[3],stm[stcnt][3]);
    delay(5);
    //digitalWrite(motor[0],1);
    //digitalWrite(motor[1],1);
    digitalWrite(clk,0);
    //delay(1000);
    //sesg(1,3);
    delay(5);
    //digitalWrite(nasgvcc[0,1],0);
    stcnt++;
    if(stcnt == 4){stcnt = 0;}
  }*/
  //Motor("ST");
  /*count++;
  Serial.println(rpm);
  noTone(clk);
  delay(1);
  sesg(1,8);
  delay(2);
  digitalWrite(motor[0,1],1);
  digitalWrite(nasgvcc[0,1],0);
  digitalWrite(nasg[0], 0);//0
  digitalWrite(nasg[1], 0);
  digitalWrite(nasg[2], 0);
  digitalWrite(nasg[3], 0);
  tone(clk,120);
  myStepper.step(6);*/
  
  /*while(count%10 == 0){
    rpm++;
    break;
  }*/

  sesg(1,7);
  delay(1);
  //digitalWrite(motor[1],1);
  sesg(0,6);
  delay(1);
  /*delay(1);
  digitalWrite(nasgvcc[0,1],0);
  digitalWrite(stmotor[0],stm[stcnt][0]);
  digitalWrite(stmotor[2],stm[stcnt][1]);
  digitalWrite(stmotor[1],stm[stcnt][2]);
  digitalWrite(stmotor[3],stm[stcnt][3]);*/
}

void unko(){
  digitalWrite(motor[0],1);
  digitalWrite(motor[1],1);
  digitalWrite(nasgvcc[0],0);
  digitalWrite(nasgvcc[1],0);
  /*int value = 0;
  while(value == 0){
    digitalWrite(nasg[0], NULL);//0
    digitalWrite(nasg[1], NULL);
    digitalWrite(nasg[2], NULL);
    digitalWrite(nasg[3], NULL);
    value++;
  }*/
  delay(10);
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
