#include <iostream>
#include <string>

int func_34()
{
	std::string name = "Sherifi";
	std::string name_guess;
	std::cout << "Guess my name: ";
	std::cin >> name_guess;
	//---------------------------------------------
	int age = 26;
	int age_guess;
	std::cout << "Guess my age: ";
	std::cin >> age_guess;
	//---------------------------------------------
	//Logical operation &&(and)
	if (name_guess == name && age_guess == age)
	{
		std::cout << "You guesses are right";
	}
	//Logical operation ||(or)
	if (name_guess == name || age_guess == age)
	{
		std::cout << "You guesses at less one is right";
	}
	//Logical operation !(not)
	if (!(name_guess == name)) // the same can be replaced with if(name_guess != name)
	{
		//here we accept any name but not Sherifi
		std::cout << "You has passed the exception condition. The exception name was Sherifi";
	}
	//LOGICAL OPERATORS
	// &&	||	!
	//COMPARISON OPERATORS
	//==	!=	<	>	<=	>=
	return 0;
}