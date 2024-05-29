void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  // Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int buttonState1 = digitalRead(2);
  int buttonState2 = digitalRead(3);
  int buttonState3 = digitalRead(4);
  // Serial.println(buttonState1);
  // Serial.println(buttonState2);
  // Serial.println(buttonState3);

  // if(buttonState1 == 0) {
  //   digitalWrite(11, LOW);
  // } else {
  //   digitalWrite(11, HIGH);
  // }
  // if(buttonState2 == 0) {
  //   digitalWrite(12, LOW);
  // } else {
  //   digitalWrite(12, HIGH);
  // }
  // if(buttonState3 == 0) {
  //   digitalWrite(13, LOW);
  // } else {
  //   digitalWrite(13, HIGH);
  // }

  digitalWrite(11, buttonState1);
  digitalWrite(12, buttonState2);
  digitalWrite(13, buttonState3);
}
