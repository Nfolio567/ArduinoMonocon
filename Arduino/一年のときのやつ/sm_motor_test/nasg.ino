

int sesg(int a){
  if(a == 1){
   digitalWrite(poopvcc[1], HIGH);
   digitalWrite(poop[0], LOW);//0
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], HIGH);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);   
  }
  
  else if(a == 2){
   digitalWrite(poopvcc[1], HIGH);
   digitalWrite(poop[0], HIGH);//1
   digitalWrite(poop[1], HIGH);
   digitalWrite(poop[2], HIGH);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);  
  }

 else if(a == 3){
   digitalWrite(poopvcc[1], HIGH);
   digitalWrite(poop[0], LOW);//2
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], LOW);
   digitalWrite(poop[6], HIGH);
   digitalWrite(poop[7], LOW);
  }

 else if(a == 4){
   digitalWrite(poopvcc[1], LOW);
   digitalWrite(poop[0], LOW);//2
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);
 }
}
