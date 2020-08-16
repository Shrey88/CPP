/*
	Function Pointers

	pointers are the data types that stores the address of some data stored in the computer's memory

	pointer can be dereferenced to get the value stored at that address.

	now we are saying that we can have pointers that can store the address of function or in another words point to functions.

	we can use a pointer to function to dereference and execute the function




*/


#include<iostream>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int c; 
	/*
		if we do not mention the *p inside the paranthesis then it will  mean that we are declaring the function that 
		is returning the pointer to integer
	*/
	int (*p)(int, int);	// this the declaration of function pointer.

	p = &Add; // as we know & operator gives us the address, we are referencing the function to p;

	p = Add; // just mentioning the function name will return us the address of the function.

	c = (*p)(2, 3); // we are dereferencing the function pointer to get the function and pass the parameter

	/*
		to dereference- instead of using the parenthesis and asterik operator with function pointer name we can simply 
		use the function pointer name
	*/
	c = p(2, 3);	
	return 0
}