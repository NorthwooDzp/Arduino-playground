#include <Arduino.h>
#include <WebServer.h>
#include <WiFi.h>

#define LED_PIN 2
#define SHORT_SIGNAL 200
#define LONG_SIGNAL 500
WebServer server(80);
const char *ssid = "Xiaomi_76FA";
const char *password = "gacty4df5";
// put function declarations here:

void sosBlink();

void setup()
{
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected");
  Serial.println(WiFi.localIP());
}



void loop()
{
  // put your main code here, to run repeatedly:
  sosBlink();
}

void sosBlink()
{
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