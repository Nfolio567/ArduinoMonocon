const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int motor[] = {6,7};
const int bzaa = 44;
const int clk = 11;
const int stmotor[] = {2,3,4,5};
const int photoic = 46;
const int volume = A0;
const int taktSwitch = 45;
int state = 0;
int multiplication = 0;
int cnt = 0;
int leave = 0;
int value = 0;
int multi = 0;
int unko = 0;
int a = 0;

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
  pinMode(bzaa,1);
  pinMode(clk,1);
  pinMode(photoic,0);
  pinMode(volume,0);
  pinMode(taktSwitch,0);
  Serial.begin(9600);
}

void loop() {
  int phic = digitalRead(photoic);
  int vol = analogRead(volume);
  int takt = digitalRead(taktSwitch);
  Serial.println(multiplication);

  /*else if(leave == 3){
    if(takt == 0){
      state = 3;
    }
  }
  
  
  if(leave == 2 && state == 2){
    if(takt == 1){
      leave = 2;
    }
  }*/

  if(phic == 0){
    if(state == 0){
      if(0<=vol && vol<=125){
        multiplication = 0;
        sesg(0,0,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=250){
        multiplication = 1;
        sesg(0,1,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=375){
        multiplication = 2;
        sesg(0,2,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=489){
        multiplication = 3;
        sesg(0,3,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=510){
        multiplication = 4;
        sesg(0,4,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=595){
        multiplication = 5;
        sesg(0,5,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=680){
        multiplication = 6;
        sesg(0,6,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=765){
        multiplication = 7;
        sesg(0,7,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=855){
        multiplication = 8;
        sesg(0,8,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }else if(vol<=1023){
        multiplication = 9;
        sesg(0,9,1);
        delay(10);
        sesg(1,0,0);
        delay(10);
      }

      if(leave == 1){
        if(takt == 0){
          state = 1;
        }
      }
      if(leave == 0){
        if(takt == 1){
          leave = 1;
        }
      }
    }else if(state == 1){
      if(0<=vol && vol<=125){
        multi = 0;
        sesg(0,0,0);
        delay(10);
        sesg(1,0,1);
        delay(10);
      }else if(vol<=250){
        multi = 1;
        sesg(0,0,0);
        delay(10);
        sesg(1,1,1);
        delay(10);
      }else if(vol<=375){
        multi = 2;
        sesg(0,0,0);
        delay(10);
        sesg(1,2,1);
        delay(10);
      }else if(vol<=489){
        multi = 3;
        sesg(0,0,0);
        delay(10);
        sesg(1,3,1);
        delay(10);
      }else if(vol<=510){
        multi = 4;
        sesg(0,0,0);
        delay(10);
        sesg(1,4,1);
        delay(10);
      }else if(vol<=595){
        multi = 5;
        sesg(0,0,0);
        delay(10);
        sesg(1,5,1);
        delay(10);
      }else if(vol<=680){
        multi = 6;
        sesg(0,0,0);
        delay(10);
        sesg(1,6,1);
        delay(10);
      }else if(vol<=765){
        multi = 7;
        sesg(0,0,0);
        delay(10);
        sesg(1,7,1);
        delay(10);
      }else if(vol<=855){
        multi = 8;
        sesg(0,0,0);
        delay(10);
        sesg(1,8,1);
        delay(10);
      }else if(vol<=1023){
        multi = 9;
        sesg(0,0,0);
        delay(10);
        sesg(1,9,1);
        delay(10);
      }

      if(leave == 2){
        if(takt == 0){
          state = 2;
        }
      }
      if(leave == 1){
        if(takt == 1){
          leave = 2;
        }
      }
    }else if(state == 2){
      while(value<3){
        for(int i=0;i<50;i++){
          sesg(0,10,1);
          delay(10);
          sesg(1,10,1);
          delay(10);
        }
        for(int i=0;i<500;i++){
          sesg(0,10,0);
          delay(1);
          sesg(1,10,0);
          delay(1);
        }
        value++;
    }
      while(value == 3){
        multiplication = multi * multiplication;
        unko = multiplication / 10;
        value++;
      }
      if(unko == 0){
        sesg(0,0,0);
        delay(10);
        sesg(1,multiplication,0);
        delay(10);
      }else if(unko>0){
        int ten = multiplication / 10;
        int one = multiplication % 10;
        sesg(0,ten,0);
        delay(10);
        sesg(1,one,0);
        delay(10); 
      }
    }
  }else if(phic == 1){
    
  }
}