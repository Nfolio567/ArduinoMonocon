const int bzaa = 44;
const int nasg1 = 2;
const int nasg2 = 3;
const int nasg3 = 4;
const int nasg4 = 5;
const int nasg5 = 6;
const int nasg6 = 7;
const int nasg7 = 8;
const int nasg8 = 9;
const int nasgvccL = 42;
const int nasgvccR = 43;

void setup() {
   pinMode( bzaa, OUTPUT);
   pinMode( nasg1, OUTPUT );//一番上
   pinMode( nasg2, OUTPUT );//右上
   pinMode( nasg3, OUTPUT );//右下
   pinMode( nasg4, OUTPUT );//一番下
   pinMode( nasg5, OUTPUT );//左下
   pinMode( nasg6, OUTPUT );//左上
   pinMode( nasg7, OUTPUT );//真ん中
   pinMode( nasg8, OUTPUT );//点
   pinMode( nasgvccL, OUTPUT );
   pinMode( nasgvccR, OUTPUT );
}

void loop() {
   digitalWrite(nasgvccR,HIGH);
   digitalWrite(nasg1, HIGH);
   digitalWrite(nasg2, HIGH);
   digitalWrite(nasg3, HIGH);
   digitalWrite(nasg4, HIGH);
   digitalWrite(nasg5, HIGH);
   digitalWrite(nasg6, HIGH);
   digitalWrite(nasg7, LOW);
   digitalWrite(nasg8, LOW);

   delay(1000);

   digitalWrite(nasg1, LOW);
   digitalWrite(nasg2, HIGH);
   digitalWrite(nasg3, HIGH);
   digitalWrite(nasg4, LOW);
   digitalWrite(nasg5, LOW);
   digitalWrite(nasg6, LOW);
   digitalWrite(nasg7, LOW);
   digitalWrite(nasg8, LOW);

   delay(1000);

   digitalWrite(nasg1, HIGH);
   digitalWrite(nasg2, HIGH);
   digitalWrite(nasg3, LOW);
   digitalWrite(nasg4, HIGH);
   digitalWrite(nasg5, HIGH);
   digitalWrite(nasg6, LOW);
   digitalWrite(nasg7, HIGH);
   digitalWrite(nasg8, LOW);

   delay(1000);

   digitalWrite(nasg1, HIGH);
   digitalWrite(nasg2, HIGH);
   digitalWrite(nasg3, HIGH);
   digitalWrite(nasg4, HIGH);
   digitalWrite(nasg5, LOW);
   digitalWrite(nasg6, LOW);
   digitalWrite(nasg7, HIGH);
   digitalWrite(nasg8, LOW);

   delay(1000);

   digitalWrite(nasg1, LOW);
   digitalWrite(nasg2, HIGH);
   digitalWrite(nasg3, HIGH);
   digitalWrite(nasg4, LOW);
   digitalWrite(nasg5, LOW);
   digitalWrite(nasg6, HIGH);
   digitalWrite(nasg7, HIGH);
   digitalWrite(nasg8, LOW);

   delay(1000);

}
