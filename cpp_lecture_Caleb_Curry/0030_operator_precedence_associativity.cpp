#include <iostream>
#include <string>

int func_30()
{
	//OPERATOR
	int x;
	//Here the operator is = and +
	x = 5 + 4;
	//Now we use arithmetic operator = + and the part 4 + 5 is knowed as expresion
	int y = 4 + 5;
	//Operator precedance
	//mean how will execute first in expresion that user operators
	//for example in the following code the multipy will execute first
	int z = 3 * 3 + 1;
	//other tricky think is where we user operator 
	int w = 10 / 4;
	//this usual will return the result 2 and if we want to return float point number
	double h = 10. / 4;
	//Operator associativity
	//mean the direction of execution of expresion that use operators
	//Left-to-Right
	//addition is goint to start from left to right
	int number = 5 + 5;
	//Right-to-Left
	//assignment is going to start from right to left
	int number2 = 5;
	int number3 = number2 + 5;
	std::cout << number << std::endl;
	std::cout << number2 << std::endl;
	std::cout << number3 << std::endl;
	return 0;
}