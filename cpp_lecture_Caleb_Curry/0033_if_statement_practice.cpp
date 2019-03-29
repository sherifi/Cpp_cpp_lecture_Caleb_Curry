#include <iostream>
#include <string>

int func_33()
{
	int x = 10;
	if (x < 20)
	{
		std::cout << "The value of x is: " << x << "and is less than 20.";
	}
	if (x < 15)
	{
		std::cout << "The value of x is: " << x << "and is less than 15.";
	}
	else
	{
		std::cout << "The value of x is: " << x << "and is more than 15.";
	}
	if (x <= 10)
	{
		std::cout << "The value of x is: " << x << "and is less ore equal to 10.";
	}
	else if (x == 10)
	{
		std::cout << "The value of x is: " << x << "and is equal to 10.";
	}
	else
	{
		std::cout << "The value of x is: " << x << "and is more than 10.";
	}
	return 0;
}