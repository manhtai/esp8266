#include <ESP8266WiFi.h>

void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.setDebugOutput(true);

  WiFi.begin("ssid", "password");

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {}
