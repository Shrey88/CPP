#include "../header/const_initialization_list.h"

/*
	new way of initializing the variables
*/
Person1::Person1(): name("undefined"), age(0)
{
	/*
		normal way of initializing the variables is here, inside the curly braces
	*/
}


/*
	here C++ is able to differentiate the instance variable and variable to initialize.
*/
Person1::Person1(std::string name, int age): name(name), age(age)
{
	/*
		normal way of initializing the variables is here, inside the curly braces
	*/
}
