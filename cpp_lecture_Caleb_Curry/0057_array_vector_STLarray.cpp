#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>
#include <ctime>

int func_57()
{
	//data inside vector data collection can be copy in other vector
	std::vector <int> data_1 = { 1, 2, 5, 63, 63, 72 };
	std::vector <int> data_2 = data_1;
	std::cout << data_2[0] << std::endl;
	//Templetized array save there length and also can be assigned in other array of same type
	std::array <int, 20> data_3 = { 1, 5, 6, 23, 53, 62, 5 };
	std::array <int, 20> data_4 = data_3;
	std::cout << data_4[0] << std::endl;
	//C-style array can not be copy to another same array type, the data are passed by pointer
	int data_5[20] = { 2, 5, 6, 2, 6 };
	int data_6[] = { 12, 4, 5, 5, 63 };
	std::cout << data_6[0] << std::endl;
	return 0;
}