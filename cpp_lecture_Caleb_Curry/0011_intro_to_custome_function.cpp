#include <iostream>

int func_011_a(int, int); //this is function decoration
int addition(int x, int y) //this is function declaratin
//the first line and block inside curlybraces is functin definition
{
	return x + y;
}
int func_11()
{
	//this part we now as function call
	int test_1 = addition(4, 5);
	std::cout << test_1 << std::endl;
	int test_2 = addition(test_1, 3);
	std::cout << test_2 << std::endl;
	return 0;
}
//usual the HEADER we include the decoration of function
//and than in object code we add definition for those function