// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"
SYSTEM_MODE(AUTOMATIC);

//int led = D0; // This is where your LED is plugged in. The other side goes to a resistor connected to GND.
int boardLed = D7; // This is the LED that is already on your device.
int brewCoffee(String command);
//strip0
const int FADE_LENGTH_0 = 5;
const int FADE_SCALE_0  = 128;
const int RING_SIZE_0   = 10;
//strip1
const int FADE_LENGTH_1 = 5;
const int FADE_SCALE_1  = 128;
const int RING_SIZE_1   = 10;
//strip2
const int FADE_LENGTH_2 = 5;
const int FADE_SCALE_2  = 128;
const int RING_SIZE_2   = 10;

const int SPEED = 80; // speed of leds

int stateController[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
String cmd[] = {"green1", "pulse1", "white1", "green2", "pulse2", "white2", "green3", "pulse3", "white3", "green4", "pulse4", "white4", "green5", "pulse5", "white5", "green6", "pulse6", "white6", "green7", "pulse7", "white7", "green8", "pulse8", "white8", "off1", "off2", "off3", "off4", "off5", "off6", "off7", "off8"};

// const int RED =
// const int GREEN =
// const int BLUE =



int pinA0 = 000 ;//Seat Number
int pinA1 = 000 ;//Seat Number
int pinA2 = 000 ;//Seat Number
int pinA3 = 000 ;//Seat Number
int pinA4 = 000 ;//Seat Number
int pinA5 = 000 ;//Seat Number
int pinA6 = 000 ;//Seat Number
int pinA7 = 000 ;//Seat Number



int LastStateStrip0 = 0;
int LastStateStrip1 = 0;
int LastStateStrip2 = 0;
int LastStateStrip3 = 0;
int LastStateStrip4 = 0;
int LastStateStrip5 = 0;
int LastStateStrip6 = 0;
int LastStateStrip7 = 0;

Adafruit_NeoPixel strip0 = Adafruit_NeoPixel(RING_SIZE_0 , D0, WS2812B); // Large
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(RING_SIZE_0 , D1, WS2812B); // Medium
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(RING_SIZE_0 , D2, WS2812B); // Small
Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(RING_SIZE_0 , A3, WS2812B); // Large
Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(RING_SIZE_0 , D4, WS2812B); // Medium
Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(RING_SIZE_0 , D5, WS2812B); // Small
Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(RING_SIZE_0 , D6, WS2812B); // Large
Adafruit_NeoPixel strip7 = Adafruit_NeoPixel(RING_SIZE_0 , D7, WS2812B); // Medium
Adafruit_NeoPixel strip8 = Adafruit_NeoPixel(RING_SIZE_0 , A0, WS2812B); // Small
Adafruit_NeoPixel strip9 = Adafruit_NeoPixel(RING_SIZE_0 , A1, WS2812B); // Large
Adafruit_NeoPixel strip10 = Adafruit_NeoPixel(RING_SIZE_0 , A2, WS2812B); // Medium
Adafruit_NeoPixel strip11 = Adafruit_NeoPixel(RING_SIZE_0 , D3, WS2812B); // Small
Adafruit_NeoPixel strip12 = Adafruit_NeoPixel(RING_SIZE_0 , A4, WS2812B); // Large
Adafruit_NeoPixel strip13 = Adafruit_NeoPixel(RING_SIZE_0 , A5, WS2812B);

void setup() {
  //pinMode(led,OUTPUT);
  pinMode(boardLed, OUTPUT);

  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  Particle.function("TableNote", TableNotification);

  Serial.begin(9600);

  strip0.begin();
  strip0.show();
  strip0.setBrightness(100);

  strip1.begin();
  strip1.show();
  strip1.setBrightness(100);

  strip2.begin();
  strip2.show();
  strip2.setBrightness(100);

  strip3.begin();
  strip3.show();
  strip3.setBrightness(100);

  strip4.begin();
  strip4.show();
  strip4.setBrightness(100);

  strip5.begin();
  strip5.show();
  strip5.setBrightness(100);

  strip6.begin();
  strip6.show();
  strip6.setBrightness(100);

  strip7.begin();
  strip7.show();
  strip7.setBrightness(100);

  strip8.begin();
  strip8.show();
  strip8.setBrightness(100);

  strip9.begin();
  strip9.show();
  strip9.setBrightness(100);

  strip10.begin();
  strip10.show();
  strip10.setBrightness(100);

  strip11.begin();
  strip11.show();
  strip11.setBrightness(100);

  strip12.begin();
  strip12.show();
  strip12.setBrightness(100);


  strip13.begin();
  strip13.show();
  strip13.setBrightness(100);


}

// Now for the loop.
void loop() {
}

// Custom Functions //
int funcName(String extra) {
  return 0;
}

int TableNotification(String command) {
  int i = -1;
  for (i = 0; i <= sizeof(cmd)/sizeof(cmd[0]); i++) // notice the less than or equal to comparison
  {
    if (command.equals(cmd[i])) // compare String myCommand and Array Element
    break;
  }

  switch (i) {


// 181 ****************************************************************************************************

    case 0:
      if (stateController[0] == 1) {
        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 0, 255, 0); strip0.setBrightness(20); strip0.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[0] != 1){
        stateController[0] = 1;

        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
        return 0;
      }

      break;

    case 1:
      for (int i = 0; i < strip0.numPixels(); i++) {
        strip0.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }

      if (stateController[0] == 1) {
        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 0, 255, 0); strip0.setBrightness(20); strip0.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[0] == 2){
        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 255, 255, 255); strip0.setBrightness(20); strip0.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[0] == 0) {
        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 0, 0, 0); strip0.setBrightness(0); strip0.show(); delay(1);
        }
        return 0;
      }

      break;

    case 2:
      if (stateController[0] == 2) {
        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 255, 255, 255); strip0.setBrightness(20); strip0.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[0] != 2){
        stateController[0] = 2;

        for (int i = 0; i < strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip0.setBrightness(i); strip0.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip0.setBrightness(i); strip0.show(); delay(30); }
        return 0;
      }

      break;



