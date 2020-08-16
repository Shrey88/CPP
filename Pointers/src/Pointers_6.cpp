/*
	void pointers are generic pointers and we can cast them to a pointer of any data type.
*/


#include<iostream>

void sum(const void* a, const void* b)
{

	/*
		we are type casting the void pointers to int* as we pass the address of int variable from the main function

		void pointers are pointing to the same address.

		for dereferencing the address we will use pointer
	*/
	std::cout << "a :: " << (int*)a << std::endl;
	std::cout << "b :: " << (int*)b << std::endl;
	std::cout << "a :: " << *((int*)a) << std::endl;
	std::cout << "b :: " << *((int*)b) << std::endl;

	int x = *((int*)a),	// first we are typecasting it to int* and then dereferencing the address of main local variable a
		y = *((int*)b); // first we are typecasting it to int* and then dereferencing the address of main local variable b

	
	std::cout << x + y << std::endl;

}


int main()
{
	int a = 10;

	int b = 12;

	sum(&a, &b);

	return 0;
}