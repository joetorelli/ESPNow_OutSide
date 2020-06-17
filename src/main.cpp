#include <Arduino.h>
#include "WiFi.h"
#include "NetWork.h"
//ESPNow_InSide Feather MAC Adr: CC:50:E3:BA:CA:A0
//ESPNow_Inside ESP32S MAC Adr: A4:CF:12:0B:2B:B4
//ESPNow_Outside ESP32s MAC Adr: 30:AE:A4:46:F0:E4

void setup()
{
  Serial.begin(115200);
  GetMacAdr();
}

void loop()
{
  // put your main code here, to run repeatedly:
}