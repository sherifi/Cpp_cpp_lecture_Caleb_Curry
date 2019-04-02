#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

//usual when we pass argument to function we pass them by there value
//this is copying the value to that function
void func_val(int x)
{
	x = 10;
	std::cout << x << std::endl;
}
//passing argument by reference is attribute of array tha we can crete using & sign
void func_ref(int &y)
{
	y = 20;
	std::cout << y << std::endl;
}

int func_67()
{
	int x = 30;
	func_val(x);
	int y = 30;
	func_ref(y);

	return 0;
}