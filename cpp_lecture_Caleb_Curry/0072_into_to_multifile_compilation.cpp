#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <array>
#include <climits>
#include <cstdlib>

int func_72()
{
	//---------------------------------------------------------------------------------------------
	//The best structure to split your program as we start to scale is:
	//1_header_file [declaration]
	//we can think for header_file as structure of function for our program
	//2_implementation_file [defenition]
	//the last one is file that use file from obove two part and execute those file
	//3_main_file [calling]
	//in the third part the main() function exist
	//---------------------------------------------------------------------------------------------
	//the header file with declaration of function for our program is include in other two elements
	//of program structure and we want that to compile just once
	//we use preprocessor directive
	//in the begining of header file we put two above code
	//#ifndef example.h 
	//#define example.h
	//next we put the code
	//at the end we end the preprocessor directive
	//#endif
	//to complie the program that have multiple cpp file in g++ we put oll those file
	//exm. g++ file1.cpp file2.cpp
	//---------------------------------------------------------------------------------------------
	std::cout << "func_72" << std::endl;
	return 0;
}