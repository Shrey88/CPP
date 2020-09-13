#ifndef ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_3_H_
#define ABSTRACT_CLASS_PURE_VIRTUAL_FUNCTIONS_3_H_

#include<iostream>

class Animal {

public:
    virtual void run()=0;
    virtual void speak()=0;
};

class Dog: public Animal {

public:
    virtual void speak(){
        std::cout << "Woof!" << std::endl;
    }
};

/*
 *  in this case we can create an instance of class Labrador 
 *  as it implements the virtual function run defined in Animal class
 *  and we already have the implemented the virtual function speak in Dog class so
 *  no need to implement it again in Labrador.
 * 
 */
class Labrador: public Dog {

public:
    virtual void run() {
        std::cout << "Labrador running" << std::endl;
    }
};

#endif