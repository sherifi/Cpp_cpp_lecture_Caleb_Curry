#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void play_game()
{
	//creating the random number in range of 0 to 250
	std::cout << "Game is begin played" << std::endl;
	int random = rand() % 251;
	std::cout << random << std::endl;
	std::cout << "Guess the number" << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		if (guess == random)
		{
			std::cout << "You win the game";
			break;
		}
		else if (guess < random)
		{
			std::cout << "Your guess was to low";
		}
		else
		{
			std::cout << "Your guess was to hight";
		}
	}
}
int func_44()
{
	srand(time(NULL));
	int choice;
	do
	{
		std::cout << "Start of the game" << std::endl;
		std::cout << "0.Quit" << std::endl << "1.Play Game" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << "You quit the game" << std::endl;
			break;
			//If we want this program to end reading following down code we can use return 0
			//return 0;
		case 1:
			play_game();
			break;
		}
	} while (choice != 0);
	return 0;
}