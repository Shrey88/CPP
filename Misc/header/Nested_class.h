#ifndef NESTED_CLASS_H_
#define NESTED_CLASS_H_ 

#include <iostream>

using namespace std;

class Enclosing {
    private:
        int x;

    public:
        /* start of Nested class declaration */
        class Nested {
            int y;

            public:

                void NestedFun(Enclosing *e){
                    cout << e->x << endl;   // works fine: nested class can access
                                    // private members of Enclosing class
                };

        };// declaration of the nested class ends  

        void set_x(int x) {
            this->x = x;
        }

        void EnclosingFun(Nested *n){
            //cout << n->y;   //Compile Error: y is private member of Nested Class
        }
};  // declaration of Enclosing class ends
#endif