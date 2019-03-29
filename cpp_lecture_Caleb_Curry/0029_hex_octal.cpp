#include <iostream>
#include <string>

int func_29()
{
	//NUMERAL SYSTEM
	//BINARY-base 2						0,1
	//OCTAL-base 8						0,1,2,3,4,5,6,7
	//DECIMlA-base 10					0,1,2,3,4,5,6,7,8,9
	//HEXADECIMLA-base 16				0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
	//----------------------------------------------------------------------
	//HERE WE GO FROM OTHER NUMERAL SYSTEM TO DECIMAL
	int number0 = 30;//this is binary
	//2*3+1*0
	int number1 = 345;//this is binary
	//2*2*3+2*4+1*5
	//----------------------------------------------------------------------
	int number2 = 030;//this is octal
	//8*3+1*0
	int number3 = 0345;//this is octal
	//8*8*3+8*4+1*5
	//----------------------------------------------------------------------
	int number4 = 30;//this is decimal
	//10*3+1*0
	int number5 = 345;//this is decimal
	//10*10*3+10*4+1*5
	//----------------------------------------------------------------------
	int number6 = 0x30;//this is hexadecimal
	//16*3+1*0
	int number7 = 0x345;//this is decimal
	//16*16*3+16*4+1*5
	//----------------------------------------------------------------------
	std::cout << number0 << std::endl;
	std::cout << number1 << std::endl;
	std::cout << number2 << std::endl;
	std::cout << number3 << std::endl;
	std::cout << number4 << std::endl;
	std::cout << number5 << std::endl;
	std::cout << number6 << std::endl;
	std::cout << number7 << std::endl;
	//----------------------------------------------------------------------
	//HERE WE GO FROM OTHER NUMERAL SYSTEM TO BINARY
	//int number8_binary = 0b10011;
	//int number8_oct = 030;
	//int number8_dec = 30;
	//int number8_hex = 0x30;
	//std::cout << std::signbit << number8_binary << std::endl;
	//std::cout << std::signbit << number8_oct << std::endl;
	//std::cout << std::signbit << number8_dec << std::endl;
	//std::cout << std::signbit << number8_hex << std::endl;
	//----------------------------------------------------------------------
	//HERE WE GO FROM OTHER NUMERAL SYSTEM TO OCTAL
	//int number9_binary = 0b10011;
	//int number9_oct = 030;
	//int number9_dec = 30;
	//int number9_hex = 0x30;
	//std::cout << std::oct << number9_binary << std::endl;
	//std::cout << std::oct << number9_oct << std::endl;
	//std::cout << std::oct << number9_dec << std::endl;
	//std::cout << std::oct << number9_hex << std::endl;
	//----------------------------------------------------------------------
	//HERE WE GO FROM OTHER NUMERAL SYSTEM TO DECIMAL
	//int number10_binary = 0b10011;
	//int number10_oct = 030;
	//int number10_dec = 30;
	//int number10_hex = 0x30;
	//std::cout << std::dec << number10_binary << std::endl;
	//std::cout << std::dec << number10_oct << std::endl;
	//std::cout << std::dec << number10_dec << std::endl;
	//std::cout << std::dec << number10_hex << std::endl;
	//----------------------------------------------------------------------
	//HERE WE GO FROM OTHER NUMERAL SYSTEM TO HEXADECIMLA
	//int number10_binary = 0b10011;
	//int number10_oct = 030;
	//int number10_dec = 30;
	//int number10_hex = 0x30;
	//std::cout << std::hex << number10_binary << std::endl;
	//std::cout << std::hex << number10_oct << std::endl;
	//std::cout << std::hex << number10_dec << std::endl;
	//std::cout << std::hex << number10_hex << std::endl;
	//----------------------------------------------------------------------
	return 0;
}