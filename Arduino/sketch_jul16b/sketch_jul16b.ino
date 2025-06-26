const int nasg[] = {2,3,4,5,6,7,8,9};
const int nasgvcc[] = {42,43};
const int motor[] = {6,7};
const int clk = 11;
const int takt = 45;
const int vcc[] = {12,13};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  pinMode(clk,1);
  pinMode(takt,0);
}

void loop() {
  int value = digitalRead(takt);
  if(value == 0){
    digitalWrite(vcc[0],0);
    digitalWrite(vcc[1],0);    
     noTone(clk);
      digitalWrite(nasgvcc[0],0);
      digitalWrite(nasgvcc[1],1);
      digitalWrite(nasg[0],0);
      digitalWrite(nasg[1],0);
      digitalWrite(nasg[2],1);
      digitalWrite(nasg[3],1);
      digitalWrite(nasg[4],0);
      digitalWrite(nasg[5],1);
      digitalWrite(nasg[6],1);
      digitalWrite(nasg[7],0);
  }else if(value == 1){
    digitalWrite(nasgvcc[1],0);
    digitalWrite(nasgvcc[0],1);
    digitalWrite(nasg[0],0);
    digitalWrite(nasg[1],0);
    digitalWrite(nasg[2],0);
    digitalWrite(nasg[3],0);
    digitalWrite(nasg[4],1);
    digitalWrite(nasg[5],0);
    digitalWrite(nasg[6],1);
    digitalWrite(nasg[7],0);
    digitalWrite(vcc[1],1);
    Motor("R");
  }
}
