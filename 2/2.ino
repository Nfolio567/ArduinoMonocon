//課題６
#include<TimerThree.h>

const int motor[] = {6,7};
const int clk = 11;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int stmotor[] = {2,3,4,5};
const int volume = A0;
int stcnt = 0;
int stm[4][4] = {{1,0,0,1},{1,1,0,0},{0,1,1,0},{0,0,1,1}};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
  pinMode(clk,1);
  pinMode(volume,0);
  Timer3.initialize(6000);
  Timer3.attachInterrupt(STMotor);
  Timer3.start();
}

void loop() {
  double vol = analogRead(volume);
  double num = 61.25;
  double num2 = 520+num;

  if(0<=vol && vol<490){
    Timer3.resume();
    if(vol<num){
    sesg(0,0,0);
    delay(1);
    sesg(1,0,0);
    delay(1);
  }else if(vol<num*2){
    sesg(0,0,0);
    delay(1);
    sesg(1,1,0);
    delay(1);
  }else if(vol<num*3){
    sesg(0,0,0);
    delay(1);
    sesg(1,2,0);
    delay(1);
  }else if(vol<num*4){
    sesg(0,0,0);
    delay(1);
    sesg(1,3,0);
    delay(1);
  }else if(vol<num*5){
    sesg(0,0,0);
    delay(1);
    sesg(1,4,0);
    delay(1);
  }else if(vol<num*6){
    sesg(0,0,0);
    delay(1);
    sesg(1,5,0);
    delay(1);
  }else if(vol<num*7){
    sesg(0,0,0);
    delay(1);
    sesg(1,6,0);
    delay(1);
  }else if(vol<num*8){
    sesg(0,0,0);
    delay(1);
    sesg(1,7,0);
    delay(1);
    }
  }else if(vol<=520){
    Timer3.stop();
    sesg(0,0,0);
    delay(1);
    sesg(1,8,0);
    delay(1);
  }else if(vol<=1023){
    Timer3.resume();
    if(vol<num2){
      sesg(0,0,0);
      delay(1);
      sesg(1,9,0);
      delay(1);
    }else if(vol<632.5){
      sesg(0,1,0);
      delay(1);
      sesg(1,0,0);
      delay(1);
    }else if(vol<693.75){
      sesg(0,1,0);
      delay(1);
      sesg(1,1,0);
      delay(1);
    }else if(vol<765){
      sesg(0,1,0);
      delay(1);
      sesg(1,2,0);
      delay(1);
    }else if(vol<826.25){
      sesg(0,1,0);
      delay(1);
      sesg(1,3,0);
      delay(1);
    }else if(vol<887.5){
      sesg(0,1,0);
      delay(1);
      sesg(1,4,0);
      delay(1);
    }else if(vol<=1023){
      sesg(0,1,0);
      delay(1);
      sesg(1,5,0);
      delay(1);
    }
  }
}

void STMotor() {
  int vol = analogRead(volume);
  digitalWrite(nasgvcc[0], 0);
  digitalWrite(nasgvcc[1], 0);
  digitalWrite(motor[0],1);
  digitalWrite(motor[1],1);

  if(0<=vol && vol<490){
    digitalWrite(stmotor[0],stm[stcnt][0]);
    digitalWrite(stmotor[2],stm[stcnt][1]);
    digitalWrite(stmotor[1],stm[stcnt][2]);
    digitalWrite(stmotor[3],stm[stcnt][3]);
    digitalWrite(clk,1);
    delay(10);
    digitalWrite(clk,0);
    delay(10);
  }else if(510<vol && vol<=1023){
    digitalWrite(stmotor[3],stm[stcnt][0]);
    digitalWrite(stmotor[1],stm[stcnt][1]);
    digitalWrite(stmotor[2],stm[stcnt][2]);
    digitalWrite(stmotor[0],stm[stcnt][3]);
    digitalWrite(clk,1);
    delay(10);
    digitalWrite(clk,0);
    delay(10);
  }
  stcnt++;
  if(stcnt == 4){stcnt = 0;}
}
