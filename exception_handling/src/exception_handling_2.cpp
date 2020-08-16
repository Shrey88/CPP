#include <iostream>

/*
	In this case we are using two catch statements.
		
		1. which catches the char exception 
		
		2. which catches any type of exception.

	so for example if you throw int or any other type of exception, then it will be caught in latter exception
	and if you throw const char then it will be caught in former exception.

*/
int main()
{
	try
	{
		throw "string exception";
	}
	catch (const char *exp)				//<-- string type of exception is caught
	{
		std::cout << "Caught : " << exp << std::endl;
	}
	catch (...)							//<-- this can catche any type of exception that is not declared 
	{
		std::cout << "Default Exception" << std::endl;
	}

	return 0;
}