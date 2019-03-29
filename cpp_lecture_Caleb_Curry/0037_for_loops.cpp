#include <iostream>
#include <string>

int func_37()
{
	//How to calculate the factor of 5 using for loop
	//factor of 5 is equal to 5*4*3*2*1
	int result = 1;
	for (int n = 5; n >= 1; n--)
	{
		result *= n;
	}
	std::cout << result << std::endl;
	//factor of 5 is equal to 5*4*3*2*1 Method 2
	int result_2 = 5;
	for (int n = result_2 -1; n >= 1; n--)
	{
		result_2 *= n;
	}
	std::cout << result_2 << std::endl;
	//another example using for loop
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << std::endl;
	}
	return 0;
}