#include <iostream>


/*
	Exception Handling in case of class : 
											A derived class exception shoul be caught before a base class exception.

											if both  base and derived classes are caught as exceptions then catch block of 
											derived class must appear before the base class.

											if we put base class first then the derived class catch block will never be reached.

											for e.g. following C++ code prints "Caught Base Exception"
*/

class Base {};

class Derived : public Base {};

int main()
{
	Derived d;

	try
	{
		throw d;
	}
	catch (Base b)
	{
		std::cout << "Caught Base Exception" << std::endl;		//<-- only Base catch is reachable.
	}
	catch (Derived d)
	{
		std::cout << "Caught Derived Exception" << std::endl;	//<-- Derived catch is not reachable.
	}

	getchar();

	return 0;
}


/*
	if we change the order of the catch statements then both catch statements become reachable. Following is the modified program and it prints "Caught Derived Exception"
*/

//int main()
//{
//	Derived d;
//	Base b;
//
//	try
//	{
//		throw b;
//	}
//	catch (Derived d)
//	{
//		std::cout << "Caught Derived Exception" << std::endl;		//<-- Derived catch is reachable 
//	}
//	catch (Base b)
//	{
//		std::cout << "Caught Base Exception" << std::endl;			//<-- Base catch is reachable.
//	}
//	
//
//	getchar();
//
//	return 0;
//}
