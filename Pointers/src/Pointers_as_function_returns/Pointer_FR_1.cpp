/*
	Pointers  as return types for functions.

	Pointer is just another data type

	It's just the pointer that stores the address of anothet data type.

	so its quite possible for fucntion to return pointer.

*/

#include<iostream>
void printHelloWorld()
{
	std::cout << "Hello World" << std::endl;
}

int* Add(int* a, int* b)	//<-- called function - returns the pointer to integer
{
	int c = *a + *b;	// variable c is on the stack frame of Add method.

	return c;
}

int main()
{
	int a = 2, b = 4;

	int* ptr = Add(&a, &b);
	printHelloWorld();

	/*
		so what happened here exactly is: 
		when the Add method is called we are passing the address of two variables that are local to main.

		we added up the value of the two varaible and returned the address of the varaible that is local to the Add method.

		now when the execution of the Add method is completed the stack frame for the Add method will be deallocated.

		and it will be used for the some other local variable of the some other method or function.

		so it is giving us some garbage value

		so it's ok to pass the address of the variable from bottom to top i.e (passing as call by reference)

		but it's not ok to pass the address of the variable from top to bottom i.e. (returning the address of the variable local to that function.
	
		so now the questions would be what are the use cases in which we may want to return pointers from the functions:
			
			well if we have address of some memory block in the heap section or some memory block in global section.
			then we can safely return the address of these blocks, because anything on the heap has to be explicitly deallocated

			whatever is there in global remains for the entire lifetime of the program.

		so you can allocate some memory on the heap and point the c variable to that address and return the address of that.
	*/
	std::cout << *ptr << std::endl;	// it is not printing the correct value of c instead it is printing some garbage value.
	return 0;
}