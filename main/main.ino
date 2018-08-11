#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200);

  setup_wifi();

  Serial.println("Setup done");
}

void loop() {
  Serial.println("scan start");

  scan_wifi();

  // Wait a bit before scanning again
  delay(5000);
}
