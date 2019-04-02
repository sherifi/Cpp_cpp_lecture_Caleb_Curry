#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int func_61()
{
	std::string file_name;
	std::cin >> file_name;
	std::ifstream file(file_name);
	//now let create the sting that care the each word and vector of type string that will care
	//the words
	std::string word;
	std::vector <std::string> names;
	//here we will read word by word in file
	while (file >> word)
	{
		std::cout << word << std::endl;
		names.push_back(word);
	}
	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}
	//-------------------------------------------
	//second way to read from file is to use get method
	char temp = file.get();
	std::cout << temp << std::endl;
	//-------------------------------------------
	//third way is to read from file useing getline function
	std::string line_holder;
	getline(file, line_holder);
	std::cout << line_holder << std::endl;
	return 0;
}