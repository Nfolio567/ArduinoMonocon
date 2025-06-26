const int bzaa = 44;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int photoic = 46;

void setup() {
  int i;
  for(i=0;i<8;i++) pinMode(nasg[i],1);
  for(i=0;i<2;i++) pinMode( nasgvcc[i],1);
   pinMode( photoic, 0);
   pinMode( bzaa,1);
   Serial.begin(9600);
}

void loop(){
  int value = digitalRead(photoic);
  static int state = 0;
  static int num = 1;
    Serial.println(num);
  if(state == 0){
    if(value == HIGH){
    sesg(num);
  }else{state = 1;}
}
 
 if(state == 1){
    sesg(num);
    if(value == LOW){
      if(num<9){num++;}
        tone(bzaa, 140);
        delay(500);
  }else if(value == HIGH){
    if(num>1){num--;}
    noTone(bzaa);
    delay(500);
    }
  }
}
