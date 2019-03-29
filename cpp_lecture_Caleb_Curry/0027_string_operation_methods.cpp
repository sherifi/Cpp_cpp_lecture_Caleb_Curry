#include <iostream>
#include <string>

int func_27()
{
	std::string greeting = "What a hell";
	int x = greeting.find("hell");
	std::string word = "hell";
	int y = word.size();
	std::cout << greeting.replace(x, y, "*****") << std::endl;
	std::cout << greeting.substr(7, 4) << std::endl;
	std::cout << greeting.find_first_of("aeiou") << std::endl;
	std::cout << greeting.find_first_of("!") << std::endl;
	//in this example we will se return the number 18446744073709551615
	//this is because this is returning the value -1 for index that is not found
	//further that index is of type long unsigned and the max value for 
	//unsigned long is actualy 18446744073709551615
	//this is know as npos(not position found)
	signed long z = -1;
	std::cout << z << std::endl;
	//now we can create the statement to cout NOT FOUND insted of 18446744073709551615
	if (greeting.find_first_of("!") == -1)
	{
		std::cout << "NOT FOUND" << std::endl;
	}
	if (greeting.compare("What a hell") == 0)
	{
		std::cout << "EQUALS" << std::endl;
	}
	if (greeting == "What a hell")
	{
		std::cout << "EQUALS" << std::endl;
	}
	return 0;
}