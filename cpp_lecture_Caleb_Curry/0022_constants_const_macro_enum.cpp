#include <iostream>

//We can create the const value in old fashion like C programin language
//Those method are knowed as macros
#define X 10;

int func_22()
{
	//the const mean that we create variable with read-only flag
	//we can not change the value of this variable
	//Changing the value of the const variable will throw error
	//Constant also need to be declared and assigned the value at the same time
	const int x = 5;
	//Other type of constant are enum
	enum { y = 100 };
	std::cout << x << std::endl;
	return 0;
}