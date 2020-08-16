/*
	Pointer and Multidimensional Array

	Pointer to an Array
*/

#include<iostream>


int main()
{
	/*
		1-Dimensional Array
	*/
	int B1[5]{ 1,2,3,4,5 };
	
	/*
		if you are just creating a pointer without mentioning the column size then, you can just mention the variable 
		B1 or &B1[0] because you are pointing to the address of the 1st element of the array
	*/
	int* p1 = B1;

	std::cout << p1[0] << std::endl;
	++p1;
	std::cout << *p1 << std::endl;
	std::cout << *(p1 + 1) << std::endl;

	std::cout << std::endl << std::endl;
	/*
		we have created a pointer to an array, size of the array is mandatory.
		when we are creating a pointer to array variable by giving the column size
		then you need to assign the address of B by using "&" reference sign.

		here we have declared a pointer that points to the whole array instead of one element of the array.
		here we are saying the p2 is pointer to an array of 5 integers.

		here i observe one thing that can go wrong is i wont be able to tell whether 
		this is 1-dimensional array or 2-dimensional array
		so its better to use above syntax of declaring the pointer to array.
	*/
	int(*p2)[5] = &B1; //<-- address of B's first integer will be assigned to p2
	std::cout << "Value of B1 :: " << &B1 << std::endl;
	std::cout << "Value of p2 :: " << p2 << std::endl;	//<-- gives the address of B1
	std::cout << "dereferencing value of p2:: " << *p2 << std::endl; //<-- gives the address of B1
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*p2)[0] :: " <<(*p2)[0] << std::endl;//<-- you can think this as B1[0]
	std::cout << "Value of 1st element :: *(*p2 +0) :: " << *(*p2 +0) << std::endl;//<-- you can think this as *(B1 + 0)
	
	++p2; // this will shift the p2 forward by 20 bytes of memory.

	std::cout << std::endl<< std::endl;

	/*
		2-Dimensional Array
	*/
	int B2[2][3]{ 
					{2,4,6}, 
					{5,7,8} 
	};

	/*
		so B2 will return the address to 1-Dimensional array of 3 integers

		we have declared a pointer to 1-dimensional array of 3 integers

		we have created a pointer to an array, size of the array is mandatory.
		when we are creating a pointer to array variable by giving the column size
		then you need to assign the address of B2.
	*/
	int(*p3)[3] = B2;
	std::cout << "Address of B2 :: " << &B2 << std::endl;
	std::cout << "Value of B2 :: " << B2 << std::endl;
	std::cout << "Value of p3 :: " << p3 << std::endl;	//<-- gives the address of B2
	std::cout << "dereferencing value of p3:: " << *p3 << std::endl; //<-- gives the address of B2
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*p3)[0] :: " << (*p3)[0] << std::endl;//<-- you can think this as B2[0][0]
	std::cout << "Value of 1st element :: *(*p3 +0) :: " << *(*p3 + 0) << std::endl;//<-- you can think this as *(*(B2 + 0)+0)
	std::cout << "Value of 1st element :: *((*p3 + 0)+1) :: " << *((*p3 + 0)+1) << std::endl;//<-- you can think this as *(*(B2 + 0)+1)
	std::cout << std::endl;

	/*
		address can be incremented here as we are assigning the address of only 1 1-dimensional array 
		and not the complete 2 dimensional array.
	*/
	++p3; //can also be written as *++p3;

	std::cout << "Value of p3 :: " << p3 << std::endl;	//<-- gives the address of B2
	std::cout << "dereferencing value of p3:: " << *p3 << std::endl; //<-- gives the address of B2
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*p3)[0] :: " << (*p3)[0] << std::endl;//<-- you can think this as B2[1][0]
	std::cout << "Value of 1st element :: *(*p3 +0) :: " << *(*p3 + 0) << std::endl;//<-- you can think this as *(*(B2 + 1)+0)
	std::cout << "Value of 1st element :: *((*p3 + 0) + 1) :: " << *((*p3 + 0) + 1) << std::endl;//<-- you can think this as *(*(B2 + 1)+1)
	
	/*
		second example 
	*/
	int(*p4)[2][3] = &B2; // this will allocate the complete 2-dimensional array 

	//incrementing the p4 will give you the address of next 24 bytes.
	++p4; //similar to what we saw in case of 1-dimensional array
	
	


	/*
		3-Dimensional Array
	*/
	int B3[3][2][2]{ { {1, 2},  {3, 4}   },
					{ {5, 6},  {7, 8}   },
					{ {9, 10}, {11, 12} }
					};

	/*
		so B3 will return the address to 1st 2-Dimensional array (which in turn is the address of fthe 1st
		1-Dimensional array which in turn is the address of its 1st element)

		we have declared a pointer to 3-dimensional array of 2 1-dimensional array of 2 integers

		we have created a pointer to an array, size of the array is mandatory.
		when we are creating a pointer to array variable by giving the column size
		then you need to assign the address of B3
	*/
	int(*p5)[2][2] = B3;
	std::cout << "Address of B3 :: " << &B3 << std::endl;
	std::cout << "Value of B3 :: " << B3 << std::endl;
	std::cout << "Value of p5 :: " << p5 << std::endl;	//<-- gives the address of B3
	std::cout << "dereferencing value of p3:: " << *p5 << std::endl; //<-- gives the address of B3
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*p5)[0][0] :: " << (*p5)[0][0] << std::endl;//<-- you can think this as B3[0][0][0]
	std::cout << "Value of 1st element :: *(*(*p5 + 0)+0) :: " << *(*(*p5 + 0)+0) << std::endl;//<-- you can think this as *(*(*(B3 + 0)+0)+0)
	std::cout << "Value of 1st element :: *(*(*p5 + 0) + 1) :: " << *(*(*p5 + 0) + 1) << std::endl;//<-- you can think this as *(*(*(B3 + 0)+1)+0)
	std::cout << std::endl;

	/*
		address can be incremented here as we are assigning the address of only 1 1-dimensional array
		and not the complete 2 dimensional array.
	*/
	++p5; //can also be written as *++p5;
	std::cout << "Value of p5 :: " << p5 << std::endl;	//<-- gives the address of B2
	std::cout << "dereferencing value of p5:: " << *p5 << std::endl; //<-- gives the address of B2
	std::cout << std::endl;
	std::cout << "Value of 1st element :: (*p5)[0][0] :: " << (*p5)[0][0] << std::endl;//<-- you can think this as B3[0][0][0]
	std::cout << "Value of 1st element :: *(*(*p5 + 0)+0) :: " << *(*(*p5 + 0) + 0) << std::endl;//<-- you can think this as *(*(*(B3 + 0)+0)+0)
	std::cout << "Value of 1st element :: *(*(*p5 + 0) + 1) :: " << *(*(*p5 + 0) + 1) << std::endl;//<-- you can think this as *(*(*(B3 + 0)+1)+0)

	/*
		second example
	*/
	int(*p6)[2][3] = &B2; // this will allocate the complete 2-dimensional array 

	//incrementing the p6 will give you the address of next 48 bytes.
	++p6; //similar to what we saw in case of 1-dimensional array


	return 0;
}