#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

//When we come to more and more complex program we use
//OOP-Object Oriented Programin -> Objects
//In OOP we create class as blue print
//then we use that class to create as many object as we want
//the class is a cookie that can be instanciated
//Struct by default are public
//another level of access is protected
//Classes by default are private
//In general struct are used for storing variables
//PODS-Plane old data structure
//Instation is named the process of creating object from classes
//In each class we have usual constructor and deconsturctor that are generated implicitly
//those element are function with the same name of class that are linked to class itself
//also we have the statuc member of class that are linked to class itself
namespace sherifi
{
	struct User
	{
	private:
		std::vector <int> vect_1;
		int array_1[10];
	protected:
		std::string status;
	public:
		std::string fname;
		std::string lname;
		std::string location;
		int age;
	};
	template <typename T>
	void print_name(T a) {
		std::cout << a << std::endl;
	}
	template <typename T, typename N>
	void print_usr(T& a, T& b, T& c, N& d)
	{
		std::cout << "fname:\t" << a << "\n" << "lname:\t" << b << "\n" << "location:\t" << c << "\n" << "age:\t" << d << std::endl;
	}
}
int func_84()
{
	int a = 5;
	sherifi::print_name(a);
	std::string a = "Sherifi";
	sherifi::print_name(a);
	sherifi::User usr_1;
	usr_1.fname = "Sherifi";
	usr_1.lname = "Sh";
	usr_1.location = "USA";
	usr_1.age = 25;
	sherifi::print_usr(usr_1.fname, usr_1.lname, usr_1.location, usr_1.age);
	return 0;
}