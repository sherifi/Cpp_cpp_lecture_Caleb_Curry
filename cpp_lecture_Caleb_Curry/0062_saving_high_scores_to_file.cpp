#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <fstream>
#include <ctime>
#include <climits>
#include <cstdlib>


void print_vector(std::vector <int> vect)
{
	for (int i = 0; i < vect.size(); i++)
	{
		std::cout << vect[i] << "\t";
	}
	std::cout << std::endl;
}
void play_game()
{
	std::vector <int> guesses;
	//creating the random number in range of 0 to 250
	std::cout << "Game is begin played" << std::endl;
	int count = 0;
	int random = rand() % 251;
	std::cout << random << std::endl;
	std::cout << "Guess the number" << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		count++;
		guesses.push_back(guess);
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
	std::string high_score = "high_score_records.txt";
	std::ifstream input(high_score);
	if (!input.is_open())
	{
		std::cout << "Unable to open the file" << std::endl;
		return;
	}
	int best_score;
	input >> best_score;
	std::ofstream output(high_score);
	if (!output.is_open())
	{
		std::cout << "Unable to open the file" << std::endl;
		return;
	}
	if (count < best_score)
	{
		output << count;
	}
	else
	{
		output << best_score;
	}
	print_vector(guesses);
}
int func_62()
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