// 182 ****************************************************************************************************

    case 3:
      if (stateController[1] == 1) {
        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 0, 255, 0); strip1.setBrightness(20); strip1.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[1] != 1){
        stateController[1] = 1;

        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
        return 0;
      }

      break;

    case 4:
      for (int i = 0; i < strip1.numPixels(); i++) {
        strip1.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }

      if (stateController[1] == 1) {
        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 0, 255, 0); strip1.setBrightness(20); strip1.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[1] == 2){
        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 255, 255, 255); strip1.setBrightness(20); strip1.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[1] == 0) {
        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 0, 0, 0); strip1.setBrightness(0); strip1.show(); delay(1);
        }
        return 0;
      }

      break;

    case 5:
      if (stateController[1] == 2) {
        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 255, 255, 255); strip1.setBrightness(20); strip1.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[1] != 2){
        stateController[1] = 2;

        for (int i = 0; i < strip1.numPixels(); i++) {
          strip1.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip1.setBrightness(i); strip1.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip1.setBrightness(i); strip1.show(); delay(30); }
        return 0;
      }

      break;



// 183 ****************************************************************************************************



    case 6:
      if (stateController[2] == 1) {
        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 0, 255, 0); strip13.setBrightness(20); strip13.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[2] != 1){
        stateController[2] = 1;

        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
        return 0;
      }

      break;

    case 7:
      for (int i = 0; i < strip13.numPixels(); i++) {
        strip13.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }

      if (stateController[2] == 1) {
        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 0, 255, 0); strip13.setBrightness(20); strip13.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[2] == 2){
        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 255, 255, 255); strip13.setBrightness(20); strip13.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[2] == 0) {
        for (int i = 0; i < strip2.numPixels(); i++) {
          strip2.setPixelColor(i, 0, 0, 0); strip2.setBrightness(0); strip2.show(); delay(1);
        }
        return 0;
      }

      break;

    case 8:
      if (stateController[2] == 2) {
        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 255, 255, 255); strip13.setBrightness(20); strip13.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[2] != 2){
        stateController[2] = 2;

        for (int i = 0; i < strip13.numPixels(); i++) {
          strip13.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip13.setBrightness(i); strip13.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip13.setBrightness(i); strip13.show(); delay(30); }
        return 0;
      }

      break;




// 184 ****************************************************************************************************



    case 9:
      if (stateController[3] == 1) {
        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 0, 255, 0); strip12.setBrightness(20); strip12.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[3] != 1){
        stateController[3] = 1;

        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
        return 0;
      }

      break;

    case 10:
      for (int i = 0; i < strip12.numPixels(); i++) {
        strip12.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }

      if (stateController[3] == 1) {
        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 0, 255, 0); strip12.setBrightness(20); strip12.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[3] == 2){
        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 255, 255, 255); strip12.setBrightness(20); strip12.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[3] == 0) {
        for (int i = 0; i < strip3.numPixels(); i++) {
          strip3.setPixelColor(i, 0, 0, 0); strip3.setBrightness(0); strip3.show(); delay(1);
        }
        return 0;
      }

      break;

    case 11:
      if (stateController[3] == 2) {
        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 255, 255, 255); strip12.setBrightness(20); strip12.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[3] != 2){
        stateController[3] = 2;

        for (int i = 0; i < strip12.numPixels(); i++) {
          strip12.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip12.setBrightness(i); strip12.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip12.setBrightness(i); strip12.show(); delay(30); }
        return 0;
      }

      break;



