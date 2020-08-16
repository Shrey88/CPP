#include<iostream>

/*
	try-catch blocks can be nested, also exceptions can be re-thrown using throw

	A function can also re-throw a function using same throw. 

	A function can handle a part and can ask the caller to handle remaining.
*/

int main()
{
	try
	{
		try
		{
			throw 20;
		}
		catch (int n)
		{
			std::cout << "Handle Partially" << std::endl;
			throw;								//<-- Re-throwing an exception
		}
	}
	catch (int n)
	{
		std::cout << "Handle remaining" << std::endl;
	}

	return 0;
}