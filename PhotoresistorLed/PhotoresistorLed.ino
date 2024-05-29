void setup() {
  Serial.begin(115200);
  pinMode(18, OUTPUT);
}

void loop() {
  int value = analogRead(2);
  Serial.println(value);
  delay(1000);

  if (value <= 3000) {
    digitalWrite(18, 1);
  } else {
    digitalWrite(18, 0);
  }
}
