#include <iostream>
#include <string>

int func_40()
{
	std::string sentence = "Hello my name is Sherifi";
	for (int i = 0; i < sentence.size(); i++)
	{
		std::cout << sentence[i] << std::endl;
		if (sentence[i] == ' ')
		{
			std::cout << "Found empty space in the string !" << std::endl;
			//Now here we can use break and continue
			//break to stop the loop for other iteration if the condition hit
			//continue to skip the condition hit ans start the loop till the end
			continue;
		}
	}
	std::cout << "The end of loop!";
	return 0;
}