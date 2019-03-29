#include <iostream>
#include <string>
#include <float.h>

int func_21()
{
	float a;
	double b;
	long double c;
	//Let try some example
	double num_1 = 770000; //This number can be represented also as 7.7E5 
	//the logic here is 7.7 * 10^5(exponet value with base 10 and exponet 5)
	double num_2 = 7.7E5;
	std::cout << num_2 << std::endl;
	//Now let make some operation that use the float point numbers
	std::cout << 10.0/3 << std::endl;
	std::cout << std::fixed << 10.0/3 * 1000000000 << std::endl;
	//Now using float.h to see how many digit we can store safety in floting point data type
	//usualy the float can be trusted tile 6 digits
	std::cout << FLT_DIG << std::endl;
	//usualy the float can be trusted tile 15 digits
	//Now using float.h to see how many digit we can store safety in double point data type
	std::cout << DBL_DIG << std::endl;
	//usualy the float can be trusted tile 18 digits
	//Now using float.h to see how many digit we can store safety in long double point data type
	std::cout << LDBL_DIG << std::endl;
	return 0;
}