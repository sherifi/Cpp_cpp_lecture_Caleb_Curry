#include <iostream>
#include <string>

int func_41()
{
	int answer = 9;
	int points;
	std::cout << "Guess the number: ";
	int guess;
	std::cin >> guess;
	if (guess == answer)
	{
		points = 10;
	}
	std::cout << "Your got " << points << " points." << std::endl;
	//------------------------------------------------------------
	int point = guess == answer ? 10 : 0;
	//------------------------------------------------------------
	int point_2 = guess;
	point_2 == answer ? 10 : 0;
	std::cout << "Your got " << point_2 << " point." << std::endl;
	//------------------------------------------------------------
	std::cout << "Guess the choice [y/n]";
	char choice = 'y';
	char guess_2;
	std::cin >> guess_2;
	guess_2 == choice ? std::cout << "YES\n" : std::cout << "No\n";
	char result = guess_2;
	result == choice ? std::cout << "YES\n" : std::cout << "NO\n";
	return 0;
}