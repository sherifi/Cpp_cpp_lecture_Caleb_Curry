#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

int func_50()
{
	//creating one vector
	//vector is type of data collector
	//vector are dynamic because there size vary
	std::vector<int> items;
	//in the vector we can asign value
	std::vector<int> count = { 1, 4, 9, 23, 41 };
	//adding element in vector is done by using 
	count.push_back(100);
	//to grab the element that is inside the vector we use squar brackets
	//and inside we put the index of element that we want to use
	count[2]; //this is equal to the element that we put inside 100
	//to count element that are inside the array we use method size
	count.size();
	//to get the last element of vector we use the following statement
	count[count.size() - 1];
	return 0;
}