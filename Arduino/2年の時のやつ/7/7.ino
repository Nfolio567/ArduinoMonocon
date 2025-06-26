const int photoic = 46;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int volume = A0;
const int bzaa = 44;
const int motor[] = {6,7};
int state = 0;
int state2 = 0;
int state3 = 0;
const int clk = 11;

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  pinMode(photoic,0);
  pinMode(volume,0);
  pinMode(bzaa,1);
}

void loop() {
  int photo = digitalRead(photoic);
  int vol = analogRead(volume);
  if(0<=vol && vol<490){
    if(state == 0){
      digitalWrite(nasgvcc[1],1);
      digitalWrite(nasg[0],1);
      digitalWrite(nasg[1],1);
      digitalWrite(nasg[2],1);
      digitalWrite(nasg[3],0);
      digitalWrite(nasg[4],1);
      digitalWrite(nasg[5],1);
      digitalWrite(nasg[6],1);
      digitalWrite(nasg[7],0);
      if(photo == 0){state = 1;}
    }
    if(state == 1){
      if(photo == 0){
        Motor("ST");
        noTone(bzaa);
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasg[0],1);
        digitalWrite(nasg[1],1);
        digitalWrite(nasg[2],1);
        digitalWrite(nasg[3],0);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],1);
        digitalWrite(nasg[7],0);
        delay(1);
        digitalWrite(nasgvcc[0,1],0);
        Motor("L");
        delay(4);
      }else if(photo == 1){
        Motor("ST");
        delay(10);
        noTone(clk);
        tone(bzaa,370);
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasg[0],1);
        digitalWrite(nasg[1],1);
        digitalWrite(nasg[2],1);
        digitalWrite(nasg[3],0);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],1);
        digitalWrite(nasg[7],0);
      }
    }
  }else if(vol<510){
    noTone(bzaa);
    if(state2 == 0){
      digitalWrite(nasgvcc[1],1);
      digitalWrite(nasg[0],0);
      digitalWrite(nasg[1],0);
      digitalWrite(nasg[2],1);
      digitalWrite(nasg[3],1);
      digitalWrite(nasg[4],1);
      digitalWrite(nasg[5],1);
      digitalWrite(nasg[6],1);
      digitalWrite(nasg[7],0);
      if(photo == 0){state2 = 1;}
    }
    if(state2 == 1){
      if(photo == 0){
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasgvcc[0],0);
        digitalWrite(nasg[0],0);
        digitalWrite(nasg[1],0);
        digitalWrite(nasg[2],1);
        digitalWrite(nasg[3],1);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],1);
        digitalWrite(nasg[7],0);
        delay(1000);
        digitalWrite(nasgvcc[1],0);
        digitalWrite(nasgvcc[0],1);
        digitalWrite(nasg[0],0);
        digitalWrite(nasg[1],0);
        digitalWrite(nasg[2],0);
        digitalWrite(nasg[3],0);
        digitalWrite(nasg[4],0);
        digitalWrite(nasg[5],0);
        digitalWrite(nasg[6],0);
        digitalWrite(nasg[7],1);
        delay(10);
      }else if(photo == 1){
        digitalWrite(nasg[0,1,2,3,4,5,6,7],0);
        digitalWrite(nasgvcc[0],0);
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasg[0],0);
        digitalWrite(nasg[1],0);
        digitalWrite(nasg[2],1);
        digitalWrite(nasg[3],1);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],1);
        digitalWrite(nasg[7],0);
      }
    }
  }else if(vol<1024){
    if(state3 == 0){
      noTone(bzaa);
      digitalWrite(nasgvcc[1],1);
      digitalWrite(nasg[0],1);
      digitalWrite(nasg[1],0);
      digitalWrite(nasg[2],0);
      digitalWrite(nasg[3],1);
      digitalWrite(nasg[4],1);
      digitalWrite(nasg[5],1);
      digitalWrite(nasg[6],0);
      digitalWrite(nasg[7],0);
      if(photo == 0){state3 = 1;}
    }
    if(state3 == 1){
      if(photo == 0){
        Motor("ST");
        noTone(bzaa);
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasg[0],1);
        digitalWrite(nasg[1],0);
        digitalWrite(nasg[2],0);
        digitalWrite(nasg[3],1);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],0);
        digitalWrite(nasg[7],0);
        delay(1);
        digitalWrite(nasgvcc[0,1],0);
        Motor("R");
        delay(4);
      }else if(photo == 1){
        Motor("ST");
        delay(10);
        noTone(clk);
        tone(bzaa,370);
        digitalWrite(nasgvcc[1],1);
        digitalWrite(nasg[0],1);
        digitalWrite(nasg[1],0);
        digitalWrite(nasg[2],0);
        digitalWrite(nasg[3],1);
        digitalWrite(nasg[4],1);
        digitalWrite(nasg[5],1);
        digitalWrite(nasg[6],0);
        digitalWrite(nasg[7],0);
      }
    }
  }
}