const int bzaa = 44;

void setup() {
  pinMode(bzaa,1);
}

void loop() {
  tone(bzaa,500);
  delay(1000);
  noTone(bzaa);
  delay(1000);
}
