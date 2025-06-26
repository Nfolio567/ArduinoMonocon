const int motor[] = {6,7};
const int clk = 11;
const int nasgvcc[] = {42,43};

void setup() {
  for(int i=0;i<2;i++){pinMode(motor[i],1);}
  pinMode(clk,1);
}

void loop() {
  digitalWrite(nasgvcc[0],1);
  Motor("L");
}
