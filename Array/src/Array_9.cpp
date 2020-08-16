/*
	Char Array
*/
#include <iostream>
#include <string.h>
int main()
{
	/*
		this is how you can create and initialize the char array on the stack memory.
	*/
	char a[] = "Shreyas";
	std::cout << "Value of a :: " << a<<std::endl;
	std::cout << "Value of *a :: " << *a << std::endl; // this will give you the first char of the array
	
	std::cout << std::endl << std::endl;

	char a1[]{ "Shreyas" };
	std::cout << "Value of a1 :: " << a1 << std::endl;// this will give you the complete string 
	std::cout << "Value of *a1 :: " << *a1 << std::endl;// this will give you the first char of the array


	return 0;
}