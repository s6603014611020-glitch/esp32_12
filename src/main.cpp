#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

int count = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Hello from PlatformIO!");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.printf("LED ON (count = %d)\n", ++count);
  delay(250);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(250);
}