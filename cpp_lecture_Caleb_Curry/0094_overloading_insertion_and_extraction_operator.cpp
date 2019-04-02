#include <iostream>

namespace sherifi
{
	//5 + 5
	//5-s are operant
	//+ is operator
	class Position
	{
	public:
		int x = 10;
		int y = 20;
		Position operator + (Position pos)
		{
			Position new_pos;
			new_pos.x = x + pos.x;
			new_pos.y = y + pos.y;
			return new_pos;
		}
		bool operator == (Position pos)
		{
			if (x == pos.x && y == pos.y)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	};
}
std::ostream& operator << (std::ostream& output, sherifi::Position& pos)
{
	output << pos.x << pos.y ;
	return output;
}
std::istream& operator >> (std::istream& input, sherifi::Position& pos)
{
	input >> pos.x  >> pos.y;
	return input;
}
int func_94()
{
	sherifi::Position pos_1, pos_2;
	pos_1.x = 10;
	pos_1.y = 35;
	std::cout << pos_1;
	std::cin >> pos_2;
	return 0;
}