/*
	character pointer
*/

#include<iostream>


void print(const char* c)
{
	*(c + 0) = 'A'; //<--since c is constant, it won't allow you to modify the value

	while (*c != 0) 
	{
		std::cout << *c << std::endl;
		
		c++;	
	}

	std::cout << std::endl;

}


int main()
{
	/*
		consider you have created a char pointer instead of char array

		you cannot store the literal which const char pointer into normal char*

		to solve this you need to write const in front of the data type, which helps compiler 
		to understand that we are storing the constant value in const variable 

		and the reason is it does not allow you to manipulate the string present in the const char 
		variable.

		so you can only read each char but cannot change the value.
	*/
	//char *c = "hello"; 

	const char* c = "Hello";

	print(c);

	return 0;
}