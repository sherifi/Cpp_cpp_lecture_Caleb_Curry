#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

void print_array(int array[], int size)
{
	//where we use sizeof inside this function this will return the size of pointer in that array
	//usualy in array we have just one pointer and the size of pointer is 8-bits.
	//at this point is necessary to get the size of array that we pas in as second argument
	//in this function
	//std::cout << sizeof(array) << std::endl;
	//std::cout << size << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
}
int func_48()
{
	//Squar brackeds we use usualy where we define the array or where we what to access 
	//specific element in array that have index
	const int SIZE = 100;
	int guesses[SIZE];
	int count = 0;
	//here we return the number of bits use that array
	std::cout << sizeof(guesses) << std::endl;
	//here we divide with size of int(the size of int is 4)
	//in the end this will return the number of element that fill that array
	int size_array = sizeof(guesses) / sizeof(int);
	std::cout << "Enter the element of the array: [press any char not number to exit.]" << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		if (std::cin >> guesses[i])
		{
			count++;
			//input work
		}
		else
		{
			//invalid input. Only accepted input type is int
			break;
		}
	}
	print_array(guesses, count);
	std::cin.clear();
	//std::cin.ignore(1000, '\n');
	std::cin.ignore(std::numeric_limits <std::streamsize> ::max(), '\n');
	//---------------------------------------------------------------------
	std::string end_word;
	std::cout << "Enter the end word: ";
	std::cout << end_word << std::endl;
	return 0;
}