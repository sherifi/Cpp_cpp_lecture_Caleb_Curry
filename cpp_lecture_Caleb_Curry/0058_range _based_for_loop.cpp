#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>
#include <ctime>

int func_58()
{
	int data[] = { 1, 2, 3, 4 ,5 };
	for (int i = 0; i < 6; i++)
	{
		std::cout << data[i] << std::endl;
	}
	std::cout << std::endl;
	int data_2[] = { 1, 2, 3, 4 ,5 };
	for (int n : data_2)
	{
		std::cout << n << std::endl;
	}
	std::cout << std::endl;
	std::array <int, 20> data_3 = { 1, 2, 3, 4 ,5 };
	for (int n : data_3)
	{
		std::cout << n << std::endl;
	}
	std::cout << std::endl;
	std::vector <int> data_4 = { 1, 2, 3, 4 ,5 };
	for (int n : data_4)
	{
		std::cout << n << std::endl;
	}
	std::cout << std::endl;
	return 0;
}