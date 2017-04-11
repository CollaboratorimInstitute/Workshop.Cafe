// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"

/************************
 * Company | Collaboratorium Institute
 * Department | Workshop Cafe LLC
 * Project | TableNotification
 * Name | William Felker and Adam Lukasik
 * Build | Version 1.3
 * *********************/


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

// const int RED =
// const int GREEN =
// const int BLUE =

 Adafruit_NeoPixel strip0 = Adafruit_NeoPixel(RING_SIZE_0 , D0, WS2812B); // Large
 Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(RING_SIZE_0 , D1, WS2812B); // Medium
 Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(RING_SIZE_0 , D2, WS2812B); // Small

 Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(RING_SIZE_0 , D3, WS2812B); // Large
 Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(RING_SIZE_0 , D4, WS2812B); // Medium
 Adafruit_NeoPixel strip5 = Adafruit_NeoPixel(RING_SIZE_0 , D5, WS2812B); // Small

 Adafruit_NeoPixel strip6 = Adafruit_NeoPixel(RING_SIZE_0 , D6, WS2812B); // Large
 Adafruit_NeoPixel strip7 = Adafruit_NeoPixel(RING_SIZE_0 , D7, WS2812B); // Medium

 Adafruit_NeoPixel strip8 = Adafruit_NeoPixel(RING_SIZE_0 , A0, WS2812B); // Small
 Adafruit_NeoPixel strip9 = Adafruit_NeoPixel(RING_SIZE_0 , A1, WS2812B); // Large
 Adafruit_NeoPixel strip10 = Adafruit_NeoPixel(RING_SIZE_0 , A2, WS2812B); // Medium

 Adafruit_NeoPixel strip11 = Adafruit_NeoPixel(RING_SIZE_0 , A3, WS2812B); // Small
 Adafruit_NeoPixel strip12 = Adafruit_NeoPixel(RING_SIZE_0 , A4, WS2812B); // Large
 Adafruit_NeoPixel strip13 = Adafruit_NeoPixel(RING_SIZE_0 , A5, WS2812B); // Medium

 void setup() {
   //pinMode(led,OUTPUT);
   pinMode(boardLed,OUTPUT);

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
   strip0.setBrightness(180);
   strip1.begin();
   strip1.show();
   strip1.setBrightness(180);
   strip2.begin();
   strip2.show();
   strip2.setBrightness(180);

   strip3.begin();
   strip3.show();
   strip3.setBrightness(180);

   strip4.begin();
   strip4.show();
   strip4.setBrightness(180);

   strip5.begin();
   strip5.show();
   strip5.setBrightness(180);

   strip6.begin();
   strip6.show();
   strip6.setBrightness(180);

   strip7.begin();
   strip7.show();
   strip7.setBrightness(180);

   strip8.begin();
   strip8.show();
   strip8.setBrightness(180);

   strip9.begin();
   strip9.show();
   strip9.setBrightness(180);

   strip10.begin();
   strip10.show();
   strip10.setBrightness(180);

   strip11.begin();
   strip11.show();
   strip11.setBrightness(180);

   strip12.begin();
   strip12.show();
   strip12.setBrightness(180);


   strip13.begin();
   strip13.show();
   strip13.setBrightness(180);


 }

 // Now for the loop.
 void loop() {
 }

// Custom Functions //
int funcName(String extra) {
  return 0;
}

int TableNotification(String command) {


// 110
    if (command=="green110") {
          for(int i=0; i<strip0.numPixels(); i++) {
          strip0.setPixelColor(i, 41, 171, 226);
      }

       for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
       for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }
       for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
       return 0;

    }
    else if (command=="pulseRed110") {
           for(int i=0; i<strip0.numPixels(); i++) {
           strip0.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }

        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }

        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }

        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }

        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }
        for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
        return 0;
    }
    else if (command=="red110") {
      for(int i=0; i<strip0.numPixels(); i++) {
      strip0.setPixelColor(i, 250,0,0);
      }
      
       for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
       for (int i=200; i>50; i--) { strip0.setBrightness(i); strip0.show(); delay(1); }
       for (int i=50; i<200; i++) { strip0.setBrightness(i); strip0.show(); delay(1); }
       return 0;
}

