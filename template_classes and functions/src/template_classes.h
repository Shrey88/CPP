#include <iostream>

#ifndef TEMPLATE_CLASSES_H_
#define TEMPLATE_CLASSES_H_

template<class T>
class Test{

private:
    T obj;

public:
    Test(T obj){
        this->obj = obj;
    }

    void print(){
        std::cout << obj << std::endl;
    }
};

#endif