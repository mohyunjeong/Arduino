void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String s = Serial.readString();
    Serial.println(s);

    // 문자 -> '', 문자열 -> ""
    // on -> led 켜기, off -> led 끄기

    if (s == "on") {
      digitalWrite(13, 1); 
      Serial.println("led on");
    } else if (s == "off") {
      digitalWrite(13, 0);
      Serial.println("led off");
    }
  }
}