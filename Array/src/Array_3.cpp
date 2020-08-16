/*
	Character array and pointers

	--> code segment stores the instructions of the program

	--> pointer takes a 4 byte of memory in typical architecture.
*/


#include<iostream>

// as we mentioned that passing array to function, compiler implicitly treats it as int * 
// that is pointer to the 0th element of the array.
void print(char* c)
{
	*(c + 0) = 'A';	// it allows me to change the value at the index

	while (*c != 0) // *c is nothing but *(c+i) or c[i]
	{
		std::cout << *c <<std::endl; //*c is nothing but *(c+i) or c[i]

		

		c++;	// incrementing the memory address;
	}

	std::cout << std:: endl;

}


int main()
{
	char c[20] = "hello";

	print(c);

	return 0;
}