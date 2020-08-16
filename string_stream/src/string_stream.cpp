/*
	suppose you have one variable of string type and another of int type and you want to create a string where 
	both the information is present and you can used it elsewhere as well.

	so to concat a string and int type you use stringstream 

	for that include sstream header file.
*/


#include<iostream>
#include<sstream>

int main()
{
	std::string name = "Bob";

	int age = 32;

	// creating a stringstream variable.
	std::stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	std::cout << ss.str() << std::endl;


	return 0;

}