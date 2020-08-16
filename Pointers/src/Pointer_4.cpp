/*
	Pointer to Pointer
*/


#include<iostream>

int main(){

	int x = 5;
	int* p = &x; //<-- referencing the address of x in p
	*p = 6;	//<-- here we have change the value of x to 6. 
	
	// here we are dereferencing the varaible p to get the actual value.
	std::cout << *p << std::endl;


	/*
		this is pointer to pointer

		*p = 6 <-- p has an address of 6, so to dereference it we write *p

		**q = &p <-- q will hold the address of *p,
					you can interpret **q as *(*(p))
					*(*(address of value stored on some memory address) <-- address of pointer p)
	*/
	int** q = &p; // here we are referencing the varaible p i.e. storing the address of p in q
	std::cout << *q << std::endl;
}