/*
	sizeof tells you the size of the variable.
		int		-->		4 bytes
		float	-->		4 bytes
		char	-->		1 byte
		double	-->		8 byte

	here we are going to find the size of the single array i.e the number of elements in an array
*/

#include<iostream>

int main(int argc, char* argv[])
{
	int values[] = { 4, 7, 3, 5 };

	/*
		this will return 16 bytes:
			i.e 4 bytes x no of values/elements
	*/
	std::cout << sizeof(values) << std::endl;

	/*
		this will return 4 bytes:
			i.e. int variable consumes 4 bytes of space
	*/
	std::cout << sizeof(int) << std::endl;


	/*
		finding the no of values in array:
			i.e total no of bytes / no of bytes of a single int
	*/

	std::cout << "No of elements/values in an array :: " << sizeof(values) / sizeof(int) << std::endl;
	
	
	return 0;
}