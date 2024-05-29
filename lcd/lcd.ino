#include <LiquidCrystal.h>

// vss gnd연결 (-)
// vdd 전원연결 (+)
// vo 가변저항을 색상 대비조정 (명암)
// RS 명령/데이터 레지스터 선택
// RW 읽기/쓰기 선택
// E LCD활성화신호
// DB0~DB7 데이터비트 0~7 (8비트에서는 모든 핀 사용) 

const int rs = 14, en = 12, d4 = 13, d5 = 5, d6 = 23, d7 = 19;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  // lcd.print("hello, world!");
  lcd.print("mohyunjeong");
}

String name ="mohyunjeong";

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  // print the number of seconds since reset:
  // lcd.print(millis() / 1000);
  for (int i = 0; i <= 10; i++) {
    lcd.setCursor(0, 1);
    lcd.print(name[i]);
    delay(1000);
  }
}

