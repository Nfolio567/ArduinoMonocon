#include<Stepper.h>
#include<TimerThree.h>

const int nasgvcc[] = {42,43};
const int nasg[] = {2,3,4,5,6,7,8,9};
const int volume = A0;
const int mstep = 360;
const int stmotor[] = {2,3,4,5};
int stcnt = 0;
//int stm[4][4] = {{1,0,0,1},{0,0,1,1},{0,1,1,0},{1,1,0,0}};
const int clk =11;
const int motor[] = {6,7};
int a =0;
Stepper myStepper(mstep,2,3,4,5);

void setup() {
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  pinMode(volume,0);
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
  //Timer3.initialize(8000);
  //Timer3.attachInterrupt(STmotor);
  //Timer3.start();
  Serial.begin(9600);
  myStepper.setSpeed(60);
}

void loop() {
  int vol = analogRead(volume);
  if(vol>=490 && vol<=510){
    //Timer3.stop();
    digitalWrite(motor[0,1],0);
    noTone(clk);
    sesg(1,5);
  }else if(vol>510){
    int stm[4][4] = {{1,0,0,1},{0,0,1,1},{0,1,1,0},{1,1,0,0}};
    //Timer3.resume();
    digitalWrite(motor[0,1],1);
    if(vol<689){
      sesg(1,6);
      delay(10);
      sesg(1,10);
      digitalWrite(motor[0,1],1);
      digitalWrite(nasgvcc[0,1],0);
      /*tone(clk,120);
      myStepper.step(4);*/
      //digitalWrite(motor[0,1],0);
      for(int i=0;i<4;i++){
        Serial.println(a);
        digitalWrite(clk,1);
        digitalWrite(stmotor[0],stm[a][0]);
        digitalWrite(stmotor[1],stm[a][1]);
        digitalWrite(stmotor[2],stm[a][2]);
        digitalWrite(stmotor[3],stm[a][3]);
        delay(5);
        digitalWrite(clk,0);
        delay(5);
        //stcnt++;
        a++;
        if(a == 4){a = 0;}
      }
      //delay(1);
      //a = 0;
    }else if(vol<850){
      //noTone(clk);
      sesg(1,7);
      delay(1);
      sesg(1,10);
      
      digitalWrite(nasgvcc[0,1],0);
      digitalWrite(motor[0,1],0);
      tone(clk,120);
      myStepper.step(18);
      delay(1);

      
      //noTone(clk);
      /*digitalWrite(motor[0,1],1);
      digitalWrite(nasgvcc[0,1],0);
      digitalWrite(clk,1);
      digitalWrite(stmotor[0],stm[stcnt][0]);
      digitalWrite(stmotor[1],stm[stcnt][1]);
      digitalWrite(stmotor[2],stm[stcnt][2]);
      digitalWrite(stmotor[3],stm[stcnt][3]);
      delay(5);
      digitalWrite(clk,0);
      delay(5);
      stcnt++;*/
    }else if(vol<1020){
      sesg(1,8);
      delay(1000);
      sesg(1,10);
  digitalWrite(motor[0,1],1);
  digitalWrite(nasgvcc[0,1],0);
  digitalWrite(clk,1);
  digitalWrite(stmotor[0],stm[stcnt][0]);
  digitalWrite(stmotor[1],stm[stcnt][1]);
  digitalWrite(stmotor[2],stm[stcnt][2]);
  digitalWrite(stmotor[3],stm[stcnt][3]);
  delay(5);
  digitalWrite(clk,0);
  delay(5);
  stcnt++;
    }else{
      noTone(clk);
      sesg(1,9);
      delay(1000);
      sesg(1,10);
  digitalWrite(motor[0,1],1);
  digitalWrite(nasgvcc[0,1],0);
  digitalWrite(clk,1);
  digitalWrite(stmotor[0],stm[stcnt][0]);
  digitalWrite(stmotor[1],stm[stcnt][1]);
  digitalWrite(stmotor[2],stm[stcnt][2]);
  digitalWrite(stmotor[3],stm[stcnt][3]);
  delay(5);
  digitalWrite(clk,0);
  delay(5);
  stcnt++;
    }
    /*delay(10);
    digitalWrite(motor[0,1],1);
    digitalWrite(nasgvcc[0,1],0);
    digitalWrite(clk,1);
    digitalWrite(stmotor[0],stm[stcnt][0]);
    digitalWrite(stmotor[1],stm[stcnt][1]);
    digitalWrite(stmotor[2],stm[stcnt][2]);
    digitalWrite(stmotor[3],stm[stcnt][3]);
    delay(5);
    digitalWrite(clk,0);
    delay(5);
    stcnt++;*/
  if(stcnt>=4){stcnt = 0;}
    /*digitalWrite(stmotor[0],stm[stcnt][0]);
    digitalWrite(stmotor[1],stm[stcnt][1]);
    digitalWrite(stmotor[2],stm[stcnt][2]);
    digitalWrite(stmotor[3],stm[stcnt][3]);
    delay(3);
    digitalWrite(clk,0);
    delay(3);*/
    /*switch(vol){
      case 550<<689:
        sesg(1,6);
        break;
      case 690:
        sesg(1,7);
        break;
      case 850:
        sesg(1,8);
        break;
      case 1020:
        sesg(1,9);
        break;
    }*/
  }else if(vol<490){
    Timer3.resume();
    digitalWrite(motor[0,1],0);
    noTone(clk);
    switch(vol){
      case 450:
        sesg(1,4);
        break;
      case 338:
        sesg(1,3);
        break;
      case 226:
        sesg(1,2);
        break;
      case 114:
        sesg(1,1);
        break;
    }
  }
  //Serial.println(vol);
}

/*void STmotor(){
  if(analogRead(volume)>510){
    digitalWrite(motor[0,1],0);
    digitalWrite(nasgvcc[0,1],0);
    digitalWrite(clk,1);
    for(int i=0;i<4;i++){
      digitalWrite(stmotor[0],stm[stcnt][0]);
      digitalWrite(stmotor[1],stm[stcnt][1]);
      digitalWrite(stmotor[2],stm[stcnt][2]);
      digitalWrite(stmotor[3],stm[stcnt][3]);
      delay(3);
      digitalWrite(clk,0);
      delay(3);
      stcnt++;
    }
  }else if(analogRead(volume)<490){
    
  }
  if(stcnt>=3){stcnt = 0;}
}*/
