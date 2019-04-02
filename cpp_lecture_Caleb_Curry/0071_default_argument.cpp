#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

double pow(double base, int pow)
{
	int total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;
	}
	return total;
}
double pow(double base)
{
	int total = 1;
	for (int i = 0; i < 2; i++)
	{
		total *= base;
	}
	return total;
}
//this third function can be called with one argument and in that situate the second argument is default 2
//ore we can call with two different argument
//this allow to replace two above function with single one.
double pow(double base, int pow = 2)
{
	int total = 1;
	for (int i = 0; i < pow; i++)
	{
		total *= base;
	}
	return total;
}
int func_71()
{
	std::cout << pow(3, 2) << std::endl;
	std::cout << pow(5) << std::endl;
	return 0;
}