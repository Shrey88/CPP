/*
   giving a reference another name to a varaible.
*/

#include<iostream>

void allocate(int*& a);

int main()
{
	/*
		variable "a" has been assigned some memory block on stack.
	*/
	int a = 10;
	std::cout << "Address of a :: " << &a << std::endl;
	std::cout << "Value of a :: " << a << std::endl << std::endl;

	/*
		variable "c" has also been assigned some memory block on stack.

		but the variable "c" holds the address of a

		so we can use the dereference operator to get the value stored in variable "a"
	*/
	int* c = &a;
	std::cout << "Reference in c :: " << c << std::endl;
	std::cout << "Address of c :: " << &c << std::endl;
	std::cout << "Value in c :: " << *c << std::endl << std::endl;

	/*
		variable "b" is the alias name for the same block of memory that variable "a" is pointing to
		
		observation:
			here if you observe b will have the value of a. 
	*/
	int& b = a;
	std::cout << "Reference in b :: " << b << std::endl;
	std::cout << "Address of b :: " << &b << std::endl << std::endl;

	/*
		since variable d is nothing but the alias name/another name given to the same address.
		
		observation:
			variable "d" is the alias name for the variable "c"
			but the value will be of variable a since we are dereferencing the address present in the variable "c"
	*/
	int& d = *c;// we are trying to give the another name to the same block of address of i
				// so p is not a another variable on stack.
	std::cout << "Reference in d :: " << d << std::endl;
	std::cout << "Address of d :: " << &d << std::endl << std::endl;


	/*
		"e" is the alias name for the same block of memory where variable "c" is pointing

		this is called reference to pointer.

		c  = address of a i.e. say 100.

		&e = address of c i.e e and c are the variable for same address 200

		reference to pointer means
		*e or *c will give me the address of a which it is holding .
		and 
		& will give me the address of that value which in turn returns the address of variable "a"
	*/
	int*& e = c;
	std::cout << "Reference in e :: " << e << std::endl; // it holds the address of variable "a"
	std::cout << "Address of e :: " << &e << std::endl;	// since e is alias name it is having the address of c
	std::cout << "Value of *e :: " << *e << std::endl;	// dereferencing the address of a will give the value of e
	std::cout << "what is this initialization :: " << *&e << std::endl << std::endl;// dereferencing the address of e/c so we will get the address of a.
    
	
	allocate(c);
	std::cout << "Value of c :: " << *c << std::endl;
	std::cout << "Value of a :: " << a << std::endl;

	return 0;
}

void allocate(int*& e) // reference to pointer.
{
	/*
		we have passed the address of a that is in the variable "c"

		First - it will dereference the address in variable e which will give me the address of a.

		Second - it will reference the value of a i.e give the address of a. 
	*/

	//that is why we have used derefence operator here. 
	// so you can consider this as call by reference
	*e = 11;

	// here we are making "a"(available on static block) point to the starting address of the new block of contiguous memory(dyamic memory).
	e = new int[10];
}