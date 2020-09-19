#ifndef SHARED_POINTER_H_
#define SHARED_POINTER_H_

#include <iostream>
#include <memory>

using namespace std;

class Test {

    public:
        Test() {
            cout << "created" << endl;
        }

        void greet(){
            cout << "Hello " << endl;
        }

        ~Test() {
            cout << "destroyed" << endl;
        }
};


#endif