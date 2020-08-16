/*
	Pointers and multidimensional arrays

	Pointer to an Array - in form of argument to the function.
*/

#include<iostream>

/*
	this is how the function declaration will look like for arrays
*/

// 1D Array
void func1(int* A) {};
void func1(int A[]) {};
void func1(int(*A)[3]) {}; //<--avoid this for 1-Dimensional array. Refer Array_6 for reason behind it

//2D Array
void func2(int(*B)[3]) {}; //<-- mentioning the columns size is mandatory
void func2(int B[][3]) {};	//<-- mentioning the columns size is mandatory
void func3(int(*B)[2][2]) {};//<--avoid this for 2-Dimensional array. Refer Array_6 for reason behind it


//3D Array
void func3(int(*C)[2][2]) {};//<-- mentioning the row and column size is mandatory
void func3(int C[][2][2]) {};//<-- mentioning the row and column size is mandatory
void func3(int(*C)[3][2][2]) {};//<--avoid this for 3-Dimensional array. Refer Array_6 for reason behind it



int main()
{
	

	int A[2]{ 1, 2 };	// A returns the address of 1st element in the array. i.e int *
	func1(A);

	int B[2][3]{ {2,4,6}, {5,7,8} }; // B returns address of the 1st 1-Dimensional array.
	func2(B);

	int C[3][2][2]{ 
					{ {1, 2},  {3, 4} }, 
					{ {5, 6},  {7, 8} },
					{ {9, 10}, {11, 12} }	
				};	// C returns address of the 1st 2-Dimensional array.						
	func3(C);
}