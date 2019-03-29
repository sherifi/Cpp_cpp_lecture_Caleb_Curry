#include <iostream>
#include <string>

int func_26()
{
	std::string greeting = "Hello World!";
	std::cout << greeting.length() << std::endl;
	std::cout << greeting.size() << std::endl;
	//appending to string old fashion
	//greeting += "!!!";
	std::cout << greeting.append("!!!") << std::endl;
	std::cout << greeting.insert(3, " ") << std::endl;
	std::cout << greeting.erase(3, 2) << std::endl;
	std::cout << greeting.erase(3, 2) << std::endl;
	std::cout << greeting.erase(greeting.length() - 1) << std::endl;
	//std::cout << greeting.pop_back() << std::endl;
	std::cout << greeting.replace(0, 4, "Heaven") << std::endl;
	return 0;
}