void setup() {
  pinMode(3, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // // 버튼 밝기 자동
  // analogWrite(11, 0);
  // delay(1000);
  // analogWrite(11, 100);
  // delay(1000);
  // analogWrite(11, 255);
  // delay(1000);

  // // 점점 밝게
  // for(int i = 0; i <= 255; i++) {
  //   analogWrite(11, i);
  //   delay(10);
  // }
  // // 점점 어둡게
  // for(int i = 0; i <= 255; i++) {
  //   analogWrite(11, 255 - i);
  //   delay(10);
  // }

  // 버튼으로 밝기 조절
  int buttonState1 = digitalRead(3);
  int buttonState2 = digitalRead(5);
  int buttonState3 = digitalRead(6);

  if (buttonState1 == 1) {
    analogWrite(11, 0);
  } else if (buttonState2 == 1) {
    analogWrite(11, 100);
  } else if (buttonState3 == 1) {
    analogWrite(11, 255);
  }

// // 버튼으로 밝기 조절(선생님 ver)
// void setup() {
//   // Button 3개, LED 1개
//   pinMode(5, INPUT);
//   pinMode(6, INPUT);
//   pinMode(7, INPUT);
//   pinMode(10, OUTPUT);

//   Serial.begin(9600);
// }

// void loop() {
//   int btnState1 = digitalRead(5);
//   Serial.println(btnState1);

//   int btnState2 = digitalRead(6);
//   Serial.println(btnState2);

//   int btnState3 = digitalRead(7);
//   Serial.println(btnState3);

//   if(btnState1 == 1){
//     analogWrite(10, 100);
//   }

//   if(btnState2 == 1){
//     analogWrite(10, 255);
//   }

//   if(btnState3 == 1){
//     analogWrite(10, 0);
//   }

// }
  
}
