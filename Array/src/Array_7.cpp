/*
	Pointer and Multidimensional Array
*/

#include<iostream>


int main()
{
	// 3D array is basically array or collection of 2D array.
	int B[3][2][2]{ { {1, 2},  {3, 4}   },
					{ {5, 6},  {7, 8}   },
					{ {9, 10}, {11, 12} }
					};

	// this will give the address to the 1st 2D array of B
	std::cout << "B :: " << B << "\t" << "&B[0] :: " << &B[0] << std::endl;
	std::cout << "B + 0 :: " << B + 0 << std::endl;

	std::cout << std::endl;

	//this will give us the address to 1 D array of 1st 2D array
	std::cout << "*B :: " << *B << "\t" << "B[0] :: " << B[0] << std::endl;
	std::cout << "*(B + 0) :: " << *(B + 0) << std::endl;
	std::cout << "B[0]+0 :: " << B[0] + 0 << std::endl; // <-- this is giving the address of 1st element of 1D array
	std::cout << "&B[0][0] :: " << &B[0][0] << std::endl;

	std::cout << std::endl;


	//this will give us the address to 1st element of 1 D array of 1st 2D array
	std::cout << "*(*B) :: " << *B << "\t" << "B[0][0] :: " << B[0][0] << std::endl;
	std::cout << "*(*(B + 0)+0) :: " << *(*(B + 0) + 0) << std::endl;
	std::cout << "*(B[0]+0)+0 :: " << *(B[0] + 0)+0 << std::endl; // <-- this is giving the address of 1st element of 1D array
	std::cout << "&B[0][0][0] :: " << &B[0][0][0] << std::endl;

	std::cout << std::endl;

	//getting the value of B[0][0][0]
	std::cout << "B[0][0][0] :: " << *(*(*(B + 0) + 0)+0) << std::endl;
	std::cout << "B[0][0][0] :: " << *(*(B[0] + 0) + 0) << std::endl;
	std::cout << "B[0][0][0] :: " << *(B[0][0]+0) << std::endl;



	return 0;
}