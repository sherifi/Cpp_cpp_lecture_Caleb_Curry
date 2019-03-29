#include <iostream>

double power(double, int); //declaration
double power(double base, int exponent) //definition
{
	double result=1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}
int func_13()
{
	int base, exponent;
	std::cout << "Enter the value for base: ";
	std::cin >> base;
	std::cout << "Enter the value for exponent: ";
	std::cin >> exponent;
	double my_poewer_results = power(base, exponent);
	std::cout << my_poewer_results << std::endl;
	return 0;
}