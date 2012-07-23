/*
    Seven Segment Display
    Copyright (c) 2012 - syxanash

    Mail me:  syxanash@gmail
    Tweet me: @syxanash
*/

#include "Arduino.h"
#include "SevenSegment.h"

SevenSegment::SevenSegment(int pins[8])
{
    for (int i = 0; i < 8; i++) {
        _display_pins[i] = pins[i];
        pinMode(_display_pins[i], OUTPUT);
    }

    _bit_sequence[0] = B01110111;  // write 0
    _bit_sequence[1] = B00010100;  // write 1
    _bit_sequence[2] = B10110011;  // write 2
    _bit_sequence[3] = B10110110;  // write 3
    _bit_sequence[4] = B11010100;  // write 4
    _bit_sequence[5] = B11100110;  // write 5
    _bit_sequence[6] = B11100111;  // write 6
    _bit_sequence[7] = B00110100;  // write 7
    _bit_sequence[8] = B11110111;  // write 8
    _bit_sequence[9] = B11110110;  // write 9
    _bit_sequence[10] = B00001000; // write the decimal point
}

void SevenSegment::writePin(byte bit_sequence)
{
    for (int i = 0; i < 8; i++) {

        // <3 @_wsx

        digitalWrite(_display_pins[i], !!(bit_sequence & (1 << i)));
    }
}

void SevenSegment::encode_display(char value)
{
    writePin(_bit_sequence[value]);
}
