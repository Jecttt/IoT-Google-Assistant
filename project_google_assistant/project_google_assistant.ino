#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Gw652H8bjfC_xc3DYu6v24_vtwMZ11S";
char ssid[] = "SA70";
char pass[] = "ditya30";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
