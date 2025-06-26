int Motor(String a){
  if(a == "L"){
    tone(clk, 337);
    analogWrite(motor[0],50);
    analogWrite(motor[1],0);
  }else if(a == "R"){
    tone(clk, 337);
    analogWrite(motor[0],0);
    analogWrite(motor[1],50);
  }else if(a == "ST"){
    tone(clk,337);
    digitalWrite(motor[0],1);
    digitalWrite(motor[1],1);
  }
}
