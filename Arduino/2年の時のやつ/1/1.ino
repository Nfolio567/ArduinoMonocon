const int nasg[]{2,3,4,5,6,7,8,9};
const int nasgvcc[]{42,43};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);};
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);};
}

void loop() {
  sesg(1,2);
  delay(1000);
  sesg(1,3);
  delay(1000);
  sesg(1,0);
  delay(1000);
  sesg(1,5);
  delay(1000);
}
