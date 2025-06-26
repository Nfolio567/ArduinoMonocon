const int ckl = 11;
const int left = 6;
const int right = 7;
const int takt = 45;
const int MOTER_STEPS = 600;

#include<Stepper.h>

Stepper myStepper(MOTER_STEPS,2,3,4,5);

void setup() {
  myStepper.setSpeed(60);
  pinMode(ckl, OUTPUT);
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(takt, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop() {
    int value;

    value = digitalRead(takt);
    
  if(value == HIGH){
    tone(ckl,230);
    analogWrite(left,0);
    analogWrite(right,100);
  }else if(value == LOW){
    digitalWrite(left, HIGH);
    digitalWrite(right, HIGH);
    
    tone(ckl, 120);
    
    myStepper.step(600);
    
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
}
