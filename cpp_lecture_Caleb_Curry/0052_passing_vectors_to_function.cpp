#include <iostream>
#include <string>
#include <vector>
#include <climits>

void print_vector(std::vector <int> data)
{
	int input;
	//-----------------------------------------
	while(std::cin >> input)
	{
		data.push_back(input);
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n');
	//-----------------------------------------
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << std::endl;
	}
	std::cout << std::endl;
	//-----------------------------------------
}
int func_52()
{
	std::vector <int> data = { 1, 2, 3 };
	print_vector(data);
	return 0;
}