#include<iostream>

/*
	exception::what() in C++

	The exception::what() used to get string identifying exception.
	this funciton returns a null terminated character sequence that may be used to identify the exception.
	
	syntax of what:
					virtual const char* what() const throw();

	Return:
					function std::what() return a null terminated character sequence that is used to identify the exception.
*/
#include<exception>

struct gfg : std::exception {
	virtual const char* what() const noexcept
	{
		return "GeeksforGeeks!! "
			"A Computer Science "
			"Portal For Geeks";
	}
};

int main()
{
	try {
		throw gfg();
	}
	catch (gfg& gfg1)
	{
		std::cout << gfg1.what();
	}

	return 0;
}