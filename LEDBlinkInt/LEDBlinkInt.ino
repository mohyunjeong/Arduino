void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    int num = Serial.parseInt();

    if (num == 1) {
      digitalWrite(13, 1); 
      Serial.println("turn on");
    } else if (num == 0) {
      digitalWrite(13, 0);
      Serial.println("turn off");
    }
  }
}