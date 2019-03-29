#include <iostream>
#include <string>

#define YEAR_LENGTH = 4;
int func_25()
{
	//now the we seen over that cin grab word by work in input
	std::string greeting;
	std::cin >> greeting;
	std::string left_over;
	std::cin >> left_over;
	std::cout << greeting << std::endl;
	std::cout << left_over << std::endl;
	//now we have another method that get the all word inputed
	//and this is used usual to get sting from inputs
	std::string welcome_string;
	getline(std::cin, welcome_string);
	std::cout << greeting << std::endl;
	//another getline method to get the number is there
	//const int YEAR_LENGTH=4;
	std::cout << "Enter the current year: " << std::endl;
	//int year;
	//std::cin >> year;
	//cin.getline(year, YEAR_LENGTH);
	//cin.getline(std::cin , YEAR_LENGTH);
	//std::cout << year << std::endl;
	int year;
	//cin.getline(std::cin , year);
	//std::cout << year << std::endl;
	return 0;
}