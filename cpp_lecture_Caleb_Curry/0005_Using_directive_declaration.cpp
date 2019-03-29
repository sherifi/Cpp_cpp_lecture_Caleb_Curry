//Using directive and declaration
#include <iostream>

//using directive
using namespace std;
int func_4()
{
	cout << "Hello World\n";
	return 0;
}
//declaration
using std::cout;
int func_4_a()
{
	cout << "Hello World\n";
	return 0;
}
//Sugestion and more official use is
int func_4_b()
{
	std::cout << "Hello World";
	return 0;
}