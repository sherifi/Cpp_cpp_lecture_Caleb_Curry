#include <iostream>
#include <string>

int func_38()
{
	//Using while loop to calculate the factorial of number 5 that is equla to 5*4*3*2*1
	int x = 5;
	int result = 1;
	while (x >= 1)
	{
		result *= x;
		x--;
	}
	std::cout << result << std::endl;
	//Using while loop to calculate the factorial of number 5 that is equla to 5*4*3*2*1 Method_2
	int result_2 = 5;
	int y = result_2 - 1;
	while (y >= 1)
	{
		result_2 *= y;
		y--;
	}
	std::cout << result_2 << std::endl;
	int z = 0;
	while (z <= 10)
	{
		std::cout << z << std::endl;
		z++;
	}
	return 0;
}