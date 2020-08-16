/*
	array of pointers 

	there may be situations when we want to maintain an array, which can store pointers to an int or char or 
	any other data type.

	this is happening completely on stack memory.
*/

#include<iostream>

int main()
{
	//declaration
	int* p[5];

	/*
		assigning the values
		
		to assign the values you need to point each block of array to the address of the another variable.

		here we are taking an array and referencing the address or each array element to the 
	*/
	int arr[]{ 1,6,7,4,9 };

	int i = 0;
	while (i < 5)
	{
		p[i] = &arr[i]; // so we are referencing the array elements into the array of pointer
		++i;
	}

	i = 0;
	while (i<5)
	{
		/*
			so p[i] will give us the address and using the dereferencing operator we are trying to get the value 
			at that address.
		*/
		std::cout << *p[i] << std::endl; // so we are dereferencing the array of pointer
		++i;
	}


	/*
		declaring the array of pointer of char type

		compiler will not allow you to have char* and assign values to it, it has to be const char 

		why the char pointer or array of pointer of type char does not require dereference operator is because 
		it takes the address of the starting block and iterates it till it finds the null character('\0')
		in the string

		in main function second parameter we define is of type array of pointers;
	*/
	const char* names[]{ "James", "Sunny", "Sunmeet" };
	i = 0;
	while (i < 3)
	{
		std::cout << names[i] << std::endl;
		++i;
	}

	return 0;

}
