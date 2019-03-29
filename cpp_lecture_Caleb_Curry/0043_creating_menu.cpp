#include <iostream>
#include <string>

int func_43()
{
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
				std::cout << "You started the game" << std::endl;
				break;
		}
	} while (choice != 0);
	return 0;
}