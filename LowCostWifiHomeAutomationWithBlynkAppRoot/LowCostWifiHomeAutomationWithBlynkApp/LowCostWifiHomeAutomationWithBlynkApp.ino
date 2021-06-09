#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h> 

#define auth "Paste Your Auth Token here"                 // You should get Auth Token in the Blynk App.  
#define ssid "Your SSID"             //Enter Wifi Name
#define pass "Your Password"         //Enter wifi Password


void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(D1,OUTPUT); //extend these to D8 if you are using a 8 pin relay
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  digitalWrite(D1,HIGH); // Make it low if you want everything to go off
  digitalWrite(D2,HIGH); // in case of a power cut
  digitalWrite(D3,HIGH);
  digitalWrite(D4,HIGH);
  
  }

  

 
void loop()
{
  Blynk.run();
  WiFi.setAutoReconnect(true);
  WiFi.persistent(true);
}
