void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // 가변저항 3개로 RGB LED 제어
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);

  int mapValue1 = map(sensorValue1, 0, 1023, 0, 255);
  int mapValue2 = map(sensorValue2, 0, 1023, 0, 255);
  int mapValue3 = map(sensorValue3, 0, 1023, 0, 255);

  analogWrite(9, mapValue1);
  analogWrite(10, mapValue2);
  analogWrite(11, mapValue3);
}
