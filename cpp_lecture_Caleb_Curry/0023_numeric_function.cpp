#include <iostream>
#include <cmath>

int func_23()
{
	std::cout << sqrt(25) << std::endl;
	//std::cout << NAN << std::endl;
	//std::cout << sqrt(-25) << std::endl; //this will return nan(not a number)
	//std::cout << INFINITY << std::endl;
	//std::cout << pow(9, 999999) << std::endl; //this will return inf(infinite) large number
	//std::cout << -INFINITY << std::endl;
	//std::cout << pow(-9, 999999) << std::endl; //this will return -inf(-infinite) large number
	std::cout << remainder(10, 3) << std::endl;
	std::cout << 10 % 3 << std::endl;
	//this will throw error
	//std::cout << 10 % 3.25 << std::endl;
	std::cout << remainder(10, 3.25) << std::endl;
	std::cout << fmod(10, 3.25) << std::endl;
	std::cout << fmax(10, 3.25) << std::endl;
	std::cout << fmin(10, 3.25) << std::endl;
	std::cout << ceil(fmin(10, 3.25)) << std::endl;
	std::cout << floor(fmin(10, 3.25)) << std::endl;
	//this is usual used to trunc the reminder of number in 
	std::cout << trunc(fmin(10, 3.25)) << std::endl;
	std::cout << round(fmin(10, 3.25)) << std::endl;
	return 0;
}