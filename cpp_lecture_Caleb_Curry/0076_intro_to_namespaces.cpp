#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

//untile now we have used the namespace standard
//where we specified the std::
//exmp. std::cout, std::cin ,std::string, std::vector, std::array, std::endl;
namespace sherifi
{
	//the code inside this code block is part of namespace sherifi
	//we use namespace to group common function
	//group code that are belong to specific company ore person
	//classifying and categories
	int print_num(int x)
	{
		return x;
	}
}
int func_75()
{
	std::cout << "Intro to namespaces" << std::endl;
	std::cout << sherifi::print_num(5) << std::endl;
	return 0;
}