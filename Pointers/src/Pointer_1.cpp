/*
	In this example we have used ampersand sign (&). This sign is called the reference operator. 
	
	If the reference operator is used you will get the “address of” a variable. 
	
	In this example we said: ptr_p = &x;. In words: store the address of the variable x in the 
	pointer ptr_p.

	We also used the asterisk sign (*) in the cout statement. 
	This sign is called the dereference operator. 
	If the dereference operator is used you will get the value at the address stored in the pointer variable. 
	So we said: cout << *ptr_p;. In words: print (or put into the stream) the value pointed 
	by ptr_p. (It will print the contents of integer x.)

	Note: 
		The asterisk (*) sign in the declaration of the pointer does not mean 
		“value pointed by”, it only means that it is a pointer 
		(it is part of its type compound specifier). 
		It should not be confused with the dereference operator. 
		They are simply two different things represented with the same sign.

	So we can say:

		& is the reference operator and can be read as “address of”.
		* is the dereference operator and can be read as “value pointed by”.
*/

#include <iostream>

class Pointer_1
{
public:
	int x;

	int* ptr_p;

	Pointer_1();

};


Pointer_1::Pointer_1()
{
	this->ptr_p = NULL;
	this->x = 0;
};


int main() {

	
	//created a pointer instance of the class.
	Pointer_1 *p1 = new Pointer_1();

	
	//assigning the value to the variable x
	p1->x = 5;

	
	//storing the address of variable x or you can say referencing the variable x 
	std::cout << "referencing the variable x : " << &(p1->x) << std::endl;
	p1->ptr_p = &p1->x;

	
	//address of x will be printed
	std::cout << "Value of ptr_p : " << p1->ptr_p << std::endl;

	
	/*
		referencing pointer variable
		
		we are trying to dereference the address of variable x (which is stored in the variable ptr_p)
		to get the value of varialbe x.
	*/
	
	std::cout << "Address of variable ptr_p : " << &(p1->ptr_p)<<std::endl;
	std::cout <<"Dereferencing address of x  : "<<*(p1->ptr_p)<<std::endl;


	// using pointers we can change the value of the variable x
	*p1->ptr_p = 110;
	std::cout << "Dereference Value of x : " << *(p1->ptr_p) << std::endl;


	delete p1;

	return 0;
}