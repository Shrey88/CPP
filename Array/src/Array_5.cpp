/*
	Pointers and multidimensional arrays
*/

#include<iostream>

int main()
{
	/*
		we are creating array of array
		we are creating 2 1-dimensional array of 3 elements each.
	*/
	int B[2][3]{ {1,2,3},{4,5,6} };

	// both are one dimensional array of 3 integers each.
	B[0];
	B[1];

	/*
		here the first element of array B is not integer but a one dimensional array.
		so writing below expression will give compile time error.
	*/
	//int* p = B; // <--B is returning the address of one dimensional array containing 3 integers.

	//we have to define the pointer to 1D array of 3 integers like this 
	int(*p)[3] = B;

	// this will give the starting address of the 1st integer of 1st 1D array of B
	std::cout << "B :: " << B << "\t" << "&B[0] :: " << &B[0] << std::endl;
	std::cout << "B + 0 :: " << B + 0 << std::endl;

	std::cout << std::endl;

	//this will give us the address to the 1st integer of 1-Dimensional array of i.e B[0] 
	std::cout << "*B :: " << *B << "\t" << "B[0] :: " << B[0] << std::endl;
	std::cout << "*(B + 0) :: " << *(B + 0) << std::endl;

	std::cout << std::endl;

	// this will give us the address of 1st element of 1-Dimensional array
	std::cout << "B[0]+0 :: " << B[0] + 0 << std::endl;
	std::cout << "*(B + 0) + 0:: " << *(B + 0) + 0 << std::endl;
	std::cout << "&B[0][0] :: " << &B[0][0] << std::endl;

	std::cout << std::endl;

	//getting the value of B[0][0]
	std::cout << "Value of *(*(B + 0) + 0) :: " << *(*(B + 0) + 0) << std::endl;
	std::cout << "Value of *(B[0] + 0) :: " << *(B[0] + 0) << std::endl;
	std::cout << "Value of B[0][0] :: " << (B[0][0]) << std::endl;

	return 0;

}