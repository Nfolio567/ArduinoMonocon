int Motor(String a){
  if(a == "L"){
    digitalWrite(clk,1);
    digitalWrite(motor[0],1);
    digitalWrite(motor[1],0);
    digitalWrite(clk,0);
  }else if(a == "R"){
    digitalWrite(clk,1);
    digitalWrite(motor[0],0);
    digitalWrite(motor[1],1);
    digitalWrite(clk,0);
  }else if(a == "ST"){
    digitalWrite(clk,1);
    digitalWrite(motor[0],1);
    digitalWrite(motor[1],1);
    digitalWrite(clk,0);
  }
}