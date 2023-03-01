#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
 
char auth[] = "PeDBgkQKlXJdWKxRZ4dW1HT41lLHbKWJ";
char ssid[] = "GibranTA";
char pass[] = "kangkung123";
 
#define DHTPIN 14
int fanPin = 4;
 

#define DHTTYPE DHT22

 
DHT dht(DHTPIN  , DHTTYPE);
BlynkTimer timer;
void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Blynk.virtualWrite(V5, t);
  Blynk.virtualWrite(V6, h);
}
 
void setup()
{
  Serial.begin(9600);
 
  Blynk.begin(auth, ssid, pass);
  pinMode(fanPin,OUTPUT);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
}
 
void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Blynk.run();
  timer.run();
  if (t >= 30){
  digitalWrite(fanPin,0);
  
 }else{
  digitalWrite(fanPin,1);
 }
delay(1800000);
}
