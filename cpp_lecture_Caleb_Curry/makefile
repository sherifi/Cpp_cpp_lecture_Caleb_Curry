output_file: file1.o file2.o
	g++ file1.o file2.o -o output_file

file1.o: file1.cpp
	g++ -c file1.cpp

file2.o: file2.cpp
	g++ -c file2.cpp

clean: 
	rm *.o output_file