/*
 *
 *  Object Initialization, Default, Delete
 * 
 */

#include "../header/object_initialization.h"

int main(){

    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1; // copy initialization which will invoke the copy constructor.
    
    Test test3;
    test3 = test;
    test3.print();

    // just in case you dont want to make the object not copyable
    Test1 test1_1;
    test1_1.print();

    // we cannot have the copy constructor implementation taking place as we have declared
    // the copy constructor as delete
    Test1 test1_2 = test1_1;
    test1_2.print();

    Test1 test1_3;

    // we have declare overloaded operator = function as delete which will not 
    // allow you assign one object to another.
    test1_3 = test1_1;
    
    return 0;
}