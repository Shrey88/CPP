#include<iostream>

/*
	When exceptions is thrown, destructors of th objects(whose scope ends with try block) 
	is automatically called before the catch block get executed. 

	What we are going to see is what happens when an exception is thrown from a constructor.

	destructors are called in the reverse order of the constructors.

	Also, after the try block, the destructors are called only for completely constructed objects.
*/

class Test1
{
public:
	Test1() { std::cout << "Constructing an object of Test1" << std::endl; }
	~Test1() { std::cout << "Destructing an object of Test1" << std::endl; }
};

class Test2
{
public:
	Test2()
	{
		std::cout << "Consttucting an object of Test2" << std::endl;
		//following constructor throws an integer exceptions
		throw 20;
	}

	~Test2()
	{
		std::cout << "Destructing an object of Test2" << std::endl;
	}
};


int main()
{
	try
	{
		Test1 t1;		//<-- constructed and destructed
		Test2 t2;		//<-- partially constructed
		Test1 t1_1;		//<-- is not constructed as this statement nevet gets executed.	
	}
	catch (int i)
	{
		std::cout << "Caught :: " << i << std::endl;
	}
}