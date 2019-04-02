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
//Struct by default are public
//another level of access is protected
//Classes by default are private
//In general struct are used for storing variables
//PODS-Plane old data structure
namespace sherifi
{
	struct Argument
	{
		int x;
		std::string name;
		int y;
		std::string location;
		double z;
		std::vector <int> vect_1;
		int array_1[10];
	};
	template <typename T>
	void print_name(T a) {
		std::cout << a << std::endl;
	}
}
int func_82()
{
	int a = 5;
	sherifi::print_name(a);
	std::string a = "Sherifi";
	sherifi::print_name(a);
	return 0;
}