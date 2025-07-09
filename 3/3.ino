//課題５
const int motor[] = {6,7};
const int clk = 11;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int bzaa = 44;
const int photoic = 46;
int value = 0;

void setup() {
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  pinMode(clk,1);
  pinMode(bzaa,1);
  pinMode(photoic,0);

}

void loop() {
  /*int phic = digitalRead(photoic);
  if(phic == 1){
    noTone(bzaa);
    digitalWrite(nasgvcc[0], 0);
    digitalWrite(nasgvcc[1], 0);
    while(value == 0){
      Motor("L");
      delay(2000);
      value++;
    }
    Motor("ST");
  }
  if(phic == 0){
    digitalWrite(nasgvcc[0], 0);
    digitalWrite(nasgvcc[1], 1);
    digitalWrite(nasg[0], 0);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 1);
    digitalWrite(nasg[3], 1);
    digitalWrite(nasg[4], 1);
    digitalWrite(nasg[5], 1);
    digitalWrite(nasg[6], 1);
    digitalWrite(nasg[7], 0);
    
    tone(bzaa,370);
    delay(1000);
    noTone(bzaa);
    delay(1000);
    value = 0;
  }*/
  Motor("R", 1000);
  motorStop();
  delay(1000);
}
