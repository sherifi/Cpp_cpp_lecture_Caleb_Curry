#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
}
void swap(std::string &a, std::string &b)
{
	std::string temp = a;
	a = b;
	b = temp;
	std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
}
//---------------------------------------------------------------------
struct Rectangle
{
	double length;
	double width;
};

double rec_area(double length, double width)
{
	return length * width;
}
double sqr_area(double length)
{
	return length * length;
}
double area(Rectangle rect)
{
	return rect.length * rect.width;
}
//---------------------------------------------------------------------
int func_70()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	std::string a = "Sherifi";
	std::string b = "Sh";
	swap(a, b);
	std::cout << "a:\t" << a << "\tb:\t" << b << std::endl;
	std::cout << "Calculating the are of recangel: " << std::endl;
	Rectangle rect_1;
	rect_1.length = 10;
	rect_1.width = 35;
	double rect_1_area = rec_area(rect_1.length, rect_1.width);
	std::cout << rect_1_area << std::endl;
	Rectangle sqr_1;
	sqr_1.length = 20;
	double sqr_1_area = sqr_area(sqr_1.length);
	std::cout << sqr_1_area << std::endl;
	Rectangle rect_2;
	rect_2.length = 15;
	rect_2.width = 5;
	double rect_2_area = area(rect_2);
	std::cout << rect_2_area << std::endl;
	return 0;
}