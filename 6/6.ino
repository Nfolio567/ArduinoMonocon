//課題２
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
}

void loop() {
  for(int i=0;i<50;i++){
    sesg(0,2,0);
    delay(10);
    sesg(1,0,0);
    delay(10);
  }
  for(int i=0;i<50;i++){
    sesg(0,2,0);
    delay(10);
    sesg(1,4,0);
    delay(10);
  }
  for(int i=0;i<50;i++){
    digitalWrite(nasgvcc[1], 0);
    digitalWrite(nasgvcc[0], 1);
    digitalWrite(nasg[0], 1);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 0);
    digitalWrite(nasg[3], 1);
    digitalWrite(nasg[4], 1);
    digitalWrite(nasg[5], 1);
    digitalWrite(nasg[6], 1);
    digitalWrite(nasg[7], 0);
    
    delay(10);

    digitalWrite(nasgvcc[1], 1);
    digitalWrite(nasgvcc[0], 0);
    digitalWrite(nasg[0], 0);
    digitalWrite(nasg[1], 0);
    digitalWrite(nasg[2], 0);
    digitalWrite(nasg[3], 1);
    digitalWrite(nasg[4], 1);
    digitalWrite(nasg[5], 1);
    digitalWrite(nasg[6], 0);
    digitalWrite(nasg[7], 0);
    
    delay(10);
  }
}
