#ifndef ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_1_H_
#define ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_1_H_

#include <iostream>

class Animal {

public:
    // this is the syntax of how you define the pure virtual function/method
    // here class Animal is an abstract class as it contains the pure virtual function.
    virtual void speak() = 0;
};

/*
 *  here the dog extends animal class (its a subclass derived from the parent class)
 *  we can say that it's a concrete class as it implements all of the pure virtual functions
 *  that exist in Animal class.
 * 
 */
class Dog: public Animal {

public:
    virtual void speak() {
        std::cout << "Wolf!" << std::endl;
    }
};
#endif