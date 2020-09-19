#ifndef STATIC_CAST_1_H_
#define STATIC_CAST_1_H_

#include <iostream>

class Parent {

    public:
        virtual void pprint(){
            std::cout << "Parent Class" << std::endl;
        }
};

class Brother:public Parent {
    public:
        void bprint(){
            std::cout << "Brother Class" << std::endl;
        }
};

class Sister:public Parent {
    public:
        void sprint(){
            std::cout << "Sister Class" << std::endl;
        }
};

#endif