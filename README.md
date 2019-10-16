# Arduino IDE based CCITT CRC16 calculator - uCRC16Lib #

Master status:   [![Build Status](https://travis-ci.org/Naguissa/uCRC16Lib.svg?branch=master)](https://travis-ci.org/Naguissa/uCRC16Lib)

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
 * https://www.foroelectro.net/librerias-arduino-ide-f29/ucrc16lib-pequena-libreria-para-calcular-el-ccitt--t214.html


## Contribute ##

Any code contribution, report or comment are always welcome. Don't hesitate to use GitHub for that.


You can make a donation via PayPal: https://paypal.me/foroelectro


Thanks for your support.


Contributors hall of fame: https://www.foroelectro.net/hall-of-fame-f32/contributors-contribuyentes-t271.html
