// 버튼 누르면 LED가 차례로 켜지고 서브모터 90도로 돌리기
#include <Servo.h>
Servo myservo;

void setup() {
  myservo.attach(8);
  pinMode(12, INPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  myservo.write(0);
  int btn = digitalRead(12);
  
  if (btn == 1) {
    digitalWrite(4, HIGH);
    delay(500);
    digitalWrite(4, LOW);
    // delay(1000);
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    // delay(1000);
    myservo.write(90);
    delay(500);
  }
}
