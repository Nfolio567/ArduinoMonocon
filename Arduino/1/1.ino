const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};


void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
}

void loop() {
  sesg(0,6,0);
  delay(1000);
  sesg(1,7,0);
  delay(1000);
  sesg(0,3,0);
  delay(1000);
  sesg(1,0,0);
  delay(1000);
}
