#ifndef POSITION_H
#define POSITION_H
#include <iostream>

namespace sherifi
{
	class Position
	{
	private:
		int z;
	public:
		int x;
		int y;
		Position operator + (Position pos);
		bool operator == (Position pos);
		friend void output_z(Position pos);
	};
}
std::ostream& operator << (std::ostream& output, sherifi::Position& pos);
std::istream& operator >> (std::istream& input, sherifi::Position& pos);

#endif