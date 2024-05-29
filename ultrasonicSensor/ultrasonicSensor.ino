void setup() {
  pinMode(2, OUTPUT); // trig -> 초음파를 쏘는 부분(액츄) // 액츄에이터 : 전기 신호를 받는 것
  pinMode(3, INPUT); // echo -> 초음파를 받는 부분(센서) // 센서 : 신호를 감지하는 것
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, 1); // 초음파를 쏴라!
  delay(10);
  digitalWrite(2, 0); // 초음파를 쏘지 마라!

  int duration = pulseIn(3, 1); // 초음파를 받아올 때 걸리는 시간
  duration = duration / 2;

  int distance = duration / 29.1; // 거리

  Serial.print("distance : ");
  Serial.print(distance);
  Serial.println("cm");
  delay(100);
}
