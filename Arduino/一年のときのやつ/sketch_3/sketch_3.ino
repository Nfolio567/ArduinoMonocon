#include <Stepper.h>

const int MOTOR_STEPS = 600;
const int ckl = 11;

Stepper myStepper(MOTOR_STEPS, 2, 3, 4, 5);

void setup() {
  myStepper.setSpeed(60);
  pinMode(ckl, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
int i = 0;
i++;

 tone(ckl,120);

  myStepper.step(600);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(1);

   tone(ckl,120);

  myStepper.step(-300);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  delay(1);
  Serial.println(i);

}
