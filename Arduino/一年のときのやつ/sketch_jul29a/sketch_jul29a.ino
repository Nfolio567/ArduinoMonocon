  const int nasg[]{2,3,4,5,6,7,8,9};//1
  const int nasgvcc[]{42,43};

void setup() {
  for(int i=0;i<8;i++){pinMode(nasg[i],1);};
  for(int i=0;i<8;i++){pinMode(nasgvcc[i],1);};
}

void loop() {
  digitalWrite( nasgvcc[1],HIGH);
   digitalWrite( nasg[0], HIGH );//一番上
   digitalWrite( nasg[1], HIGH );//右上
   digitalWrite( nasg[2], LOW );//右下
   digitalWrite( nasg[3], HIGH );//一番下
   digitalWrite( nasg[4], HIGH );//左下
   digitalWrite( nasg[5], LOW );//左上
   digitalWrite( nasg[6], HIGH );//真ん中
   digitalWrite( nasg[7], LOW );//点

   delay(1000);

   digitalWrite( nasgvcc[1],HIGH);
   digitalWrite( nasg[0], HIGH );//一番上
   digitalWrite( nasg[1], HIGH);//右上
   digitalWrite( nasg[2], HIGH);//右下
   digitalWrite( nasg[3], HIGH );//一番下
   digitalWrite( nasg[4], LOW );//左下
   digitalWrite( nasg[5], LOW );//左上
   digitalWrite( nasg[6], HIGH );//真ん中
   digitalWrite( nasg[7], LOW );//点

   delay(1000);

   digitalWrite( nasgvcc[1],HIGH);
   digitalWrite( nasg[0], HIGH );//一番上
   digitalWrite( nasg[1], HIGH );//右上
   digitalWrite( nasg[2], HIGH);//右下
   digitalWrite( nasg[3], HIGH );//一番下
   digitalWrite( nasg[4], HIGH );//左下
   digitalWrite( nasg[5], HIGH );//左上
   digitalWrite( nasg[6], LOW );//真ん中
   digitalWrite( nasg[7], LOW );//点

   delay(1000);

   digitalWrite( nasgvcc[1],HIGH);
   digitalWrite( nasg[0], HIGH );//一番上
   digitalWrite( nasg[1], LOW );//右上
   digitalWrite( nasg[2], HIGH );//右下
   digitalWrite( nasg[3], HIGH );//一番下
   digitalWrite( nasg[4], LOW );//左下
   digitalWrite( nasg[5], HIGH );//左上
   digitalWrite( nasg[6], HIGH );//真ん中
   digitalWrite( nasg[7], LOW );//点

   delay(1000);   
}
