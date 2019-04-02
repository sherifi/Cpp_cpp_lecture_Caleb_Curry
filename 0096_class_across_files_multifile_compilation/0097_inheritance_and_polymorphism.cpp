#include <iostream>
#include <string>
#include <vector>

namespace sherifi
{
	//Inheritance is good example of using data from other class to current class
	//usualy we user inheritance where is some class that have inside all the data
	//that are common for some specific other classes
	//with inheritance we can think as one parent class and other child class that
	//are taking data from that parent class
	//parent class is knowed as base class
	//child class is knowed as drived class
	//exmple:
	//Users
		//Students
		//Teachers
	//Animals
		//Dogs
		//Cats
	//Medias
		//Photos
		//Videos
	class Position
	{
	private:
		int z = 23;
	public:
		int x = 10;
		int y = 20;
		friend void output_z(Position pos)
		{
			std::cout << pos.z << std::endl;
		}
	};
}
int func_97()
{
	sherifi::Position pos_1, pos_2;
	pos_1.x = 10;
	pos_1.y = 35;
	output_z(pos_1);
	return 0;
}