#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

//When we come to more and more complex program we use
//OOP-Object Oriented Programin -> Objects
//In OOP we create class as blue print
//then we use that class to create as many object as we want
//the class is a cookie that can be instanciated
namespace sherifi
{
	struct Argument
	{
		int x;
		int y;
	};
	template <typename T>
	void print_name(T a) {
		std::cout << a << std::endl;
	}
}
int func_81()
{
	int a = 5;
	sherifi::print_name(a);
	std::string a = "Sherifi";
	sherifi::print_name(a);
	return 0;
}