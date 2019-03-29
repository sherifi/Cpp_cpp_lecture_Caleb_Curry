#include <iostream>

int func_16()
{
	std::cout << "Executing func_16" << std::endl;
	//SIGNED:
		//8 bit:  -3->FD
		//16 bit : -3->FFFD
		//32 bit : -3->FFFFFFFD
		//64 bit : -3->FFFFFFFFFFFFFFFD
	//UNSIGNED :
		//8 bit : 253->FD
		//16 bit : 253 -> 00FD
		//32 bit : 253 -> 000000FD
		//64 bit : 253 -> 00000000000000FD
	//-------------------------------------------------
	//Example the integer stored in 16-bit binary form
	//int x = 5;
	//0011 1010 0011 1011
	//Example the integer stored in 32-bit binary form
	//int y = 9;
	//0011 1010 0011 1101 1010 0011 0111 0011
	//Example the integer stored in 64-bit binary form
	//long long z = 1232343;
	//0011 1010 0011 1101 1010 0011 0111 0011 0011 1010 0011 1101 1010 0011 0111 0011
	//-------------------------------------------------
	//Signed numbers means that they can be positive and negative
	//To create signed numbers we usual create them with signed bits
	return 0;
}