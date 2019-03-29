#include <iostream>
#include <string>

int func_35()
{
	int gender;
	std::cout << "Enter your gender: \v 1.male 2.female 3.other";
	std::cin >> gender;
	switch (gender)
	{
	case 1:
		std::cout << "Your are male" << std::endl;
		break;
	case 2:
		std::cout << "Your are female" << std::endl;
		break;
	case 3:
		std::cout << "Your gender is other" << std::endl;
		break;
	default:
		std::cout << "You successfully enter your gender" << std::endl;
		break;
	}
	//Using enum with switch statement
	enum season{summer, spring, fall, winter};
	season now = winter;
	switch (now)
	{
	case summer:
		std::cout << "Now is summer." << std::endl;
		break;
	case spring:
		std::cout << "Now is sprint." << std::endl;
		break;
	case fall:
		std::cout << "Now is fall." << std::endl;
		break;
	case winter:
		std::cout << "Now is winter" << std::endl;
		break;
	}
	//Using enum class with switch statement
	enum class Season { summer, spring, fall, winter };
	Season now_2 = Season::winter;
	switch (now_2)
	{
	case Season::summer:
		std::cout << "Now is summer." << std::endl;
		break;
	case Season::spring:
		std::cout << "Now is sprint." << std::endl;
		break;
	case Season::fall:
		std::cout << "Now is fall." << std::endl;
		break;
	case Season::winter:
		std::cout << "Now is winter" << std::endl;
		break;
	}
	return 0;
}