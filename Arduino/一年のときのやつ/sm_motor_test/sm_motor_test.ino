const int poop[] = {2,3,4,5,6,7,8,9};
const int poopvcc[] = {42,43};
const int ck_pin1 = 11;     //DフリップフロップCK(74HC574AP);
const int motor[] = {6,7};
 
void setup(){

//出力設定
    for(int i=0;i<8;i++)pinMode(poop[i],1);
    for(int i=0;i<2;i++)pinMode(poopvcc[i],1);
    pinMode(ck_pin1,OUTPUT) ; //DフリップフロップCK設定
}


void loop(){
//ステッピングmotor 左回転
digitalWrite(motor[0,1],HIGH) ; //dcモータは誤作動しないように、dc_pin信号を両方HIGHにして強制的に止めます。
      
int wait_time = 5;      //wait_time(待ち時間)は15ms～3ms推奨です。数が小さくなると速度が速くなります。3だと、たまにうまく回りません。


//smピンの信号は、FETの関係でプログラムとは逆転した信号がspモータに行きます。

        digitalWrite(ck_pin1,HIGH) ; //信号はDフリップフロップを通るので、疑似的にクロックを作り出す必要があります。
        digitalWrite(poop[0],1) ;
        digitalWrite(poop[2],0) ;
        digitalWrite(poop[1],1) ;
        digitalWrite(poop[3],0) ;
        delay(wait_time);
        digitalWrite(ck_pin1,LOW) ;//クロックをLOWにすることで上の信号記憶を書き換えます。
        delay(wait_time);
        sesg(3);
        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);

//以下これを繰り返します↓
        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);
        digitalWrite(ck_pin1,HIGH) ;
        digitalWrite(poop[0],0) ;
        digitalWrite(poop[2],1) ;
        digitalWrite(poop[1],1) ;
        digitalWrite(poop[3],0) ;
        delay(wait_time);
        digitalWrite(ck_pin1,LOW) ;
        delay(wait_time);
        sesg(3);
        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);
        

        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH); 
        digitalWrite(ck_pin1,HIGH) ;
        digitalWrite(poop[0],0) ;
        digitalWrite(poop[2],1) ;
        digitalWrite(poop[1],0) ;
        digitalWrite(poop[3],1) ;
        delay(wait_time);
        digitalWrite(ck_pin1,LOW) ;
        delay(wait_time);
        sesg(3);
        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);

        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);
        digitalWrite(ck_pin1,HIGH) ;
        digitalWrite(poop[0],1) ;
        digitalWrite(poop[2],0) ;
        digitalWrite(poop[1],0) ;
        digitalWrite(poop[3],1) ;
        delay(wait_time);
        digitalWrite(ck_pin1,LOW) ;
        delay(wait_time);
        sesg(3);
        digitalWrite(poopvcc[0,1],LOW);
        digitalWrite(motor[0,1],HIGH);
        
}
