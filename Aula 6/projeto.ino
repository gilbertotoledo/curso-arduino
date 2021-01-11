#include <DHT.h>

DHT dht(A1,DHT11);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  float u = dht.readHumidity();
  float t = dht.readTemperature();
  
  Serial.print("Umidade: ");
  Serial.print(u);
  Serial.print(" | Temperatura: ");
  Serial.println(t);
  
  delay(2000);
}

