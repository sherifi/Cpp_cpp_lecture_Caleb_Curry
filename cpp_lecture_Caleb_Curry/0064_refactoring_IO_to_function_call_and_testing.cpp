#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

	//there are some element to best code structure
	//usualy most prefered part is to use fucntion call
	//using more function call the represent there job is best practice for clear code
	//by using function and then call them to other function your layout code is simple and clear
	//refactoring is knowed as organization of code element is best way
void save_score(int count)
{
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
}
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
	save_score(count);
	print_vector(guesses);
}
int func_64()
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