// 111
    else if (command=="green111") {
      for ( int i=0 ; i < RING_SIZE_1 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_1 ; p++ ) {
            strip1.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade1( i, 41, 171, 226);        //  then draw the fade
        strip1.show();
        delay( SPEED );
    }
    for(int i=0; i<strip1.numPixels(); i++) {
      strip1.setPixelColor( i, 41, 171, 226);
        }
        strip1.show();
        return 0;
    }
    else if (command=="pulseRed111") { // blink
      for(int i=0; i<strip1.numPixels(); i++) {
           strip1.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=200; i>50; i--) { strip1.setBrightness(i); strip1.show(); delay(1); }

        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=200; i>50; i--) { strip1.setBrightness(i); strip1.show(); delay(1); }

        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=200; i>50; i--) { strip1.setBrightness(i); strip1.show(); delay(1); }

        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=200; i>50; i--) { strip1.setBrightness(i); strip1.show(); delay(1); }

        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=200; i>50; i--) { strip1.setBrightness(i); strip1.show(); delay(1); }
        for (int i=50; i<200; i++) { strip1.setBrightness(i); strip1.show(); delay(1); }
        return 0;
    }
    else if (command=="red111") {
      for ( int i=0 ; i < RING_SIZE_1 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_1 ; p++ ) {
            strip1.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade1( i, 250, 0, 0);        //  then draw the fade
        drawFade1( i, 0, 0, 0);
        drawFade1( i, 250, 0, 0);
        strip1.show();
        delay( SPEED );
    }
        strip1.show();
        return 0;
}

// 112
    else if (command=="green112") {
      for ( int i=0 ; i < RING_SIZE_2 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_2 ; p++ ) {
            strip2.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade2( i, 41, 171, 226);        //  then draw the fade
        strip2.show();
        delay( SPEED );
    }
    for(int i=0; i<strip2.numPixels(); i++) {
      strip2.setPixelColor( i, 41, 171, 226);
        }
        strip2.show();
        return 0;
    }
    else if (command=="pulseRed112") {
     for(int i=0; i<strip2.numPixels(); i++) {
           strip2.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=200; i>50; i--) { strip2.setBrightness(i); strip2.show(); delay(1); }

        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=200; i>50; i--) { strip2.setBrightness(i); strip2.show(); delay(1); }

        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=200; i>50; i--) { strip2.setBrightness(i); strip2.show(); delay(1); }

        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=200; i>50; i--) { strip2.setBrightness(i); strip2.show(); delay(1); }

        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=200; i>50; i--) { strip2.setBrightness(i); strip2.show(); delay(1); }
        for (int i=50; i<200; i++) { strip2.setBrightness(i); strip2.show(); delay(1); }

        return 0;
    }
    else if (command=="red112") {
      for ( int i=0 ; i < RING_SIZE_2 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_2 ; p++ ) {
            strip2.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade2( i, 255, 0, 0);
        drawFade2( i, 0, 0, 0);
        drawFade2( i, 250, 0, 0); //  then draw the fade
        strip2.show();
        delay( SPEED );
    }
        strip2.show();
        return 0;
    }


// 113
    else if (command=="green113") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip3.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip3.show();
        delay( SPEED );
    }
    for (int i=0; i<strip3.numPixels(); i++) {
      strip3.setPixelColor( i, 41, 171, 226);
    }
    strip3.show();
     return 0;
    }
    else if (command=="pulseRed113") {
           for(int i=0; i<strip3.numPixels(); i++) {
           strip3.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=200; i>50; i--) { strip3.setBrightness(i); strip3.show(); delay(1); }

        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=200; i>50; i--) { strip3.setBrightness(i); strip3.show(); delay(1); }

        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=200; i>50; i--) { strip3.setBrightness(i); strip3.show(); delay(1); }

        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=200; i>50; i--) { strip3.setBrightness(i); strip3.show(); delay(1); }

        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=200; i>50; i--) { strip3.setBrightness(i); strip3.show(); delay(1); }
        for (int i=50; i<200; i++) { strip3.setBrightness(i); strip3.show(); delay(1); }
        return 0;
    }
    else if (command=="red113") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip3.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip3.show();
        delay( SPEED );
    }
     for (int i=0; i<strip3.numPixels(); i++) {
      strip3.setPixelColor( i, 250, 0, 0); ;
    }
        strip3.show();
        return 0;
    }

    // 114
    if (command=="green114") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip4.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip4.show();
        delay( SPEED );
    }
    for (int i=0; i<strip4.numPixels(); i++) {
      strip4.setPixelColor( i, 41, 171, 226);
    }
    strip4.show();
     return 0;
    }
    else if (command=="pulseRed114") {
           for(int i=0; i<strip4.numPixels(); i++) {
           strip4.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=200; i>50; i--) { strip4.setBrightness(i); strip4.show(); delay(1); }

        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=200; i>50; i--) { strip4.setBrightness(i); strip4.show(); delay(1); }

        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=200; i>50; i--) { strip4.setBrightness(i); strip4.show(); delay(1); }

        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=200; i>50; i--) { strip4.setBrightness(i); strip4.show(); delay(1); }

        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=200; i>50; i--) { strip4.setBrightness(i); strip4.show(); delay(1); }
        for (int i=50; i<200; i++) { strip4.setBrightness(i); strip4.show(); delay(1); }
        return 0;
    }
    else if (command=="red114") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip4.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip4.show();
        delay( SPEED );
    }
     for (int i=0; i<strip4.numPixels(); i++) {
      strip4.setPixelColor( i, 250, 0, 0); ;
    }
        strip4.show();
        return 0;
    }

