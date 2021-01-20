# Stacja pogodowa wyświetlająca temperaturę oraz wilgotność

## Opis
Elementy wejścia:
* Czujnik temperatury i wilgotności DHT11
* Czujnik temperatury DS18B20
* Przycisk

Elementy wyjścia:
* Wyświetlacz LCD

Wykorzystane bilbioteki:
* LiquidCrystal
* OneWire
* DallasTemperature
* DHT
* Adafruit_Sensor

Układ wyświetla na ekranie LCD temperaturę w Celsjuszach oraz Fahrenheitach pobieraną z czujnika DS18B20 oraz wilgotność powietrza pobieraną z czujnika DHT11.
Zastosowany przycisk pozwala wybrać czy chcemy wyświetlać temperaturę w Celsjuszach lub Fahrenheitach.
