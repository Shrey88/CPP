#ifndef LVALUE_REFERENCE_H_
#define LVALUE_REFERENCE_H_

#include <iostream>
#include <memory.h>

class Test {

    private:
        int *_pBuffer;
        
        static const int SIZE = 100;

    public:
        Test() {
            std::cout << "constructor" << std::endl;
            _pBuffer = new int[SIZE]{}; // {} assings the default value 0 to all the memory block
        }

        Test (int n) {
            std::cout << "parameterized constructor" << std::endl;

            // here we want to assign the values to the int array
            _pBuffer = new int[SIZE]{};
            
            for(int i = 0; i < SIZE; i++){
                _pBuffer[i] = n * i;
            }
        }

        Test(const Test &other) {

            std::cout << "Copy constructor" << std::endl;

            // here we want to copy the the array of int from one object to another object.
            _pBuffer = new int[SIZE]{};

            memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        }

        Test &operator=(const Test &other) {

            std::cout << "Assignment operator" << std::endl;

             // here we want to copy the the array of int from one object to another object.
            _pBuffer = new int[SIZE]{};

            memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));

            return *this;
        }

        ~Test(){
            std::cout << "destructor" << std::endl;

            // delete the memory block that has been constructed in the default constructor
            delete [] _pBuffer;
        }

        friend std::ostream &operator<<(std::ostream &out , const Test &test);
};


std::ostream &operator<<(std::ostream &out , const Test &test) {

    out << test._pBuffer[0] << std::endl;
    out << test._pBuffer[1] << std::endl;
    out << test._pBuffer[2] << std::endl;
    out << test._pBuffer[3] << std::endl;
    out << test._pBuffer[4] << std::endl;
    out << test._pBuffer[5] << std::endl;
    out << test._pBuffer[6] << std::endl;
    out << test._pBuffer[7] << std::endl;

    return out;
};

Test getTest() {
    return Test();
}
#endif