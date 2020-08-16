/*
	sizeof tells you the size of the variable.
		int		-->		4 bytes
		float	-->		4 bytes
		char	-->		1 byte
		double	-->		8 byte

	here we are going to find the size of the multidimensional array 
	i.e the number of elements in an array of array
*/

#include<iostream>

int main(int argc, char* argv[])
{
	int values[][4] = {
		{ 4, 7, 3, 5 },
		{ 3, 5, 7, 2 }
		};

	/*
		this will return 32 bytes:
			i.e 4 bytes x no of values/elements from one array * no of array
			inside one array we have 2 more arrays
	*/
	std::cout << sizeof(values) << std::endl;

	/*
		this will return 16 bytes:
			i.e. no of elements in one array * no of byte occupied by the single int
	*/
	std::cout << sizeof(values[0]) << std::endl;

	/*
		this will return 4 bytes:
			i.e. int variable consumes 4 bytes of space
	*/
	std::cout << sizeof(int) << std::endl;


	/*
		finding the no of arrays:
			i.e total no of bytes(considering all arrays) / no of bytes of a single array
			i.e. 32/16
	*/
	std::cout << "No of arrays :: " << sizeof(values) / sizeof(values[0]) << std::endl;

	/*
		finding the no of elements/values in each array:
			i.e total no of bytes(considering single array) / no of bytes of a int
			i.e. 16/4
	*/
	std::cout << "No of elements in an array :: " << sizeof(values[0]) / sizeof(int) << std::endl;


	return 0;
}