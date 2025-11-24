#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setCursor(10, 30);
  tft.setTextSize(3);
  tft.println("ESP32 + ST7789");

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.setCursor(10, 80);
  tft.setTextSize(2);
  tft.println("Display OK!");
}

void loop() {}
