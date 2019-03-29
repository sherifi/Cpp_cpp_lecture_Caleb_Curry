#include <iostream>
#include <string>

int func_19()
{
	std::cout << "\n" << std::endl;
	std::cout << "\t" << std::endl;
	std::cout << "\v" << std::endl;
	std::cout << "\b" << std::endl;
	std::cout << "\a" << std::endl;
	//This is very usefull the \0 in c++ tell that is the end of string 
	//and this is character stored in one bit at end of string
	std::cout << "\0" << std::endl;
	std::cout << "Hello World\0" << std::endl;
	std::cout << "\"" << std::endl;
	std::cout << "Mies van de Rohe said: \"Less is more\"." << std::endl;
	std::cout << '\'' << std::endl;
	std::cout << "\\" << std::endl;
	return 0;
}