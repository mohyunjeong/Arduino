void setup() {
  // pinMode(18, OUTPUT);
  
  ledcSetup(0, 5000, 8); // ledcSetup(PWM 채널, 주파수, 해상도);
  ledcAttachPin(18, 0); // ledcAttachPin(GPIO 핀 번호, PWM 채널);

  ledcSetup(1, 5000, 16);
  ledcAttachPin(19, 1);
}

void loop() {
  ledcWrite(0, 127); // ledcWrite(PWM 채널, 밝기);
  delay(100);
  ledcWrite(0, 255);
  delay(100);

  ledcWrite(1, 127); // ledcWrite(PWM 채널, 밝기);
  delay(100);
  ledcWrite(1, 255);
  delay(100);
}
