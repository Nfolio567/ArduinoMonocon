int sesg(int a){
  if(a == 1){
   digitalWrite(poop[0], LOW);//L
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], HIGH);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);   
  }
  
  else if(a == 2){
   digitalWrite(poop[0], HIGH);//M
   digitalWrite(poop[1], HIGH);
   digitalWrite(poop[2], HIGH);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);  
  }

 else if(a == 3){
   digitalWrite(poop[0], LOW);//r
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], LOW);
   digitalWrite(poop[6], HIGH);
   digitalWrite(poop[7], LOW);
  }

 else if(a == 4){
   digitalWrite(poop[0], LOW);//d
   digitalWrite(poop[1], HIGH);
   digitalWrite(poop[2], HIGH);
   digitalWrite(poop[3], HIGH);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], LOW);
   digitalWrite(poop[6], HIGH);
   digitalWrite(poop[7], LOW);
 }
 else if(a == 5){
   digitalWrite(poop[0], LOW);//b
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], HIGH);
   digitalWrite(poop[3], HIGH);
   digitalWrite(poop[4], HIGH);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], HIGH);
   digitalWrite(poop[7], LOW);
 }
 else if(a == 6){
   digitalWrite(poop[0], LOW);//S
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], HIGH);
   digitalWrite(poop[3], HIGH);
   digitalWrite(poop[4], LOW);
   digitalWrite(poop[5], HIGH);
   digitalWrite(poop[6], HIGH);
   digitalWrite(poop[7], LOW);
 }
 else if (a == "no"){
  digitalWrite(poopvcc[0,1], LOW);
   digitalWrite(poop[0], LOW);//No Data
   digitalWrite(poop[1], LOW);
   digitalWrite(poop[2], LOW);
   digitalWrite(poop[3], LOW);
   digitalWrite(poop[4], LOW);
   digitalWrite(poop[5], LOW);
   digitalWrite(poop[6], LOW);
   digitalWrite(poop[7], LOW);
 }
}
