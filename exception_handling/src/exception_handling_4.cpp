#include<iostream>

/*
	In C++, all exceptions are unchecked. Compiler doesn't check whether an exception is caught or not.

	for example, in C++, it is not necessary to specify all uncaught exceptions in a function declaration.

	Although it's a recommended practice to do so.

	for e.g., the following program compiles fine, but ideally signature of fun() should list unchecked execeptions.
*/


/*
	This function signature is fine by the compiler, but not recommended.
	
	ideally, the function should specify all uncaught exceptions and function
*/

void fun(int* ptr, int x)
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
}

/*
	Better way to write the above code is by declaring the signature with uncaught exceptions
*/
void fun(int *ptr, int x) throw(int* , int )
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
}


int main()
{
	try
	{
		fun(NULL, 0);
	}
	catch (...)			//<-- it can catch any type of exception
	{
		std::cout << "Caught exception from fun()";
	}

	return 0;
}