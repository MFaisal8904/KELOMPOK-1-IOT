#include "DHT.h"
#include "Wire.h"
#include "LiquidCrystal_I2C.h"

#define r1 8

DHT dht(2, DHT11);

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);


void setup() {
  Serial.begin(9600);
  Serial.println("Sensor Scan!");
  pinMode(r1, OUTPUT);
  digitalWrite(r1, HIGH);

  dht.begin();

  lcd.init();
  lcd.backlight();
}

void loop() {
  // Kalibrasi sensor
  delay(2000);

  // Membaca kelembaban
  float h = dht.readHumidity();
  // Membaca temperatur
  float t = dht.readTemperature();


  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  lcd.setCursor(0, 0);
  lcd.print("Hum: ");
  lcd.print(h,1);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("Tmp: ");
  lcd.print(t,1);
  lcd.print("C");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");

  Serial.println(" ");
  if(t > 32){
    digitalWrite(r1, LOW);
    delay(5000);
  }else{
    digitalWrite(r1, HIGH);
  }
}