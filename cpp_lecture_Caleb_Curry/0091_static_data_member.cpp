#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

namespace sherifi
{
	class User
	{
	private:
		static int user_count;
		std::string status = "GOLD";
		std::vector <int> vect_1;
		int array_1[10];
	protected:
		std::string gender;
	public:
		static int get_user_count()
		{
			return user_count;
		}
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
		std::string get_status()
		{
			return status;
		}
		void set_status(std::string status)
		{
			if (status == "GOLD" || status == "SILVER" || status == "BRONZE")
			{
				this->status = status;
			}
			else
			{
				this->status = "No status";
			}
		}
		//-----------------------------------------------------------------------
		//Constructors and Destructors
		User()
		{
			//std::cout << "Constructor\n" << std::endl;
			user_count++;
		}
		User(std::string fname, std::string lname, std::string location, int age, std::string status)
		{
			this->fname = fname;
			this->lname = lname;
			this->location = location;
			this->age = age;
			this->status = status;
			user_count++;
		}
		~User()
		{
			std::cout << "Destructor" << std::endl;
			user_count--;
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
//after we have created the static member in our class
//outside of class now we can initialize it to 0
int sherifi::User::user_count = 0;
int func_91()
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
	sherifi::User usr_5("Nami", "Frasheri", "Albania", 82, "GOLD");
	std::cout << usr_5.fname << std::endl;
	std::cout << usr_5.lname << std::endl;
	std::cout << usr_5.location << std::endl;
	std::cout << usr_5.age << std::endl;
	std::cout << usr_5.get_status() << std::endl;
	//-------------------------------------------------------
	sherifi::User usr_6;
	usr_6.set_status("Sherfi");
	std::cout << usr_6.get_status() << std::endl;
	//-------------------------------------------------------
	//here we print out the number of created user using static variable for counting
	sherifi::User usr_7, usr_8, usr_9, usr_10;
	std::cout << sherifi::User::get_user_count() << std::endl;
	usr_10.~User();
	std::cout << sherifi::User::get_user_count() << std::endl;
	usr_9.~User();
	std::cout << sherifi::User::get_user_count() << std::endl;
	//-------------------------------------------------------
	return 0;
}