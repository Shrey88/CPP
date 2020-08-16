/*
	Use cases of the function pointers.

	function pointers can be passed as arguments to function.

	and the function that would receive a function pointer as argument can call back the function this pointer will point to

*/


#include<iostream>

/*
	
*/
void A()	
{
	std::cout << "Hello" << std::endl;
}

/*
	this function takes the function pointer as argument

	ptr should point to function that takes no argument and returns void. like function A
*/
void B(void (*ptr)())	
{
	ptr(); // call-back function that "ptr" points to
}

int main()
{
	// initializing the  function pointer with the address of A.
	void (*ptr)() = A;

	// now we will call the function B passing the function pointer p
	B(ptr);

	/*
		as function name returns the address of the function,below syntax is also correct.

		when reference of a function is passed to another function, then that particular function is called call back function
	*/
	B(A);	//A is call back function


	return 0;

}