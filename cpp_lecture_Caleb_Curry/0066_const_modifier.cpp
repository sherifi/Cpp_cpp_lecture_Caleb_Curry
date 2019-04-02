#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

void print_array(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//using const data type will not allow us to modify the value of element
		//data[i]++;
		std::cout << data[i] << std::endl;
	}
}
int func_66()
{
	int data[] = { 2, 3, 5 };
	print_array(data, 3);
	std::cout << data[0] << std::endl;
	return 0;
}