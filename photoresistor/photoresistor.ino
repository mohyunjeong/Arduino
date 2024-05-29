void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0); // 0 ~ 1023
  Serial.println(sensorValue);

  // 조도센서 제어
  // if (sensorValue >= 500) {
  //   analogWrite(9, LOW);
  // } else {
  //   analogWrite(9, HIGH);
  // }
  
  // 가변저항 조절
  // analogWrite(9, sensorValue / 4); // 0 ~ 255

  // map(변환해야하는 센서의 값, 최소값, 최대값, 표현하고자하는 최소값, 최대값);
  int mapValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(9, mapValue);

}
