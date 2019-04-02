#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

void swap(int &a, int &b)
{
	int temp = a;
	b = a;
	a = temp;
	std::cout << "a: " << a << "\tb: " << b << "\n";
}

int func_68()
{
	int a = 10;
	int b = 30;
	swap(a, b);
	std::cout << "a: " << a << "\tb: " << b << "\n";
	return 0;
}