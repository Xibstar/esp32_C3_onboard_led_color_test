#include <Adafruit_NeoPixel.h>

#define PIN        8
#define NUMPIXELS  1
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 500 // Time in milliseconds between color changes

void setup() {
  Serial.begin(115200);
  pixels.begin();
}

void loop() {
  // Red
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show(); 
  delay(DELAYVAL);

  // Green
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show(); 
  delay(DELAYVAL);

  // Blue
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show(); 
  delay(DELAYVAL);

  // Yellow (red + green)
  pixels.setPixelColor(0, pixels.Color(255, 255, 0));
  pixels.show(); 
  delay(DELAYVAL);

  // Cyan (green + blue)
  pixels.setPixelColor(0, pixels.Color(0, 255, 255));
  pixels.show(); 
  delay(DELAYVAL);

  // Magenta (red + blue)
  pixels.setPixelColor(0, pixels.Color(255, 0, 255));
  pixels.show(); 
  delay(DELAYVAL);

  // White (red + green + blue)
  pixels.setPixelColor(0, pixels.Color(255, 255, 255));
  pixels.show(); 
  delay(DELAYVAL);
}
