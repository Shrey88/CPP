/*
	passing array as an argument to the function

	why are we not getting the desired array size when we try to find it inside the function 

	

	** so let's understand the stack 

		--> when the main function is called, main function will hold the memory in the 
			stack and in its stack frame it will contain .

			--> size of array i.e 20bytes  = size of each byte of type int (i.e 4) * no of elements(i.e. 5)

			--> another 4 bytes of memory will be allocated to total variable 

			--> now for function sumofelements another stack memory will be allocated for it and it will 
				have its own stack frame for the variables and function local to it.

				--> so here we have recieved the copy of array from main function, but it will not copy the 
					complete array instead it will create of pointer of type of array and that pointer will 
					point hold the address of the first element of the array which is in the stack frame of 
					the main function.

				--> compiler implicitly converts the int A[] in the function parameter as int *A		

				--> creating the new array will unneccessarily occupy more memory, so for array there is
					never call by value, there is always call by reference.

		--> so when we pass the array to the function, there is no way to find the no of elements in the 
			array by getting the sizeof array divided by sizeof int, so we need to pass the sizeof array 
			explicitly to the function.


*/



#include<iostream>

int sumofElements(int A[]);


int main()
{
	int A[]{ 1,2,3,4,5 };

	int total = sumofElements(A);

	std::cout << "sum of elements :: " << total << std::endl;

	return 0;
}


int sumofElements(int A[])
{
	int i = 0, sum = 0; 

	// this will not work here because we have recieved the addres of the 1st element of the array.
	//int array_size{ sizeof(A) / sizeof(A[0]) };

	/*
		so this is not giving us the correct sizeof array A
		you have to pass the size of the array as parameter to the function
	*/
	std::cout << "Size of complete array A :: " << sizeof(A) << std::endl;
	std::cout << "Size of one element in the array :: " << sizeof(A[0]) << std::endl;

	/*for (; i < array_size; i++)
	{
		sum = sum + A[i];
	}*/

	return sum;
}