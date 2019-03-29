#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
int func_47()
{
	//Squar brackeds we use usualy where we define the array ore where we what to access 
	//specific element in array that have index
	int guesses[] = { 34, 12, 34, 4, 9 };
	//here we return the number of bits use that array
	std::cout << sizeof(guesses) << std::endl;
	//here we divide with size of int(the size of int is 4)
	//in the end this will return the number of element that fill that array
	int size_array = sizeof(guesses) / sizeof(int);
	print_array(guesses, size_array);
	return 0;
}