// 115
    else if (command=="green115") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip5.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip5.show();
        delay( SPEED );
    }
    for (int i=0; i<strip5.numPixels(); i++) {
      strip5.setPixelColor( i, 41, 171, 226);
    }
    strip5.show();
     return 0;
    }
    else if (command=="pulseRed115") {
           for(int i=0; i<strip5.numPixels(); i++) {
           strip5.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=200; i>50; i--) { strip5.setBrightness(i); strip5.show(); delay(1); }

        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=200; i>50; i--) { strip5.setBrightness(i); strip5.show(); delay(1); }

        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=200; i>50; i--) { strip5.setBrightness(i); strip5.show(); delay(1); }

        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=200; i>50; i--) { strip5.setBrightness(i); strip5.show(); delay(1); }

        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=200; i>50; i--) { strip5.setBrightness(i); strip5.show(); delay(1); }
        for (int i=50; i<200; i++) { strip5.setBrightness(i); strip5.show(); delay(1); }
        return 0;
    }
    else if (command=="red115") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip5.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip5.show();
        delay( SPEED );
    }
     for (int i=0; i<strip5.numPixels(); i++) {
      strip5.setPixelColor( i, 250, 0, 0); ;
    }
        strip5.show();
        return 0;
    }

// 116
    else if (command=="green116") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip6.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip6.show();
        delay( SPEED );
    }
    for (int i=0; i<strip6.numPixels(); i++) {
      strip6.setPixelColor( i, 41, 171, 226);
    }
    strip6.show();
     return 0;
    }
    else if (command=="pulseRed116") {
           for(int i=0; i<strip6.numPixels(); i++) {
           strip6.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=200; i>50; i--) { strip6.setBrightness(i); strip6.show(); delay(1); }

        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=200; i>50; i--) { strip6.setBrightness(i); strip6.show(); delay(1); }

        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=200; i>50; i--) { strip6.setBrightness(i); strip6.show(); delay(1); }

        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=200; i>50; i--) { strip6.setBrightness(i); strip6.show(); delay(1); }

        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=200; i>50; i--) { strip6.setBrightness(i); strip6.show(); delay(1); }
        for (int i=50; i<200; i++) { strip6.setBrightness(i); strip6.show(); delay(1); }
        return 0;
    }
    else if (command=="red116") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip6.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip6.show();
        delay( SPEED );
    }
     for (int i=0; i<strip6.numPixels(); i++) {
      strip6.setPixelColor( i, 250, 0, 0); ;
    }
        strip6.show();
        return 0;
    }

// 117
    else if (command=="green117") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip7.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip7.show();
        delay( SPEED );
    }
    for (int i=0; i<strip7.numPixels(); i++) {
      strip7.setPixelColor( i, 41, 171, 226);
    }
    strip7.show();
     return 0;
    }
    else if (command=="pulseRed117") {
           for(int i=0; i<strip7.numPixels(); i++) {
           strip7.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=200; i>50; i--) { strip7.setBrightness(i); strip7.show(); delay(1); }

        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=200; i>50; i--) { strip7.setBrightness(i); strip7.show(); delay(1); }

        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=200; i>50; i--) { strip7.setBrightness(i); strip7.show(); delay(1); }

        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=200; i>50; i--) { strip7.setBrightness(i); strip7.show(); delay(1); }

        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=200; i>50; i--) { strip7.setBrightness(i); strip7.show(); delay(1); }
        for (int i=50; i<200; i++) { strip7.setBrightness(i); strip7.show(); delay(1); }
        return 0;
    }
    else if (command=="red117") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip7.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip7.show();
        delay( SPEED );
    }
     for (int i=0; i<strip7.numPixels(); i++) {
      strip7.setPixelColor( i, 250, 0, 0); ;
    }
        strip7.show();
        return 0;
    }

