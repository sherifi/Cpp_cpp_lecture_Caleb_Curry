#include <iostream>
#include "0096_header.h"

class Position
{
private:
	int z = 23;
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
	void output_z(Position pos)
	{
		std::cout << pos.z << std::endl;
	}
};
std::ostream& operator << (std::ostream& output, Position& pos)
{
	output << pos.x << pos.y;
	return output;
}
std::istream& operator >> (std::istream& input, Position& pos)
{
	input >> pos.x >> pos.y;
	return input;
}