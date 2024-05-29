#include "DHT.h"

#define DHTPIN 13     // Digital pin connected to the DHT sensor

// #define 상수명 -> 상수 : 변하지 않는 수
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  delay(2000);

  float h = dht.readHumidity(); // 습도
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature(); // 온도
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true); // 화씨

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  // Serial.print(F("Humidity: "));
  // Serial.print(h);
  // Serial.print(F("%  Temperature: "));
  // Serial.print(t);
  // Serial.print(F("°C "));
  // Serial.print(f);
  // Serial.print(F("°F  Heat index: "));
  // Serial.print(hic);
  // Serial.print(F("°C "));
  // Serial.print(hif);
  // Serial.println(F("°F"));

  Serial.print(("Humidity: "));
  Serial.print(h);
  Serial.print(("%  Temperature: "));
  Serial.print(t);
  Serial.println(("°C "));
}