// 118
    else if (command=="green118") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip8.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip8.show();
        delay( SPEED );
    }
    for (int i=0; i<strip8.numPixels(); i++) {
      strip8.setPixelColor( i, 41, 171, 226);
    }
    strip8.show();
     return 0;
    }
    else if (command=="pulseRed118") {
           for(int i=0; i<strip8.numPixels(); i++) {
           strip8.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=200; i>50; i--) { strip8.setBrightness(i); strip8.show(); delay(1); }

        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=200; i>50; i--) { strip8.setBrightness(i); strip8.show(); delay(1); }

        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=200; i>50; i--) { strip8.setBrightness(i); strip8.show(); delay(1); }

        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=200; i>50; i--) { strip8.setBrightness(i); strip8.show(); delay(1); }

        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=200; i>50; i--) { strip8.setBrightness(i); strip8.show(); delay(1); }
        for (int i=50; i<200; i++) { strip8.setBrightness(i); strip8.show(); delay(1); }
        return 0;
    }
    else if (command=="red118") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip8.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip8.show();
        delay( SPEED );
    }
     for (int i=0; i<strip8.numPixels(); i++) {
      strip8.setPixelColor( i, 250, 0, 0); ;
    }
        strip8.show();
        return 0;
    }

// 119
    else if (command=="green119") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip9.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip9.show();
        delay( SPEED );
    }
    for (int i=0; i<strip9.numPixels(); i++) {
      strip9.setPixelColor( i, 41, 171, 226);
    }
    strip9.show();
     return 0;
    }
    else if (command=="pulseRed119") {
           for(int i=0; i<strip9.numPixels(); i++) {
           strip9.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=200; i>50; i--) { strip9.setBrightness(i); strip9.show(); delay(1); }

        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=200; i>50; i--) { strip9.setBrightness(i); strip9.show(); delay(1); }

        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=200; i>50; i--) { strip9.setBrightness(i); strip9.show(); delay(1); }

        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=200; i>50; i--) { strip9.setBrightness(i); strip9.show(); delay(1); }

        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=200; i>50; i--) { strip9.setBrightness(i); strip9.show(); delay(1); }
        for (int i=50; i<200; i++) { strip9.setBrightness(i); strip9.show(); delay(1); }
        return 0;
    }
    else if (command=="red119") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip9.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip9.show();
        delay( SPEED );
    }
     for (int i=0; i<strip9.numPixels(); i++) {
      strip9.setPixelColor( i, 250, 0, 0); ;
    }
        strip9.show();
        return 0;
    }

// 120
    else if (command=="green120") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip10.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip10.show();
        delay( SPEED );
    }
    for (int i=0; i<strip10.numPixels(); i++) {
      strip10.setPixelColor( i, 41, 171, 226);
    }
    strip10.show();
     return 0;
    }
    else if (command=="pulseRed120") {
           for(int i=0; i<strip10.numPixels(); i++) {
           strip10.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=200; i>50; i--) { strip10.setBrightness(i); strip10.show(); delay(1); }

        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=200; i>50; i--) { strip10.setBrightness(i); strip10.show(); delay(1); }

        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=200; i>50; i--) { strip10.setBrightness(i); strip10.show(); delay(1); }

        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=200; i>50; i--) { strip10.setBrightness(i); strip10.show(); delay(1); }

        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=200; i>50; i--) { strip10.setBrightness(i); strip10.show(); delay(1); }
        for (int i=50; i<200; i++) { strip10.setBrightness(i); strip10.show(); delay(1); }
        return 0;
    }
    else if (command=="red120") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip10.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip10.show();
        delay( SPEED );
    }
     for (int i=0; i<strip10.numPixels(); i++) {
      strip10.setPixelColor( i, 250, 0, 0); ;
    }
        strip10.show();
        return 0;
    }

