#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int func_46()
{
	//In the array down we reservet place for 20 elements and in start those places are filled 
	//with zero value
	int guesses[20];
	//In down array we have created array that can holl places based on how many elements we fill it.
	int guesses_2[] = { 5, 3, 2, 6, 2, 6, 32, 63, 23, 634, 123, 34, 65, 17, 31 };
	std::cout << guesses_2[5] << std::endl;
	guesses_2[5] = 300;
	std::cout << guesses_2[5] << std::endl;
	//We need to keep in mind than where we use sizeof the return value is telling us how much bits.
	//sizeof also is used in many case to return the number of bits that one data type use.
	//sizeof is also used to return how bits use one particulary element to store data
	int numb_elements = sizeof(guesses_2) / sizeof(guesses_2[0]);
	//int numb_elements = sizeof(guesses_2) / sizeof(int);
	for (int i = 0; i < numb_elements; i++)
	{
		std::cout << guesses_2[i] << std::endl;
	}
	return 0;
}