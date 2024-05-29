#include <Servo.h>
Servo myservo;

void setup() {
  myservo.attach(8);

}

void loop() {
  // myservo.write(10);
  // delay(1000);
  // myservo.write(120);
  // delay(1000);

  // 각도가 0 ~ 120도까지 서서히 바뀌도록 만들어 보자!
  for (int i = 0; i <= 120; i++) {
    myservo.write(i);
    delay(15);
  }
}
