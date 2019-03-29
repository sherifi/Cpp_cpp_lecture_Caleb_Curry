#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <climits>
#include <array>

int func_54()
{
	//Templets are generic data
	//STL-Standard Library Array
	//we will lsit te data collection from hard to easy
	//Array
	//Template Array
	//Vector
	std::array <int, 5>;
	//templatized array remeber there length wher we put as argument inside functions
	//the size of templatized array have defined length
	std::array <int, 10> ages = { 2, 5, 5, 2, 5 };
	std::cout << ages[0] << std::endl;
	return 0;
}