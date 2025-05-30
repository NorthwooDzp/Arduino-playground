#include <Arduino.h>

#define LED_PIN 2
#define SHORT_SIGNAL 200
#define LONG_SIGNAL 500
// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_SIGNAL);

  digitalWrite(LED_PIN, HIGH);
  delay(LONG_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(LONG_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(LONG_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_SIGNAL);

  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, HIGH);
  delay(SHORT_SIGNAL);
  digitalWrite(LED_PIN, LOW);
  delay(LONG_SIGNAL);


}
