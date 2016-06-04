##Seven Segment Display
###An object oriented interface for seven segment display usage

With this library you'll be able to write decimal numbers on seven segment displays, using [Arduino](http://arduino.cc).
It provides also an object oriented interface to use this library.

The code is self-explanatory, hence simply read the .h file to see all the methods of this library.

##Synopsis

```c
#include <SevenSegment.h>

int pins[] = {1,2,4,5,6,7,8,9};

SevenSegment displayer = SevenSegment(pins);

void setup() {} // unused setup function

void loop() {

  // write the number 6 into the display

  displayer.encode_display(6);

  // turn on all the display of the display

  displayer.writePin(B11111111);
}
```
Notice that you don't need to use the **setup** function to make the display work, however this doesn't mean that you can not use it for other purposes.

##Install this library

Simply place the folder **SevenSegment** into the **libraries** directory of your Arduino IDE.
Example:

```
/home/myusername/Desktop/arduino-1.0.1/libraries/SevenSegment
```

Once you've copied this folder, launch the Arduino environment and click on *Sketch > Import Library* and select **SevenSegment**.

## License
```
The MIT License (MIT)

Copyright (c) 2014

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.THE SOFTWARE.
```

##About

This is my first Arduino library so if you have something to report: suggestions, criticisms, insults just let me know...
