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
int func_93()
{
	sherifi::Position pos_1, pos_2;
	sherifi::Position pos_3 = pos_1 + pos_2;
	std::cout << "pos_3 x:\t" << pos_3.x << "\tpos_3:\t" << pos_3.y << std::endl;
	if (pos_1 == pos_2)
	{
		std::cout << "pos_1 and pos_2 are the same!" << std::endl;
	}
	else
	{
		std::cout << "pos_1 and pos_2 aren't the same!" << std::endl;
	}
	return 0;
}