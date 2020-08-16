/*
	Pointer with respect to new keyword

	the new operator is an operator which denotes a request for memory allocation on the heap.
	if the sufficient memory is available, new operator initializes the memory and returns the address
	of the newly allocated and initialized memory to the pointer variable

	when you create an object of class using new keyword(normal new)
		the memory for the object is allocated using operator new from heap.
		the constructor of the class is invoked to properly initialize this heap.
*/
#include <iostream>


class A {

public:
	A();
	void display_A();
};

A::A() {

};

void A::display_A() {
	std::cout << "Class A" << std::endl;
};



class B{

public:
	B();
	void display_B();
};

B::B() {

};

void B::display_B() {
	std::cout << "Class B" << std::endl;
};


int main() {
	
	/*
		here we are creating a pointer of type class A and B because new operator will return the address of block of memory that has been created
		on the heap
	*/
	A* a = new A();
	B* b = new B();

	a->display_A();
	b->display_B();
	
	/*
	*/
	delete a;
	return 0;
}