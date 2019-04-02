#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>
#include "0073_header.h"

namespace sherifi
{
	//if we user struct that part is staying in header file here we don't need that
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
	//if we have default value in function, that part is staying in header file
	double pow(double base, int pow)
	{
		int total = 1;
		for (int i = 0; i < pow; i++)
		{
			total *= base;
		}
		return total;
	}
}