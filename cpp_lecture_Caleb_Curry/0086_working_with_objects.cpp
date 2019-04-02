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
	class User
	{
	private:
		std::string status = "GOLD";
		std::vector <int> vect_1;
		int array_1[10];
	protected:
		std::string gender;
	public:
		std::string fname;
		std::string lname;
		std::string location;
		int age;
		template <typename T>
		void print_name(T& a, T& b) {
			std::cout << a << " " << b << std::endl;
		};
		template <typename T, typename N>
		void print_usr(T& a, T& b, T& c, N& d)
		{
			std::cout << "fname:\t" << a << "\n" << "lname:\t" << b << "\n" << "location:\t" << c << "\n" << "age:\t" << d << std::endl;
		}
		//template <typename S>
		auto get_status()
		{
			return status;
		}
	};
	void unique_user(std::vector<sherifi::User>& users, sherifi::User user)
	{
		for (int i = 0; i < users.size(); i++)
		{
			if (users[i].fname == user.fname && users[i].lname == user.lname)
			{
				std::cout << "User exists with index id:\t" << i << std::endl;
				return;
			}
			else
			{
				users.push_back(user);
				std::cout << "User add with index id:\t" << users.size() - 1 << std::endl;
			}
		}
	}
}
int func_86()
{
	int a = 5;
	sherifi::User usr;
	usr.fname = "Sherifi";
	usr.lname = "Shkelqim";
	usr.location = "USA";
	usr.age = 25;
	usr.print_name(usr.fname, usr.lname);
	usr.print_usr(usr.fname, usr.lname, usr.location, usr.age);
	usr.get_status();
	std::vector <sherifi::User> users;
	users.push_back(usr);
	//another way to add user to vector is to call consttuctor directly
	std::cout << users[0].fname << std::endl;
	std::cout << users[0].lname << std::endl;
	std::cout << users[0].location << std::endl;
	std::cout << users[0].age << std::endl;
	std::cout << users[0].get_status() << std::endl;
	//-------------------------------------------------------
	std::vector <sherifi::User> employee;
	sherifi::User usr_1, usr_2, usr_3, usr_4;
	usr_1.fname = "Sherifi";
	usr_1.lname = "Shkelqim";
	usr_1.location = "USA";
	usr_1.age = 25;
	usr_2.fname = "Sherifi";
	usr_2.lname = "Shkelqim";
	usr_2.location = "USA";
	usr_2.age = 35;
	usr_3.fname = "Adnan";
	usr_3.lname = "Jashari";
	usr_3.location = "USA";
	usr_3.age = 62;
	usr_4.fname = "Gjergj Kastrioti";
	usr_4.lname = "Skenderbeu";
	usr_4.location = "USA";
	usr_4.age = 34;
	sherifi::unique_user(employee, usr_1);
	sherifi::unique_user(employee, usr_2);
	sherifi::unique_user(employee, usr_3);
	sherifi::unique_user(employee, usr_4);
	//-------------------------------------------------------
	return 0;
}