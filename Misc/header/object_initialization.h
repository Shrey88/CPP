#ifndef OBJECT_INITIALIZATON_H_
#define OBJECT_INITIALIZATION_H_

#include <iostream>

class Test {

private:
    int id{3};
    std::string name{"Mike"};

public:
    // when we define it like this we are basically telling that  
    // we want the default implementation of the non-parameterized constructor
    Test() =  default;

    // we can say that we don't want to implement the copy constructor
    // we want the default implementation, so we can declare in following way
    Test(const Test &other) = default;

    Test(int id): id(id){

    };

    void print(){
        std::cout << id << ": " << name << std::endl;
    };
};

class Test1 {

private:
    int id{5};
    std::string name{"John"};

public:
    // when we define it like this we are basically telling that  
    // we want the default implementation of the non-parameterized constructor
    Test1() =  default;

    // when we don't want the copy constructor implementation to take place 
    // we will declare it with delete
    Test1(const Test1 &other) = delete;

    // if you don't want the equals operation to take place
    // declare the equals overloading operation like this 
    Test1 &operator=(const Test1 &other)const = delete;

    Test1(int id): id(id){

    };
    
    void print(){
        std::cout << id << ": " << name << std::endl;
    };
};

#endif