const int nasg[]{2,3,4,5,6,7,8,9,10};
const int nasgvcc[]{42,43};

void setup() {
  for(int i=0;i<9;i++){pinMode(nasg[i],1);}
  for(int i=0;i<2;i++){pinMode(nasgvcc[i],1);}
}


void loop() {
  digitalWrite(nasgvcc[0],0);
      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 1);//0
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);   
    
      delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//1
      digitalWrite(nasg[1], 1);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);  

    delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//2
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 1);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);
    
      delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//3
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 1);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);
    
      delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//4
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 1);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);
    
delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//5
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 1);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);

    delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//6
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 1);
      digitalWrite(nasg[7], 0);

    delay(1000);


      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);//7
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 1);
    
delay(1000);

      digitalWrite(nasgvcc[1], 1);
      digitalWrite(nasg[0], 0);
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);
      digitalWrite(nasg[8], 1);
    
/*delay(1000);

      digitalWrite(nasgvcc[1], 0);
      digitalWrite(nasg[0], 0);//9
      digitalWrite(nasg[1], 0);
      digitalWrite(nasg[2], 0);
      digitalWrite(nasg[3], 0);
      digitalWrite(nasg[4], 0);
      digitalWrite(nasg[5], 0);
      digitalWrite(nasg[6], 0);
      digitalWrite(nasg[7], 0);

    delay(1000);*/
}
