
/*
	Understanding the pointers concept 
*/
#include <iostream>


void func(int** c)
{
	std::cout << "Address of c :: " << &c << std::endl;
	std::cout << "Value of c is the address of b :: " << c << std::endl << std::endl;

	std::cout << "value at address of b :: " << *c << std::endl;
	/*
		so if you see here *c gives me the value at the address (the variable c was holding)
		
		which is nothing but the address of another variable(this is still a value for a paritcular 
		address that is stored on the memory to acces)

		now if you want to find the address of this value on the memory block you need to reference it 
		and for referencing it we user & operator.

	*/
	std::cout << "&(*c) :: " << &(*c) << std::endl;
	std::cout << "value at the address of a:: " << **c << std::endl;
}

int main()
{
	int a = 10;

	int* b = &a;

	std::cout << "Address of a :: " << &a << std::endl << std::endl;

	std::cout << "Address of b :: 1 :: " << &b << std::endl;
	std::cout << "Value of b is the address of a:: 2 :: " << b << std::endl;
	

	func(&b);

	return 0;

}