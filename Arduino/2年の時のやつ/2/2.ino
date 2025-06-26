const int nasg[]{2,3,4,5,6,7,8,9};
const int nasgvcc[]{42,43};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);};
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);};
}

void loop() {
  for(int i=0;i<500;i++){
    digitalWrite(nasgvcc[1],0);
    digitalWrite(nasgvcc[0],1);
    digitalWrite(nasg[4],1);
    digitalWrite(nasg[6],1);
    for(int i=0;i<4;i++){digitalWrite(nasg[i],0);};
    digitalWrite(nasg[5],0);
    digitalWrite(nasg[7],0);
      delay(1);
    sesg(1,5);
      delay(1);
  }
  for(int i=0;i<500;i++){
    sesg(0,0);
      delay(1);
    sesg(1,7);
    delay(1);
  }
  for(int i=0;i<500;i++){
  sesg(0,2);
    delay(1);
  sesg(1,9);
  delay(1);
  }
}
