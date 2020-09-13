#ifndef OBJECT_SLICING_POLYMORPHISM_1_H_
#define OBJECT_SLICING_POLYMORPHISM_1_H_

#include<iostream>

class Parent{

private:
    int one;
public:
    // if you don't define the default constructor if you have define the 
    // constructor with argument, we lose the implicit no parameter constructor.
    // so it is mandatory to define the default constructor. 
    Parent():one(0){

    };

    Parent(const Parent &other){
        std::cout << "Calling the copy constructor" << std::endl;
        one = other.one;
    };

    virtual void print(){
        std::cout << "Parent" << std::endl;
    }
};

class Child : public Parent{
private:
    int two;
public:
    Child():two(0){

    };

    void print(){
        std::cout << "Child" << std::endl;
    }
};



#endif
