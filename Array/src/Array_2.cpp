/*
	character array and pointer

	arrays are always passed to funcstion by reference and not the whole array.
*/


#include <iostream>

int main()
{
	char c1[6] = "Hello";

	char* c2 = c1; // <-- referencing the address of 0th element

	char c3[20];

	/*
		this will give you the compile time error as c3 is address of the first character of the array.

		value cannot be stored in value so basically it is not variable which is modifiable
	*/
	//c3 = "Hello";	

	std::cout << c2[1] << std::endl;

	std::cout << *(c2 + 1) << std::endl;

	return 0;
}