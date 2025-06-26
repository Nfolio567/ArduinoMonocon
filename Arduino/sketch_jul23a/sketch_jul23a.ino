int stm[4][4] = {{1,0,0,1},{0,0,1,1},{0,1,1,0},{1,1,0,0}};
const int stmotor[] = {2,3,4,5};
const int clk =11;
int a =0;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  a++;
  a=a%4;
  digitalWrite(clk,1);
  digitalWrite(stmotor[0],stm[i][0]);
  digitalWrite(stmotor[1],stm[i][1]);
  digitalWrite(stmotor[2],stm[i][2]);
  digitalWrite(stmotor[3],stm[i][3]);
  delay(15);
  digitalWrite(clk,0);
  delay(15);
}
