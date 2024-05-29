void setup() {
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);

  Serial.begin(9600);
}

int cnt = 0;
bool state = true;

void loop() {
  // 버튼 눌러서 밝기 조절
  int btnState = digitalRead(3);
  // Serial.println(btnState)

  if (btnState == 1) {
    if (state == true) {
      cnt++;
      state = false;
    }
  } else if (btnState == 0) {
    state = true;
  }

  if (cnt == 1) {
    analogWrite(11, 50);
  } else if (cnt == 2) {
    analogWrite(11, 255);
  } else if (cnt == 3) {
    analogWrite(11, 0);
    cnt = 0;
  }
}