// 121
    else if (command=="green121") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip11.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip11.show();
        delay( SPEED );
    }
    for (int i=0; i<strip11.numPixels(); i++) {
      strip11.setPixelColor( i, 41, 171, 226);
    }
    strip11.show();
     return 0;
    }
    else if (command=="pulseRed121") {
           for(int i=0; i<strip11.numPixels(); i++) {
           strip11.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=200; i>50; i--) { strip11.setBrightness(i); strip11.show(); delay(1); }

        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=200; i>50; i--) { strip11.setBrightness(i); strip11.show(); delay(1); }

        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=200; i>50; i--) { strip11.setBrightness(i); strip11.show(); delay(1); }

        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=200; i>50; i--) { strip11.setBrightness(i); strip11.show(); delay(1); }

        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=200; i>50; i--) { strip11.setBrightness(i); strip11.show(); delay(1); }
        for (int i=50; i<200; i++) { strip11.setBrightness(i); strip11.show(); delay(1); }
        return 0;
    }
    else if (command=="red121") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip11.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip11.show();
        delay( SPEED );
    }
     for (int i=0; i<strip11.numPixels(); i++) {
      strip11.setPixelColor( i, 250, 0, 0); ;
    }
        strip11.show();
        return 0;
    }

// 122
    else if (command=="green122") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip12.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip12.show();
        delay( SPEED );
    }
    for (int i=0; i<strip12.numPixels(); i++) {
      strip12.setPixelColor( i, 41, 171, 226);
    }
    strip12.show();
     return 0;
    }
    else if (command=="pulseRed122") {
           for(int i=0; i<strip12.numPixels(); i++) {
           strip12.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=200; i>50; i--) { strip12.setBrightness(i); strip12.show(); delay(1); }

        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=200; i>50; i--) { strip12.setBrightness(i); strip12.show(); delay(1); }

        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=200; i>50; i--) { strip12.setBrightness(i); strip12.show(); delay(1); }

        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=200; i>50; i--) { strip12.setBrightness(i); strip12.show(); delay(1); }

        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=200; i>50; i--) { strip12.setBrightness(i); strip12.show(); delay(1); }
        for (int i=50; i<200; i++) { strip12.setBrightness(i); strip12.show(); delay(1); }
        return 0;
    }
    else if (command=="red122") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip12.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip12.show();
        delay( SPEED );
    }
     for (int i=0; i<strip12.numPixels(); i++) {
      strip12.setPixelColor( i, 250, 0, 0); ;
    }
        strip12.show();
        return 0;
    }

// 123
    else if (command=="green123") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip13.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 41, 171, 226);        //  then draw the fade
        strip13.show();
        delay( SPEED );
    }
    for (int i=0; i<strip13.numPixels(); i++) {
      strip13.setPixelColor( i, 41, 171, 226);
    }
    strip13.show();
     return 0;
    }
    else if (command=="pulseRed123") {
           for(int i=0; i<strip13.numPixels(); i++) {
           strip13.setPixelColor(i, 250,0,0);
       }
        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=200; i>50; i--) { strip13.setBrightness(i); strip13.show(); delay(1); }

        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=200; i>50; i--) { strip13.setBrightness(i); strip13.show(); delay(1); }

        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=200; i>50; i--) { strip13.setBrightness(i); strip13.show(); delay(1); }

        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=200; i>50; i--) { strip13.setBrightness(i); strip13.show(); delay(1); }

        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=200; i>50; i--) { strip13.setBrightness(i); strip13.show(); delay(1); }
        for (int i=50; i<200; i++) { strip13.setBrightness(i); strip13.show(); delay(1); }
        return 0;
    }
    else if (command=="red123") {
     for ( int i=0 ; i < RING_SIZE_0 * 5 ; i++ ) {
        for ( int p=0 ; p < RING_SIZE_0 ; p++ ) {
            strip13.setPixelColor( p, 0 );  //  clear the strip
        }
        drawFade0( i, 250, 0, 0);
        drawFade0( i, 0, 0, 0);
        drawFade0( i, 250, 0, 0); //  then draw the fade
        strip13.show();
        delay( SPEED );
    }
     for (int i=0; i<strip13.numPixels(); i++) {
      strip13.setPixelColor( i, 250, 0, 0); ;
    }
        strip13.show();
        return 0;
    }

        else {
        return -1;
    }
}



// FUNCTIONS
void drawFade0 ( uint8_t start, uint8_t r, uint8_t g, uint8_t b ) {
    int brightness = 255;
    for ( int p=0 ; p < FADE_LENGTH_0 ; p++ ) {
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
    for ( int p=0 ; p < FADE_LENGTH_1 ; p++ ) {
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
    for ( int p=0 ; p < FADE_LENGTH_2 ; p++ ) {
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


void pulse0(){

}
