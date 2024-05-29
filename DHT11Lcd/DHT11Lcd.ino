#include "DHT.h"
#include <LiquidCrystal.h>

#define DHTPIN 27
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

const int rs = 14, en = 12, d4 = 13, d5 = 5, d6 = 23, d7 = 19;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte heart[8] {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

byte c[8] {
  B00110,
  B00110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte hea[8] {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01010,
  B11111,
  B11111,
};

byte rt[8] {
  B11111,
  B01110,
  B00100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

void setup() {
  dht.begin();
  lcd.begin(16, 2);
  lcd.createChar(0, heart);
  lcd.createChar(1, c);
  lcd.createChar(2, hea);
  lcd.createChar(3, rt);
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print("H : ");
  lcd.print(h);
  lcd.print("%");
  lcd.write(byte(0));
  lcd.setCursor(13, 0);
  lcd.write(byte(2));
  lcd.setCursor(0, 1);
  lcd.print("T : ");
  lcd.print(t);
  lcd.write(byte(1));
  lcd.print("C");
  lcd.write(byte(0));
  lcd.setCursor(13, 01;
  lcd.write(byte(3));
}