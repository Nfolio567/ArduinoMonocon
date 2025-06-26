int stcnt = 0;
int stm[4][4] = {{0,1,0,1},{0,1,1,0},{1,0,1,0},{1,0,0,1}};
const int clk =11;
const int stmotor[] = {2,3,4,5};

void setup() {
  pinMode(clk,1);
  for(int i=0;i<4;i++){pinMode(stmotor[i],1);}
}

void loop() {
  digitalWrite(clk,1);
  digitalWrite(stmotor[0],stm[stcnt][0]);
  digitalWrite(stmotor[1],stm[stcnt][1]);
  digitalWrite(stmotor[2],stm[stcnt][2]);
  digitalWrite(stmotor[3],stm[stcnt][3]);
  delay(5);
  digitalWrite(clk,0);
  delay(5);
  stcnt++;
  if(stcnt>=4){stcnt = 0;}
}
