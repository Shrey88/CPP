#include<iostream>

/*
	Exception Handling:
						Exceptions are run-time anomalies or abnormal conditions that a program encounters during its execution.
						There are two types of executions:
							Synchronous
							Asynchronous(eg which are beyond the program's control,Disc Failures etc.)

						C++ provides following specialized keywords for this purpose.
							try: represents a block of code that can throw an exception.
						
							catch: represents a block of code that is executed when a particular exception is thrown.

							throw: Used to throw an exception. Also used to list the exceptions that a function throws, but doesn't handle itself.


	Following are the main advatanges of exception handling over traditional error handling.

	1. Separation of Error Handling code from the Normal Code :	In traditional error handling codes, there are always if else conditions to handle errors.
																These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less
																readable and maintainable. With try catch blocks, the code for error handling becomes separate from the normal flow.

	2. Functions/Methods can handle any exceptions they choose : A function can throw many exceptions, but may choose to handle some of them. The other exceptions which are thrown, 
																 but not caught can be handled by caller. If the caller choosed not to catch them, then the exceptions are handled
																 by caller of the caller.

																 In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must 
																 handle the execptions in some way(either by specifying it again or catching it)

	3. Grouping of Error Types									: In C++, both basic types and objects can be thrown as exception. We can createa hierarchy of exception objects, group exceptions in
																  namespaces or classes, categorize them according to types.

 */

int main()
{
	int x = -1;

	std::cout << "Before try" << std::endl;

	try
	{
		std::cout << "Inside try" << std::endl;

		if (x < 0)
		{
			throw x;
			
			// anything after throw will not get executed.
			std::cout << "After throw (Never executed)" << std::endl;
		}
	}
	catch (int x) 
	{
		std::cout << "Exception Caught" << std::endl;
	}

	std::cout << "After catch (will be exeuted)" << std::endl;

	return 0;
}