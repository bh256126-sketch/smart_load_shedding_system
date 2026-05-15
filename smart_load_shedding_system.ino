#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME "Smart Load Shedding"
#define BLYNK_AUTH_TOKEN ""

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

//PINS
#define SUPPLY_POT 34
#define BACKUP_POT 35
#define TOU_SWITCH 14

#define LOAD1 2
#define LOAD2 4
#define LOAD3 16
#define LOAD4 17
#define LOAD5 5

//VARIABLES
int supplyLevel = 0;
int backupLevel = 0;
bool peakHour = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
