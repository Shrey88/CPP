/*
	 Dynamic memory allocaton for 2-Dimensional char Array
*/

#include<iostream>

int main()
{
	/*
		declaring the variable on heap memory 2-dimensional array

		here we are allocating the 2 block of memory each of size of char*(size of pointer is always 4 bytes)
		 and returning the address of the first block.

		 since we are declaring pointer to pointer varaible in malloc we should take the size of pointer data type.
	*/
	char** b1 = (char**)malloc(sizeof(char*) * 2);
	//std::cout << "Value of b1[0] ::" << b1[0];//if tried to access here you will get an exception

	/*
		now we will create another 1-dimensional array for each block
		so we have created 2 array/2 block and each array or block will now contain 20 blocks
	*/
	*(b1+0) = (char*)malloc(sizeof(char) * 20);

	b1[1] = (char*)malloc(sizeof(char) * 20);

	std::cout << "Address of &b1 :: " << &b1 << std::endl;// addres of the variable b1
	std::cout << std::endl;

	std::cout << "Value of b1 :: " << b1 << std::endl; // address of the first block on heap
	std::cout << "Address of b1[0] ::" << &b1[0] << std::endl;//address of the first block on heap
	std::cout << "Address of &b1[0] ::" << b1 + 0 << std::endl;//address of the first block on heap
	std::cout << std::endl;

	std::cout << "Address of &b1[1] ::" << &b1[1] << std::endl;//address of the first block on heap
	std::cout << "Address of &b1[1] ::" << b1 + 1 << std::endl;//address of the first block on heap
	std::cout << std::endl;

	/*
		to copy a string into pointer variable you can use the cstring methods predefined.

		or if you want to copy using code you need to copy one character at a time into each block of 1st array
		[0][0], [0][1] ......
	*/
	strcpy_s(b1[0], 20, "Shreyas");// specify the size of the destination 
	strcpy_s(b1[1], 20, "Potdar");// specify the size of the destination


	std::cout << "Value of b1[0] :: " << b1[0] << std::endl; // gives the complete string
	std::cout << "Value of b1[0][0] :: " << b1[0][0] << std::endl; // gives the 1st character of b1[0][0]
	std::cout << "Value of *(b1+0) ::" << *(b1 + 0);//gives the 1st character of the 1st block
	std::cout << "Value of  *(*(b1+0)+0) :: " << *(*(b1 + 0) + 0) << std::endl; // gives the 1st character of b1[0][0]
	std::cout << "Value of  *(b1[0]+0) :: " << *(b1[0] + 0) << std::endl; // gives the 1st character of b1[0][0]
	std::cout << "Address of &b1[0][0] ::" << &b1[0][0] << std::endl;//gives the complete string

	std::cout << std::endl << std::endl;

	std::cout << "Value of b1[1] :: " << b1[1] << std::endl; // gives the complete string
	std::cout << "Value of b1[1][0] :: " << b1[1][0] << std::endl; // gives the 1st character of b1[1][0]
	std::cout << "Value of *(b1+1) ::" << *(b1 + 1);//gives the 1st character of the 2nd block
	std::cout << "Value of  *(*(b1+1)+0) :: " << *(*(b1 + 1) + 0) << std::endl; // gives the 1st character of b1[1][0]
	std::cout << "Value of  *(b1[1]+0) :: " << *(b1[1] + 0) << std::endl; // gives the 1st character of b1[1][0]
	std::cout << "Address of &b1[1][0] ::" << &b1[1][0] << std::endl;//gives the complete string


	std::cout << std::endl;

	
	/*
		C++ style memory allocation

		here we are allocating the 2 block of memory each block containing another 20 blocks of memory
		we don't have to iterate each block and assign 20 blocks as it is already taken care.

		in case you have usd c style in c++ then you have to specify the columns

		int** a = new int*[rowCount];
		for(int i = 0; i < rowCount; ++i)
			a[i] = new int[colCount];
	*/
	char (*a2)[20] = new char[2][20]; // since it is returning the address of 2 dimensional array we have declared in this way
	
	
	/*
		to copy a string into pointer variable you can use the cstring methods predefined.

		or if you want to copy using code you need to copy one character at a time into each block of 1st array
		[0][0], [0][1] ......
	*/
	strcpy_s(a2[0], 20, "Shreyas");// specify the size of the destination 
	strcpy_s(a2[1], 20, "Potdar");// specify the size of the destination 


	std::cout << "Value of a2 :: " << a2 << std::endl; // gives the address of the 1st memory block
	std::cout << "dereferencing value of *a2:: " << *a2 << std::endl; //gives the complete string of the first array
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*a2)[0] :: " << (*a2)[0] << std::endl;//give you the 1st character of 1st array
	std::cout << "Value of 1st element :: *(*a2 +0) :: " << *(*a2 + 0) << std::endl; // give you the 1st character of 1st array
	std::cout << "Value of 1st element :: *((*a2 + 0)+1) :: " << *((*a2 + 0) + 1) << std::endl;// give you the 2nd character of 1st array
	std::cout << std::endl;
	
	++a2; // this is required to make pointer point to next block of a2 having 1D array.

	std::cout << "Value of a2 :: " << a2[1] << std::endl; // gives the complete string of the second array
	std::cout << "dereferencing value of *a2:: " << *a2 << std::endl; //gives the complete string of the second array
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*a2)[0] :: " << (*a2)[0] << std::endl;//give you the 1st character of 2nd array
	std::cout << "Value of 1st element :: *(*a2 +0) :: " << *(*a2 + 0) << std::endl;// give you the 1st character of 2nd array
	std::cout << "Value of 1st element :: *((*a2 + 0)+1) :: " << *((*a2 + 0) + 1) << std::endl;// give you the 2nd character of 2nd array

	--a2;

	std::cout << std::endl;

	
	/*
		freeing memory in the 2-Dimensional array
		iterate through the B1
	*/
	int i = 0;
	while (i < 2)
	{
		free(b1[i]);
		++i;
	}
	free(b1);
	//C++ style
	i = 0;

	while (i < 2)
	{
		delete[] a2[i];
		++i;
	}
	

	return 0;


}