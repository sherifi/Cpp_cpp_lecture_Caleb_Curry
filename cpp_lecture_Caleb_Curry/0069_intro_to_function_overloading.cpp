#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

void func_a(int x)
{
	std::cout << x << "\n";
}
void func_a(std::string x)
{
	std::cout << x << "\n";
}
//calculate the area for squar
double area(int x);
//calculate the area for recangle
double area(int x, int y);
int func_69()
{
	//function overloading mean that we create two ore more function with same name
	//but with different argument data type
	func_a(5);
	func_a("Hello");
}