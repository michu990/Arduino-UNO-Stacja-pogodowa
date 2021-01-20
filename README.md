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
Zastosowany przycisk pozwala wybrać czy chcemy wyświetlać temperaturę w Celsjuszach lub Fahrenheitach sygnalizując przy tym odpowiednią diodą LED (Zielona dla C, czerwona dla F).

![photoC](media/photoC.JPG)

![photoF](media/photoF.JPG)

Działanie guzika zobrazowane zostało na filmie. [![https://i9.ytimg.com/vi/bysFPIYge0k/mq1.jpg?sqp=CJS0oIAG&rs=AOn4CLDW9NwJY38owhce1O4C59ISFy6UyQ](https://i9.ytimg.com/vi/bysFPIYge0k/mq1.jpg?sqp=CJS0oIAG&rs=AOn4CLDW9NwJY38owhce1O4C59ISFy6UyQ)](https://youtu.be/bysFPIYge0k)
