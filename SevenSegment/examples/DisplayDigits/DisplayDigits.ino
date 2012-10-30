/*
    Seven Segment Display digits printer
    created by syxanash

    Mail me:  syxanash@gmail
    Tweet me: @syxanash

    This example code is in the public domain.
*/

#include <SevenSegment.h>

int pins[] = {1,2,4,5,6,7,8,9};

SevenSegment displayer = SevenSegment(pins);

void setup() {} // unused setup function

void loop() {
  for ( int i = 0; i < 11; i++ ) {
    displayer.encode_display(i);
    delay(1000);
  }

  // turn on all the display of the display

  displayer.writePin(B11111111);
  
  delay(1500);
}