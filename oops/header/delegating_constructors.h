#ifndef DELEGATING_CONSTRUCTORS_H_
#define DELEGATING_CONSTRUCTORS_H_

#include <iostream>

class Parent {

    // if you do not specify the access modifier then by default it is private
    int dogs;
    std::string text;

public:
    /*
     *  in c++ 98 within a class we cannot call one constructor from another
     * 
     *  in c++ 11 we can call one constructor from another.
     * 
     *  in c++ 98 it wouldn't work and that is called delegating constructor.
     *  the common solution would be to create an init method which had different 
     *  constructors could call
     * 
     */
    Parent():Parent("Hello") {
        dogs = 5;
        std::cout << "No parameter parent constructor" << std::endl;
    };

    Parent(std::string text) {
        dogs = 5;
        this->text = text;
        std::cout << "String parent constructor : " << std::endl;
    };
};

class Child: public Parent {

public:
    /*
     *  C++ 98
     *  if you dont define the default constructor in parent class then child 
     *  class with report an error that no default constructor exist for parent class
     *  so what we can do is specify the parent constructor with Child's default constructor 
     *  that we want to call
     * 
     * c++ 11
     * even if you have the parent default constructor we can choose which constructor to be called 
     * from child.
     */
    Child(): Parent("hello") {
        std::cout << "No parameter child constructor" << std::endl;
    };
};

#endif