// 185 ****************************************************************************************************



    case 12:
      if (stateController[4] == 1) {
        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 0, 255, 0); strip4.setBrightness(20); strip4.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[4] != 1){
        stateController[4] = 1;

        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
        return 0;
      }

      break;

    case 13:
      for (int i = 0; i < strip4.numPixels(); i++) {
        strip4.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }

      if (stateController[4] == 1) {
        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 0, 255, 0); strip4.setBrightness(20); strip4.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[4] == 2){
        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 255, 255, 255); strip4.setBrightness(20); strip4.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[4] == 0) {
        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 0, 0, 0); strip4.setBrightness(0); strip4.show(); delay(1);
        }
        return 0;
      }

      break;

    case 14:
      if (stateController[4] == 2) {
        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 255, 255, 255); strip4.setBrightness(20); strip4.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[4] != 2){
        stateController[4] = 2;

        for (int i = 0; i < strip4.numPixels(); i++) {
          strip4.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip4.setBrightness(i); strip4.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip4.setBrightness(i); strip4.show(); delay(30); }
        return 0;
      }

      break;



// 186 ****************************************************************************************************



    case 15:
      if (stateController[5] == 1){
        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 0, 255, 0); strip5.setBrightness(20); strip5.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[5] != 1){
        stateController[5] = 1;

        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
        return 0;
      }

      break;

    case 16:
      for (int i = 0; i < strip5.numPixels(); i++) {
        strip5.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }

      if (stateController[5] == 1) {
        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 0, 255, 0); strip5.setBrightness(20); strip5.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[5] == 2){
        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 255, 255, 255); strip5.setBrightness(20); strip5.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[5] == 0) {
        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 0, 0, 0); strip5.setBrightness(0); strip5.show(); delay(1);
        }
        return 0;
      }

      break;

    case 17:
      if (stateController[5] == 2) {
        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 255, 255, 255); strip5.setBrightness(20); strip5.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[5] != 2){
        stateController[5] = 2;

        for (int i = 0; i < strip5.numPixels(); i++) {
          strip5.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip5.setBrightness(i); strip5.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip5.setBrightness(i); strip5.show(); delay(30); }
        return 0;
      }

      break;



// 187 ****************************************************************************************************



    case 18:
      if (stateController[6] == 1){
        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 0, 255, 0); strip6.setBrightness(20); strip6.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[6] != 1){
        stateController[6] = 1;

        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
        return 0;
      }

      break;

    case 19:
      for (int i = 0; i < strip6.numPixels(); i++) {
        strip6.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }

      if (stateController[6] == 1) {
        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 0, 255, 0); strip6.setBrightness(20); strip6.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[6] == 2){
        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 255, 255, 255); strip6.setBrightness(20); strip6.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[6] == 0) {
        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 0, 0, 0); strip6.setBrightness(0); strip6.show(); delay(1);
        }
        return 0;
      }

      break;

    case 20:
      if (stateController[6] == 2) {
        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 255, 255, 255); strip6.setBrightness(20); strip6.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[6] != 2){
        stateController[6] = 2;

        for (int i = 0; i < strip6.numPixels(); i++) {
          strip6.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip6.setBrightness(i); strip6.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip6.setBrightness(i); strip6.show(); delay(30); }
        return 0;
      }

      break;



