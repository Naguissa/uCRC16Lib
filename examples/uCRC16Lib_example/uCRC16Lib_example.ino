/**
 * Tiny and cross-device compatible CCITT CRC16 calculator library - uCRC16Lib - Example
 *
 * @author Naguissa
 * @url https://www.github.com/Naguissa/uCRC16Lib
 * @url https://www.foroelectro.net
 */

#include "Arduino.h"
#include "uCRC16Lib.h"




void setup() {
    Serial.begin(57600);
    while (!Serial) {
      ; // wait for serial port to connect. Needed for Leonardo only
    }

	uint16_t crc;
	char string[40];
	string[0] = 'T';
	string[1] = (unsigned char)0xd9;
	string[2] = (unsigned char)0xe4;
	string[3] = NULL;

	Serial.print("The crc of \"T\" is 0xE4D9. crc16 returned ");
	Serial.println(uCRC16Lib::calculate(string, 1), HEX);
	Serial.println();

	Serial.print("The crc of \"T 0xD9 0xE4\" is ");
	Serial.print(uCRC16Lib::calculate(string, 3), HEX);
	Serial.print(". The value of crc_ok is ");
	Serial.println(uCRC16Lib::crc_ok, HEX);
	Serial.println();

	strcpy(string, "THE,QUICK,BROWN,FOX,0123456789");
	Serial.print("The crc of \"");
	Serial.print(string);
	Serial.print("\" is 0x206E. crc16 returned ");
	Serial.println(uCRC16Lib::calculate(string, strlen(string)), HEX);
	Serial.println();

	string[0] = (unsigned char)0x03;
	string[1] = (unsigned char)0x3F;

	Serial.print("CCITT Recommendation X.25 (1984) Appendix I example:");
	Serial.print("\tThe crc of 0x03 0x3F is 0xEC5B. crc16 returned ");
	Serial.println(uCRC16Lib::calculate(string, 2), HEX);
	Serial.println();

	Serial.println("* Note: All calculations are without byte-swapping now. For line transmission this is mandatory, but not needed for general use.");
	Serial.println();

	Serial.println(" - END -");
	Serial.println();

}


void loop() {
}

