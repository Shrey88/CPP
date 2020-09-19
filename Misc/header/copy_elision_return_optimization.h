#ifndef COPY_ELISION_RETURN_OPTIMIZATION_H_
#define COPY_ELISION_RETURN_OPTIMIZATION_H_

#include <iostream>

/*
 *  
 */
class Test {

public:
    Test() {
        std::cout << "constructor" << std::endl;
    }

    Test(int i) {
        std::cout << "parameterized constructor" << std::endl;
    }

    Test(const Test &other) {
        std::cout << "copy constructor" << std::endl;
    }

    Test &operator=(const Test &other) {
        std::cout << "assignment" << std::endl;
        return *this;
    }

    ~Test()
    {
        std::cout << "destructor" << std::endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Test &test);

};


std::ostream &operator<<(std::ostream &out , const Test &test) {
    out << "Hello from test";
    return out;
};

Test getTest() {
    return Test();
}

#endif