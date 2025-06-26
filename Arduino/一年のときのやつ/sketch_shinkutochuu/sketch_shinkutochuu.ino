const int bzaa = 44;
const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int photoic = 46;

void setup() {
  int i;
  for(i=0;i<8;i++) pinMode(nasg[i],1);
  for(i=0;i<2;i++) pinMode( nasgvcc[i],1);
   Serial.begin(9600);
}

void loop() {
  for(int i=0;i<500;i++){
    
  }
}
