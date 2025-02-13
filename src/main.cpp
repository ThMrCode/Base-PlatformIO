#include <Arduino.h>


void setup() {
  pinMode(35, OUTPUT);
}

void loop() {
  digitalWrite(35, HIGH);
  delay(100);
  digitalWrite(35, LOW);
  delay(100);
}
