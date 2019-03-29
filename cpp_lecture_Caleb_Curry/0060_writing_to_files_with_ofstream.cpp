#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int func_60()
{
	//if we want to type the name of file from input 
	//std::string file_name;
	//std::cin >> file_name;
	std::ofstream file_out;
	//if we want to append in file we need to add the second argument
	//file_out.open("hello_world.txt", std::ios::app);
	//file_out.open(file_name.c_str(), std::ios::app);
	file_out.open("hello_world.txt");
	//file_out.open(file_name.c_str());
	//std::ofstream file_in("hello_world.txt"); //short way
	//std::ofstream file_in(file_name.c_str(), std::ios::app); //short way
	if (file_out.is_open())
	{
		std::cout << "File is successfully open" <<std::endl;
	}
	file_out << "Hello World\n";
	std::vector <std::string> names;
	names.push_back("Sherifi");
	names.push_back("Stev");
	names.push_back("Adnan");
	for (std::string name : names)
	{
		file_out << name << std::endl;
	}
	file_out.close();

}