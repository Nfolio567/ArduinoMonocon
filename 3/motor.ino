void Motor(String a, const unsigned long ms){
  unsigned long prevMillis = millis();
  unsigned long nowMillis = 0;
  while(true) {
    nowMillis = millis();
    if(a == "L"){
      digitalWrite(clk,1);
      analogWrite(motor[0],50);
      analogWrite(motor[1],0);
      digitalWrite(clk,0);
    }
    if(a == "R"){
      digitalWrite(clk,1);
      analogWrite(motor[0],0);
      analogWrite(motor[1],50);
      digitalWrite(clk,0);
    }
    motorStop();
    if (nowMillis - prevMillis >= ms) {
      break;
    }
  }
}

void motorStop() {
  digitalWrite(clk,1);
  digitalWrite(motor[0],1);
  digitalWrite(motor[1],1);
  digitalWrite(clk, 0);
}
