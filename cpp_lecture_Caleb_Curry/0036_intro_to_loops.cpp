#include <iostream>
#include <string>

int func_36()
{
	//while loop
	//Main important element of loop are initializer, condition and update
	int x = 0;
	//Usualy we user the while loop where we do not now exactly how many time the loop will be executed.
	//Importance while loop run zero ore more time
	while (x < 10)
	{
		std::cout << x << std::endl;
		x++;
	}
	//Usualy we user the for loop where we now exactly how many time the loop will be executed.
	for (int y = 0; y < 10; y++)
	{
		std::cout << y << std::endl;
	}
	//Usualy we user the while loop where we do not now exactly how many time the loop will be executed.
	//Importance do while loop run at less once
	int z = 0;
	do
	{
		std::cout << z << std::endl;
		z++;
	} while (z < 10);
	return 0;
}