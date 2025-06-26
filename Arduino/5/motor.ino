int Motor(String a){
  if(a == "L"){
    tone(clk,230);
    analogWrite(motor[0],50);
    analogWrite(motor[1],0);
  }else if(a == "R"){
    analogWrite(clk,1);
    analogWrite(motor[0],0);
    analogWrite(motor[1],1);
    analogWrite(clk,0);
  }else if(a == "ST"){
    tone(clk,230);
    analogWrite(motor[0],1);
    analogWrite(motor[1],1);
  }
}
