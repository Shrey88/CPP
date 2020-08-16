/*
	Constructor initialization is to initialize the constructor variable with the parameter variables
	outside the code block.
*/


#pragma once
#include<iostream>

class Person1
{
private:
	std::string name;
	int age;

public: 
	Person1();
	Person1(std::string name, int age);

	/*
		so if you don't have any implementation other than initialization 
		then you can also initialize in the header file.
	*/
	Person1(std::string name) : name(name), age(0) {};
};

