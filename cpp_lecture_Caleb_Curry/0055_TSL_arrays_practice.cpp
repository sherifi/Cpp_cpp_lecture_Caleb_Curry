#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <vector>
#include <array>

void print_array(std::array <int, 20> data)
{
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << std::endl;
	}
	std::cout << std::endl;
}
int func_55()
{
	std::array <int, 20> data = { 1, 2, 3 };
	print_array(data);
	return 0;
}