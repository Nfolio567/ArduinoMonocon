const int clk = 11;
const int shiro = 6;
const int kuro = 7;

void setup() {
   pinMode( clk, OUTPUT);
   pinMode( shiro, OUTPUT);
   pinMode( kuro, OUTPUT);
}

void loop() {
   tone( clk,230);
   analogWrite( shiro, 0);
   analogWrite( kuro, 50);//右回転

   delay(3000);

   tone( clk, 230);
   digitalWrite( shiro, HIGH);
   digitalWrite( kuro, HIGH);

   delay(1000);

   tone( clk, 230);
   analogWrite( shiro, 50);
   analogWrite( kuro, 0);

   delay(3000);

     tone( clk, 230);
   digitalWrite( shiro, HIGH);
   digitalWrite( kuro, HIGH);

   delay(1000);
}
