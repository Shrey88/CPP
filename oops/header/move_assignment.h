#ifndef MOVE_ASSIGNMENT_H_
#define MOVE_ASSIGNMENT_H_
#include <iostream>
#include <memory.h>
#include <vector>

class Test {

    private:
        int *_pBuffer{nullptr};
        
        static const int SIZE = 100;

    public:
        Test() {
            _pBuffer = new int[SIZE]{}; // {} assings the default value 0 to all the memory block
        }

        Test (int n) {

            // here we want to assign the values to the int array
            _pBuffer = new int[SIZE]{};
            
            for(int i = 0; i < SIZE; i++){
                _pBuffer[i] = n * i;
            }
        }

        Test(const Test &other) {

            // here we want to copy the the array of int from one object to another object.
            _pBuffer = new int[SIZE]{};

            memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        }

        // move constructor : it takes the mutable rValue reference.
        // here we are trying to steal the resources from rValue reference.
        // in move constructor you don't have to allocate memory
        Test(Test &&other){
            std::cout << "Move Constructor" << std::endl;
            _pBuffer = other._pBuffer;

            /*
             *  destructor of either will deallocate that buffer and we have stolen the buffer
             *  and we don't want that to happen.
             */
            other._pBuffer = nullptr;
        }

        Test &operator=(const Test &other) {

             // here we want to copy the the array of int from one object to another object.
            _pBuffer = new int[SIZE]{};

            memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));

            return *this;
        }


        // move assignment constructor
        Test &operator=(Test &&other){

            // delete the buffer from heap assigned to *this
            delete [] _pBuffer;

            _pBuffer = other._pBuffer;


            // to avoid freeing the 
            other._pBuffer = nullptr;


            return *this;
        }


        ~Test(){

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
    return Test(7);
};


#endif