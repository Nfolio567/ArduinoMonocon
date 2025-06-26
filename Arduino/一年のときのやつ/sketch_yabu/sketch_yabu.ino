const int nasg[]={2,3,4,5,6,7,8,9};
const int com[]={42,43};//common L,R

void setup() {
  int i;
  for(i=0;i<8;i++)  pinMode(nasg[i], 1);
  for(i=0;i<2;i++)  pinMode(com[i], 1);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  static int num=1;
  //Serial.println(num);
  seg(num);
  if(num<9)  num++;
  delay(500);
}

int seg(int a){
  if(a == 0){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//0
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], HIGH);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], LOW);
   digitalWrite(nasg[7], LOW);   
  }
  
  else if(a == 1){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], LOW);//1
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], LOW);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], LOW);
   digitalWrite(nasg[6], LOW);
   digitalWrite(nasg[7], LOW);  
  }

 else if(a == 2){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//2
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], LOW);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], HIGH);
   digitalWrite(nasg[5], LOW);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
  }

 else if(a == 3){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//3
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], LOW);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }

 else if(a == 4){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], LOW);//4
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], LOW);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }

 else if(a == 5){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//5
   digitalWrite(nasg[1], LOW);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }
 else if(a == 6){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//6
   digitalWrite(nasg[1], LOW);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], HIGH);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }

 else if(a == 7){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//7
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], LOW);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], LOW);
   digitalWrite(nasg[7], LOW);
 }

 else if(a == 8){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], HIGH);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }

 else if(a == 9){
   digitalWrite(com[1], HIGH);
   digitalWrite(nasg[0], HIGH);//9
   digitalWrite(nasg[1], HIGH);
   digitalWrite(nasg[2], HIGH);
   digitalWrite(nasg[3], HIGH);
   digitalWrite(nasg[4], LOW);
   digitalWrite(nasg[5], HIGH);
   digitalWrite(nasg[6], HIGH);
   digitalWrite(nasg[7], LOW);
 }
}
