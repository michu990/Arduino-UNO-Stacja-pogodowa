#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHT_PIN A0                                //PIN cyfrowy podlaczony do DHT11
#define DHTTYPE DHT11                             // Zdefiniowany typ DHT11
const int SENSOR_PIN = A1;                        // PIN cyfrowy podlaczony do DS18B20
DHT dht = DHT(DHT_PIN ,DHTTYPE);                  
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);            // Podlaczone PINY wyswietlacza LCD
OneWire oneWire(SENSOR_PIN);                      // Uruchamia biblioteke oneWire
DallasTemperature sensors(&oneWire);              // Przekazuje dane z biblioteki oneWire do bilbioteki DallasTemperature

void setup()
{
  lcd.begin(16, 2);                               
  lcd.print("TEMP        WILG");                  // Wyswietla napis
  Serial.begin(9600);                           
  sensors.begin();                                // Uruchamia sensor DS18B20
  dht.begin();                                    // Uruchamia sensor DHT11
}

void loop()
{
 float tempC;                                     // Temperatura w C
 float tempF;                                     // Temperature w F
 float humidity = dht.readHumidity(DHT_PIN);      // Wilgotnosc
 
   if (isnan(humidity))                           // Sprawdza blad odczytu z czujnika DHT11
   {
   Serial.println(F("Brak odczytu z DHT!"));
   return;
   }
  
  sensors.requestTemperatures();             // Wysyła komende aby odczytac wartosc temperatury
  tempC = sensors.getTempCByIndex(0);        // Czyta wartosc temperatury w C
  tempF = tempC * 9 / 5 + 32;                // Konwertuje wartosc temperatury z C na F

  Serial.print(" Temperatura: ");            // Wyswietla napis
  Serial.print(tempC);                       // Wypisuje temperature w C
  Serial.print("°C");                        // Wyswietla napis
  Serial.print("  -  ");                     // Separator
  Serial.print(tempF);                       // Wypisuje temperature w F
  Serial.println("°F");                      // Wyswietla napis
  Serial.print("Wilgotnosc: ");              // Wyswietla napis
  Serial.print(humidity);                    // Wypisuje wilgotnosc w %
  Serial.print("% |");                       // Wyswietla napis
  
  lcd.setCursor(1,3);                        
  lcd.print(round(tempC));                   // Wypisuje temperature w C
  lcd.print("C ");                           // Wyswietla napis
  lcd.print(round(tempF));                   // Wypisuje temperature w F
  lcd.print("F  ");                          // Wyswietla napis
  lcd.print(round(humidity));                // Wypisuje wilgotnosc w %
  lcd.print("%   ");                         // Wyswietla napis

  delay(1000);                               // Opoznienie
}
