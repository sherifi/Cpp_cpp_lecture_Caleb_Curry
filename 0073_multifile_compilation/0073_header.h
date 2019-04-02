#ifndef head
#define head
namespace sherifi
{
	//struct can stay in header file
	double pow(double base, int pow);
	double pow(double base);
	//this third function can be called with one argument and in that situate the second argument is default 2
	//ore we can call with two different argument
	//this allow to replace two above function with single one.
	double pow(double base, int pow = 2);
}
#endif // !head