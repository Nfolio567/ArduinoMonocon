const int photoic = 46;

void setup() {
  pinMode(photoic,0);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(photoic));
}
