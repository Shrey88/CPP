/*
 *
 *  Shared Pointer: shared pointers don't delete the memory associated with you objects
 *      until all the pointers that point at that object have gone out of scope.
 * 
 *      we can use shared pointers only to point to individual objects and not for the array.
 * 
 *      
 */
#include "../header/shared_pointer.h"

int main() {
    
    // here we are using the constructor of shared pointer to create object of class Test
    shared_ptr<Test> pTest1(new Test());
    
    cout << "!!!Hello World!!!" << endl;

    

    /*
     *  the best way to create a shared pointer is to use them with make_shared macro
     */
    {
        shared_ptr<Test> pTest2 = make_shared<Test>();

        {
            shared_ptr<Test> pTest3 = pTest1;
        }
    }


    return 0;
}