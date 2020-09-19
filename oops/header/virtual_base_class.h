#ifndef VIRTUAL_BASE_CLASS_H_
#define VIRTUAL_BASE_CLASS_H_

#include <iostream>

using namespace std;

/*
 *  Need for Virtual Base Class:
 *      Consider a situation where we have one class A. This class is A is inherited 
 *      by two other classes B and C. Both these classes are inherited into another in a new class D.
 * 
 *  As we can see from the figure that data members/funcion of class A are inherited twice to class D.
 *  One through class B and another through class C.
 *  
 *  When any data/function member of class A is accessed by an object of class D, ambiguity arises as to which
 *  data/function member would be called?
 * 
 *  to resolve this ambiguity when class A is ingerited in both class B and class C, it is declared as virtual 
 *  base class by placing a keyword virtual 
 * 
 *  now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class
 */

class A {
    public:
        void show(){
            cout << "Hello from A" << endl;
        }
};

class B : virtual public A{
};

class C : virtual public A{
};

class D : public B, public C{
    
};

#endif