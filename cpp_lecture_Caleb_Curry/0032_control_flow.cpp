#include <iostream>
#include <string>

int func_32()
{
	//Control fllow
	//|
	//	|------branching (if and switch)
	//	|------looping   (for, while, do-while, foreach)
	//BRANCHING
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
	int age = 15;
	//Importan in c++ only int data type are allowed in case parameters.
	switch (age)
	{
	case 1:
		std::cout << "Your age is 10";
		break;
	case 2:
		std::cout << "Your age is 20";
		break;
	case 3:
		std::cout << "Your age is 30";
		break;
	case 4:
		std::cout << "Your age is 40";
		break;
	case 5:
		std::cout << "Your age is 50";
		break;
	default:
		std::cout << "Your age is more than 50";
		break;
	}
	return 0;
}