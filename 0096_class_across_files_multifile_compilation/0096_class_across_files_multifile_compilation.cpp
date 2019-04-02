#include <iostream>
#include "0096_header.h"

int func_96()
{
	sherifi::Position pos_1, pos_2;
	pos_1.x = 10;
	pos_1.y = 35;
	std::cout << pos_1;
	std::cin >> pos_2;
	output_z(pos_1);
	return 0;
}