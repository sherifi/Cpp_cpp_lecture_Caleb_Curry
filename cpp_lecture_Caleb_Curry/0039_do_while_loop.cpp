#include <iostream>
#include <string>

int func_39()
{
	std::string password = "1234Password";
	std::string guess_pass;
	do
	{
		std::cout << "Guess the password: ";
		std::cin >> guess_pass;
	} while (guess_pass != password);
	return 0;
}