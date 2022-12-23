/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#ifdef ALT_LED_BUILTIN
// For Olimexino-u32 or Adafruit 32u4 breakout board
#undef LED_BUILTIN
#define LED_BUILTIN ALT_LED_BUILTIN
#endif

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

