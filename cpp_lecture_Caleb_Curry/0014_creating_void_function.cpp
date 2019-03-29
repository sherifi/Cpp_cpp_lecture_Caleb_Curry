#include <iostream>

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}
int func_14(double base, int exponent)
{
	double my_poewer_results = power(base, exponent);
	std::cout << base << "raised to the " << exponent << " power is: ";
	std::cout << my_poewer_results << std::endl;
	return 0;
}

