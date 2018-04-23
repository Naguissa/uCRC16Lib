# Arduino IDE based CCITT CRC16 calculator - uCRC16Lib #

## What is this repository for? ##

Tiny and cross-device compatible CCITT CRC16 calculation.

Supports any microcontroller.



## Usage ##

This library is used with only static methods, you don't need to (and can't) initialize any class object.

You have these methods:
 - *uCRC16Lib::calculate(char * data_to_be_encoded, uint16_t size);* : Returns CRC16 in a uint16_t
 - *uCRC16Lib::crc_ok* : uint16_t with CRC16 value of "T 0xD9 0xE4" (without spaces)

## How do I get set up? ##

You can get it from Arduino libraries directly, searching by uCRC16Lib.

For manual installation:

 * Get the ZIP from releases link: https://github.com/Naguissa/uCRC16Lib/releases
 * Rename to uCRC16Lib.zip
 * Install library on Arduino

## Examples ##

Included on example folder, available on Arduino IDE.



## Who do I talk to? ##

 * [Naguissa](https://github.com/Naguissa)
 * https://www.foroelectro.net/electronica-digital-microcontroladores-f8/utimerlib-libreria-arduino-para-eventos-temporizad-t191.html

