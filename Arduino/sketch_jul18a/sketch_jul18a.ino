const int takt = 45;
const int bzaa = 44;
const int volume = A0;

void setup() {
  pinMode(takt,0);
  pinMode(bzaa,1);
  pinMode(volume,0);
  //Serial.begin(9600);
}

void loop() {
  if(digitalRead(takt) == 1){
    int i = analogRead(volume);
    tone(bzaa,i+50);
  }else if(digitalRead(takt) == 0){
    noTone(bzaa);
  }
  //Serial.println(analogRead(volume)+digitalRead(takt));
}
