void setup() {
  pinMode(18, OUTPUT);
  pinMode(26, INPUT);
}

void loop() {
  digitalWrite(18, 1);
  delay(20);
  digitalWrite(18, 0);
  delay(20);

  int btn = digitalRead(26);

  // digitalWrite(18, btn);

  // if (btn == 1) {
  //   digitalWrite(18, 1);
  // } else if (btn == 0) {
  //   digitalWrite(18, 0);
  // }
}
