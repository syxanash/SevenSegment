#ifndef SevenSegment_h
#define SevenSegment_h

/*
    Seven Segment Display
    Copyright (c) 2012 - syxanash

    Mail me:  syxanash@gmail
    Tweet me: @syxanash
*/

#include "Arduino.h"

class SevenSegment
{
    public:
        SevenSegment(int pins[8]);
        void encode_display(char value);
        void writePin(byte bit_sequence);
 
    private:
        int _display_pins[8];
        byte _bit_sequence[11];
};

#endif