int Motor(String a){
  if(a == "L"){
    tone(clk,230);
    analogWrite(motor[0],50);
    analogWrite(motor[1],0);
  }else if(a == "R"){
    digitalWrite(clk,1);
    digitalWrite(motor[0],0);
    digitalWrite(motor[1],1);
    digitalWrite(clk,0);
  }else if(a == "ST"){
    tone(clk,230);
    digitalWrite(motor[0],1);
    digitalWrite(motor[1],1);
  }
}
