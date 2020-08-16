#include <iostream>


/*
	Catching an exception by reference

	Catching an exception by value will call the copy constructor and create copy of the 
	exception which adds run-time overhead.
	
	Thus, catching by reference is better option. If we want to modify exception or add some 
	additional information to the error message then catching by reference is best for it.
*/


void fun1()
{
	try
	{
		try
		{
			throw std::string("Initial Exception\n");
		}
		catch (std::string str)
		{
			str += "Adding additional info\n";
			throw;
		}
	}
	catch (std::string str)
	{
		str += "Adding some more info\n";
		std::cout << str << std::endl;
	}
}


/*
	the above program wants to catch the exception, add some information to it and re-throw it. 
	But str is a call by value variable which gets changed locally in the  function re-throw the exception 
	then the original exception is passed.
*/

void fun2()
{
	try
	{
		try
		{
			throw std::string("Initial Exception.\n");
		}
		catch (std::string& str)
		{
			str += "Adding additional info\n";
			throw;
		}
	}
	catch (std::string& str)
	{
		str += "Adding some more info\n";
		std::cout << str << std::endl;
	}

}


int main()
{
	std::cout << "Calling function 1" << std::endl;
	fun1();
	std::cout << "Calling function 2" << std::endl;
	fun2();

	return 0;
}