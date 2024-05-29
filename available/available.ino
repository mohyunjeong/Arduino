void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()>=1) {
    char c = Serial.read();
    Serial.println(c);
  }
}
