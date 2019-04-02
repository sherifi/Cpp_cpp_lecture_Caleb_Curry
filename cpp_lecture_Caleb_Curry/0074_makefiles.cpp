#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

int func_74()
{
	//make file is file that check our code that has been compiled in future
	//look for changes that has beeen made in file and compile those file with change
	//and in the end linkt those file together to make one simple output for our
	//program. This process save us lot of time to get our job done in faster way
	//is possible.
	//example of makefile
	//create one file with name makefile
	//let asume that our program is using file1.cpp and file2.cpp to run and those file need to be compiled
	//1_line->file1.o:file1.cpp
	//2_line->	(indent)g++ -c file1.cpp
	//3_line->file2.o:file2.cpp
	//4_line->	(indent)g++ -c file2.cpp
	return 0;
}