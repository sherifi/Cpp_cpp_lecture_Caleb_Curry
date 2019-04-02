#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

//intro to constructors
//constructor is class method that is created implicitly where we create object form class
//form is exm: User(){code};
//constructor usualy have the same name as class and take no arguments
//in class we can also create explicitly constructor that can be changed 
//and behave as we like and can accept other arguments
//form is exm: User( std::string fname, std::string lname ){code};
//after we create constructors explicitly there are no implicitly created constructor
//at the end of object is also one class method that is creatd implicitly destructor
//for is exm: ~User(){code};
//destructor have the job to destory the object after the runin that object
//also we can create desturctor in explicitly way
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
		//-----------------------------------------------------------------------
		//Constructors and Destructors
		User()
		{
			std::cout << "Constructor\n" << std::endl;
		}
		User(std::string fname, std::string lname, std::string location, int age, std::string status)
		{
			this->fname = fname;
			this->lname = lname;
			this->location = location;
			this->age = age;
			this->status = status;
		}
		~User()
		{
			std::cout << "Destructor" << std::endl;
		}
	};
	//-----------------------------------------------------------------------
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
int func_88()
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
	usr_3.fname = "Adem";
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
	sherifi::User usr_5( "Nami", "Frasheri", "Albania", 82 , "GOLD" );
	std::cout << usr_5.fname << std::endl;
	std::cout << usr_5.lname << std::endl;
	std::cout << usr_5.location << std::endl;
	std::cout << usr_5.age << std::endl;
	std::cout << usr_5.get_status() << std::endl;
	//-------------------------------------------------------
	return 0;
}