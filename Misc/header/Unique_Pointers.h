#ifndef UNIQUE_POINTERS_H_
#define UNIQUE_POINTERS_H_

#include <iostream>
#include <memory>

using namespace std;

class Test {

    public:
        Test() {
            cout << "created" << endl;
        }

        void greet() {
            cout << "hello" << endl;
        }

        ~Test() {
            cout << "destroyed" << endl;
        }
};


// here we are declaring a unique pointer variable in private
// to create objects we will call the new operation on default 
// constructor or Temp class
class Temp {
    private:
        unique_ptr<Test[]> pTest;

    public:
        Temp(): pTest(new Test[2]){

        };
};

#endif