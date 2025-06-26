const int clk = 11;
const int bzaa = 44;
const int motor[]={6,7};

void setup() {
  int i;
  pinMode(clk, 1);
  pinMode(bzaa,1);
  for(i=0;i<2;i++) pinMode(motor[i],1);
}

void loop() {
  Motor("L");
  delay(2000);
  Motor("ST");
  for(int i=0;i<100;i++){
    digitalWrite(bzaa,1);
    delay(5);
    digitalWrite(bzaa,0);
    delay(5);
  }
}
