#include <iostream>
#include <string>

int func_24()
{
	std::string greeting = "Hello";
	std::cout << greeting[0] << std::endl;
	std::cout << greeting[1] << std::endl;
	std::cout << greeting[2] << std::endl;
	std::cout << greeting[3] << std::endl;
	std::cout << greeting[4] << std::endl;
	//Not initialized string is equal to ""
	std::string name;
	std::cout << name << std::endl;
	std::string fname = "Sherifi ";
	std::string lname = "Sherifi ";
	std::string fullname = fname + lname;
	std::cout << fname + "Sherifi-DooD" << std::endl;
	std::cout << fullname << std::endl;
	std::string name_complet = fname + lname;
	name_complet += "!";
	std::cout << name_complet << std::endl;
	std::cout << name_complet.length() << std::endl;
	//method are member function
	//C-STYLE string and those kind of string are usual the array
	//char name[] = "Sherifi";
	//now the name stirg is created with following "Sherifi\0" and this can not be changed 
	//std::cout << name << std::endl;
	std::string user_input;
	//we need to keep in mind that with cin we get just the first word typed in cin after
	//the space all others words will be ignored
	std::cin >> user_input;
	std::cout << user_input << std::endl;
	return 0;
}