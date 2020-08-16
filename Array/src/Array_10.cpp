/*
	Dynamic memory allocaton for 1-dimensional char array.
*/
#include<iostream>

int main()
{
	/*
		declaring the variable on heap memory 1-dimensional array

		here we are allocating the 20 block of memory each of size of char
		 and returning the address of the first block.
	*/
	char* b1 = (char*)malloc(sizeof(char) * 20); 
	// since nothing is assigned not even the end of character, it will print the garbage value 
	//std::cout << "Value of b1 :: " << b1 << std::endl;

	/*
		to copy a string into pointer variable you can use the cstring methods predefined.

		or if you want to copy using code you need to copy one character at a time into each block.
	*/
	strcpy_s(b1, 20, "Shreyas");// specify the size of the destination 
	std::cout << "Value of b1 :: " << b1 << std::endl;// this will give you the complete string 
	std::cout << "Value of *b1 :: " << *b1 << std::endl;// this will give you the first char of the array
	std::cout << "Address of b1 :: " << &b1 << std::endl;// this will give you the address of b1

	std::cout << std::endl;

	/*
		if you do this with the int array then it would return the address of that element.

		but if you try to do the same with the char array/pointer to char array it will print the value at the first element.
	*/
	std::cout << "Value of b1 :: " << &b1[0] << std::endl;
	char b2[]{ "Shreyas" };
	std::cout << "Value of b2 :: &b2[0] :: " << &b2[0] << std::endl;
	int a[4]{ 1,2,3,4 };
	std::cout << "Address of the 1st element of the array :: &a[0] :: " << &a[0] << std::endl;

	std::cout << std::endl << std::endl;

	//++b1; // address of b1 has changed now creating a memory leak

	char* temp = b1; // to avoid memory leak if we are incrementing the address declare another pointer variable and assign the address b1 is pointing to.
	std::cout << "Address of temp before incrementing :: " << &temp << std::endl;
	++temp;
	std::cout << "Address of temp after incrementing :: " << temp+0 << std::endl;
	std::cout << "Value of b1 :: " << b1 << std::endl;// this will give you the complete string 
	std::cout << "Value of temp :: " << temp << std::endl;// this will give you the complete string 

	std::cout << std::endl << std::endl;

	/*
		C++ style memory allocation
	*/
	char *a2 = new char[20];//this allocates the 20 blocks of memory on heap.
	// since nothing is assigned not even the end of character, it will print the garbage value 
	//std::cout << "Value of a2 :: " << a2 << std::endl;

	strcpy_s(a2, 20, "Shreyas");
	std::cout << "Value of a2 :: " << a2 << std::endl;
	std::cout << "Address of a2 :: " << &a2 << std::endl; // this will give the starting address of block of memory
	std::cout << "Value of *b1 :: " << *a2 << std::endl;// this will give you the first char of the array
	std::cout << "Address of b1 :: " << &a2[0] << std::endl;// this will print the complete string.

	/*
		for freeing the dynamic memory of array you need to pass the starting address of the array.
	*/
	free(b1);
	/*
		if you try to free the address temp is holding will throw exception because you have already deleted the 
		address in the previous step.
	*/
	//free(temp); 
	/*
		in case of C++ you need to use delete keyword with [] and the variable name that contains the starting address
		of the dynamic array.
	*/
	delete[] a2;

	return 0;
}