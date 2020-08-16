/*
	Constructor Overloading:
		to supply the initial parameters to an object is actually to create a constructor that 
		allows us to pass parameters.

		so when we instantiate our object, we can pass name and age that we want it to have.


*/


#pragma once
#include<iostream>
#include<sstream>

class Person
{
private:
	std::string name;
	int age;

public:
	Person();

	/*
		you can implement the constructors here, in fact you can do this with any method
		this is called like an end in line implementation where you just define the implementation 
		of your method.
	*/
	Person(std::string name) { this->name = name; this->age = 0; };

	~Person();

	std::string toString();
};

