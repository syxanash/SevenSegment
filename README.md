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

Once you've copied this folder, launch the Arduino environment and click on *Sketch **>** Import Library* and select **SevenSegment**.

## License
### vssu.pl is released under the [GNU General Public License (GPL3)](https://www.gnu.org/licenses/gpl-3.0.html):
Copyright (C) 2012 syxanash <syxanash@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

On Debian systems, the complete text of the GNU General Public License
can be found in /usr/share/common-licenses/GPL-3.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

##About

This is my first Arduino library so if you have something to report: suggestions, criticisms, insults just let me know...
