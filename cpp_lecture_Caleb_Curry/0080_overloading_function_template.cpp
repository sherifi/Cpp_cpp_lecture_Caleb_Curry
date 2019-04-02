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
	struct Argument
	{

	};
	template <typename T>
	void swap(T &a, T &b)
	{
		T temp;
		a = b;
		a = temp;
		std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
	}
	template <typename T, typename N>
	//here we are not passing the array by reference because the are are passed by
	//default by reference(pointer to first element)
	void swap(T a[], T b[], N c[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			T temp = a[i];
			a[i] = b[i];
			b[i] = temp;
		}
	}

}
int func_80()
{
	//------------------------------------------------------------------
	int x = 10;
	int y = 15;
	sherifi::swap(x, y);
	std::string fname = "Sherifi";
	std::string lname = "Sh";
	sherifi::swap(x, y);
	//------------------------------------------------------------------
	const int SIZE = 5;
	int fives[] = { 5, 5, 5, 5, 5 };
	int threes[] = { 3, 3, 3, 3, 3 };
	int charss[] = { 'a', 'a', 'a', 'a', 'a' };
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << fives[i] << " - " << threes[i] << " - " << charss[i] << std::endl;
	}
	std::cout << std::endl;
	//------------------------------------------------------------------
	sherifi::swap(fives, threes, charss, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << fives[i] << " - " << threes[i] << " - " << charss[i] << std::endl;
	}
	std::cout << std::endl;
	//------------------------------------------------------------------
	return 0;
}