// 188 ****************************************************************************************************



    case 21:
      if (stateController[7] == 1){
        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 0, 255, 0); strip7.setBrightness(20); strip7.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[7] != 1){
        stateController[7] = 1;

        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 0, 255, 0);
        }

        for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
        return 0;
      }

      break;

    case 22:
      for (int i = 0; i < strip7.numPixels(); i++) {
        strip7.setPixelColor(i, 250, 0, 0);
      }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
      for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }

      if (stateController[7] == 1) {
        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 0, 255, 0); strip7.setBrightness(20); strip7.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[7] == 2){
        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 255, 255, 255); strip7.setBrightness(20); strip7.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[7] == 0) {
        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 0, 0, 0); strip7.setBrightness(0); strip7.show(); delay(1);
        }
        return 0;
      }

      break;

    case 23:
      if (stateController[7] == 2) {
        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 255, 255, 255); strip7.setBrightness(20); strip7.show(); delay(1);
        }
        return 0;
      }

      else if (stateController[7] != 2){
        stateController[7] = 2;

        for (int i = 0; i < strip7.numPixels(); i++) {
          strip7.setPixelColor(i, 255, 255, 255);
        }

        for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
        for (int i = 20; i > 10; i--) { strip7.setBrightness(i); strip7.show(); delay(30); }
        for (int i = 10; i < 20; i++) { strip7.setBrightness(i); strip7.show(); delay(30); }
        return 0;
      }

      break;



// off 181
    case 24:
      stateController[0] = 0;
      for (int i = 0; i < strip0.numPixels(); i++) {
        strip0.setPixelColor(i, 0, 0, 0); strip0.setBrightness(0); strip0.show(); delay(1);
      }
      break;

// off 182
    case 25:
      stateController[1] = 0;
      for (int i = 0; i < strip1.numPixels(); i++) {
        strip1.setPixelColor(i, 0, 0, 0); strip1.setBrightness(0); strip1.show(); delay(1);
      }
      break;

// off 183
    case 26:
      stateController[2] = 0;
      for (int i = 0; i < strip2.numPixels(); i++) {
        strip2.setPixelColor(i, 0, 0, 0); strip2.setBrightness(0); strip2.show(); delay(1);
      }
      break;

// off 184
    case 27:
      stateController[3] = 0;
      for (int i = 0; i < strip3.numPixels(); i++) {
        strip3.setPixelColor(i, 0, 0, 0); strip3.setBrightness(0); strip3.show(); delay(1);
      }
      break;

// off 185
    case 28:
      stateController[4] = 0;
      for (int i = 0; i < strip4.numPixels(); i++) {
        strip4.setPixelColor(i, 0, 0, 0); strip4.setBrightness(0); strip4.show(); delay(1);
      }
      break;

// off 186
    case 29:
      stateController[5] = 0;
      for (int i = 0; i < strip5.numPixels(); i++) {
        strip5.setPixelColor(i, 0, 0, 0); strip5.setBrightness(0); strip5.show(); delay(1);
      }
      break;

// off 187
    case 30:
      stateController[6] = 0;
      for (int i = 0; i < strip6.numPixels(); i++) {
        strip6.setPixelColor(i, 0, 0, 0); strip6.setBrightness(0); strip6.show(); delay(1);
      }
      break;

// off 188
    case 31:
      stateController[7] = 0;
      for (int i = 0; i < strip7.numPixels(); i++) {
        strip7.setPixelColor(i, 0, 0, 0); strip7.setBrightness(0); strip7.show(); delay(1);
      }
      break;


  }

}



// FUNCTIONS
void drawFade0 ( uint8_t start, uint8_t r, uint8_t g, uint8_t b ) {
  int brightness = 255;
  for ( int p = 0 ; p < FADE_LENGTH_0 ; p++ ) {
    strip0.setPixelColor(
      ( start - p ) % RING_SIZE_0,
      strip0.Color(
        ( r * brightness ) / 255,
        ( g * brightness ) / 255,
        ( b * brightness ) / 255
      )
    );
    brightness = ( brightness * FADE_SCALE_0 ) / 255;
  }
}
void drawFade1 ( uint8_t start, uint8_t r, uint8_t g, uint8_t b ) {
  int brightness = 255;
  for ( int p = 0 ; p < FADE_LENGTH_1 ; p++ ) {
    strip1.setPixelColor(
      ( start - p ) % RING_SIZE_1,
      strip1.Color(
        ( r * brightness ) / 255,
        ( g * brightness ) / 255,
        ( b * brightness ) / 255
      )
    );
    brightness = ( brightness * FADE_SCALE_1 ) / 255;
  }
}
void drawFade2 ( uint8_t start, uint8_t r, uint8_t g, uint8_t b ) {
  int brightness = 255;
  for ( int p = 0 ; p < FADE_LENGTH_2 ; p++ ) {
    strip2.setPixelColor(
      ( start - p ) % RING_SIZE_2,
      strip2.Color(
        ( r * brightness ) / 255,
        ( g * brightness ) / 255,
        ( b * brightness ) / 255
      )
    );
    brightness = ( brightness * FADE_SCALE_2 ) / 255;
  }
}


void pulse0() {

}
