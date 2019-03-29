#include <iostream>

int func_18()
{
	char name = ' ';
	std::cout << name << std::endl;
	//Now let use type casting to convert the char to int
	std::cout << (int)name << std::endl;
	//std::cout << static_assert<int>(name) << std::endl;
	//Maximum value for signed char is 174. This go from -147<--->+147
	signed char x = 174;
	//Maximum value for unsigned char is 255
	unsigned char y = 255;
	//Also is important to say the are some other char data type that empower 
	//other language in world
	//Those type are:
	char16_t z = ' ';
	char32_t w = ' ';
	return 0;
}