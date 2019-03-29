#include <iostream>
#include <string>
#include <vector>

int func_51()
{
	std::vector <int> data = { 1, 2, 3 };
	data.push_back(4);
	//std::cout << data << std::endl;
	std::cout << data[3] << std::endl;
	//the offical way to output the last element stored in vector data structure
	std::cout << data[data.size() - 1] << std::endl;
	data.pop_back();
	std::cout << data[data.size() - 1] << std::endl;
	return 0;
}