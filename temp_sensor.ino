#include "DHT.h"
#define DHTPIN 15    // GPIO where the data pin is connected
#define DHTTYPE DHT22   // DHT 22 (AM2302)
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(115200);
  dht.begin();
}
void loop() {
  float temp = dht.readTemperature(); // Celsius
  if (isnan(temp)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");
  delay(2000); // Wait 2 seconds between readings
}
