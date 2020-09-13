#ifndef ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_2_H_
#define ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_2_H_

#include<iostream>

/*
 *  Imagine for eg that Animal class would have several pure virtual functions.
 *  now we have a cluster of implementation for one or two of them but not all of them
 *  dog would still be abstract.
 * 
 *  then we have a class which derives from dog for eg spaniel which is a type of dog and 
 *  spaniel finishes the job of implementing all of the pure virtual functions in Animal 
 *  then we could instantiate Spaniel.
 */

class Animal {

public:
    virtual void run()=0;
    virtual void speak()=0;
};

class Dog: public Animal{

public:
    virtual void speak(){
        std::cout << "Woof!" << std::endl;
    };
};

#endif