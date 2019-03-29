#include <iostream>
#include <cmath>

int func_12()
{
	int base, exponent;
	std::cout << "Enter the value of base for power: " << std::endl;
	std::cin >> base;
	std::cout << "Enter the value of exponent for base: " << std::endl;
	std::cout << "The power of numbers typed before is: " << std::endl;
	std::cin >> exponent;
	std::cout << pow(base, exponent) << std::endl;
	double result_of_power = pow(base, exponent);
	std::cout << result_of_power << std::endl;
	std::cout << "The power of numbers 10, 3 is: " << std::endl;
	std::cout << pow(10, 3) << std::endl;
	return 0;
}