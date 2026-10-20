#include <Adafruit_TinyUSB.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5 * 1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}