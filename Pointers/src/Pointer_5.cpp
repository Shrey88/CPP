/*
	Pointers and Arrays
	

*/

#include<iostream>

int main()
{
	// this is an array of 5 int
	int A[5]{ 1,2,3,4,5 };

	// this is pointer  to integer variable
	int* p;

	/*
		referencing the array to the pointer.
	*/

	
	
	/*
		one way of referencing the array
		
		here A is representing &A[0], 
		
	*/
	p = A;
	std::cout << "Address of A :: A :: " << A << std::endl;
	std::cout << "Address of A :: &A :: " << &A << std::endl;
	std::cout << "Address of p :: " << &p << std::endl;
	
	std::cout << std::endl << std::endl;

	/*
		second way of referencing the array 

		Referencing ways: you can provide the address of any element in the array.
					1. &A[i]
					2. (A + i)
	*/

	p = &A[2];
	std::cout << "1. Address of 2nd element :: &A[2] :: " << &A[2] << std::endl;
	std::cout << "2. Address of 2nd element :: (A + 2) :: " << (A + 2) << std::endl;


	std::cout << std::endl << std::endl;



	/*
		Dereferencing the pointer variables

		De-Referencing ways:
					1. A[i]
					2. *(A + i)
	*/
	
	// dereferencing the pointer variable pointing to the ith element of array A.
	std::cout << "Pointer dereferencing value :: " << *p << std::endl;
	// p is pointing to the 3rd element of the array. on line no 44
	std::cout << "Pointer dereferencing value :: *(p+i) :: " << *(p + 0) << std::endl;
	std::cout << "Pointer dereferencing value :: p[i] :: " << p[0] << std::endl;
	// dereferencing the array 
	std::cout << "1. Value of 2nd element :: A[2] :: " << A[2] << std::endl;
	std::cout << "2. Value of 2nd element :: *(A + 2) :: " << *(A + 2) << std::endl;
	
	// it will print the the 1st value of array
	std::cout << "3. Value of ith element :: *A :: " << *(A) << std::endl;
	

	/*
		incrementing the address of array A will give you compilation error.
		but if you assign the address of array A to pointer variable and then increment the 
		pointer variable it will work
	*/
	//++A; // will not work.
	int* p1 = A;
	++p1;

	return 0;
}