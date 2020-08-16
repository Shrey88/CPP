#include <iostream>
//#include <exception>


/*
	Customizing the termination behavior for uncaught exception in C++

	Whenever an exception arises in C++, it is handled as per the behavior defined using the try-catch block.

	There is often cases when an exception is thrown but isn't caught ecause the exception handling subsystem 
	fails to find a matching catch block for that particular exception.

	In that case, the following set of actions take place.

		1.	The exception handling subsystem calls the function: unexpected(). This function is provided by default C++
			library, defines the behavior when an uncaught exception arises.
			By default, unexpected calls terminate().

		2.	The terminate function defines the actions that are to be performed during process termination. This, by default, calls abort().

		3.	The process is aborted.

	To change the terminate handler, the function used is set_terminate(terminate_handler newhandler), which is defined in the header <exception>
*/


// definition of custom handler
void myhandler()
{
	std::cout << "Inside new terminate handler" << std::endl;
	std::abort();
}


int main()
{
	//set new terminate handler
	std::set_terminate(myhandler);	//<-- this will be called the custom handler only when the application is executed as standalone

	try
	{
		std::cout << "Inside try block" << std::endl;
		throw 100;
	}
	catch (char a)		//<--won't catch an int exception
	{
		std::cout << "Inside catch block" << std::endl;
	}

	return 0;
}


