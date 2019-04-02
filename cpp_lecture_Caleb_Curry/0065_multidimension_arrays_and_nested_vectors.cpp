#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

void print_array(const int row_size, const int column_size, const int depth_size, int array_input[row_size][column_size][depth_size])
{
	if (!row_size == 0 && !column_size == 0 && !depth_size == 0)
	{
		std::cout << "multi dimension arra: \n";
		for (int r = 0; r < row_size; r++)
		{
			for (int c = 0; c < column_size; c++)
			{
				for (int d = 0; d < depth_size; d++)
				{
					std::cout << array_input[r][c][d] << "\t";
				}
				std::cout << "\n";
			}
			std::cout << "\n";
		}
		std::cout << "\n";
		std::cout << "End of array\n";
	}
	else if (!row_size == 0 && !column_size == 0 && depth_size == 0)
	{
		std::cout << "two dimension arra: \n";
		for (int r = 0; r < row_size; r++)
		{
			for (int c = 0; c < column_size; c++)
			{
				std::cout << array_input[r][c] << "\t";
			}
			std::cout << "\n";
		}
		std::cout << "\n";
		std::cout << "End of array\n";
	}
	//else if (!row_size == 0 && column_size == 0 && depth_size == 0)
	else
	{
		std::cout << "one dimension arra: \n";
		for (int r = 0; r < row_size; r++)
		{
			std::cout << array_input[r] << "\t";
		}
		std::cout << "\n";
		std::cout << "End of array\n";
	}
}

int func_65()
{
	//one dimension array
	const int row_size = 3;
	const int column_size = 3;
	const int depth_size = 3;
	int array_1[row_size] = { 1, 5, 6 };
	for(int i = 0; i < row_size; i++)
	{
		std::cout << array_1[i] << std::endl;
	}
	//multi-dimension array
	int array_2[row_size][column_size] = {
											{ 5, 6, 7 },
											{ 3, 5, 7 }, 
											{ 6, 8, 9 }
										};
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			std::cout << array_2[r][c] << "\t";
		}
		std::cout << "\n";
	}
	//nested vector
	std::vector <std:vector<int>> two_dim_vect = {
												{ 5, 6, 7 },
												{ 3, 5, 7 },
												{ 6, 8, 9 }
												};
	return 0;
}