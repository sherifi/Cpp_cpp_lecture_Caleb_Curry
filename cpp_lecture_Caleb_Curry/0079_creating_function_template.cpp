#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

namespace sherifi
{
	template <typename T>
	void swap(T& a, T& b)
	{
		T temp;
		b = a;
		a = temp;
		std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
	}
}
int func_79()
{
	int a = 5;
	int b = 10;
	sherifi::swap(a, b);
	std::string a = "Sherifi";
	std::string b = "Sh";
	sherifi::swap(a, b);
	return 0;
}