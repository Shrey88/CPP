#include "../header/rvalue_lvalue.h"

int main() {

    Test test1(7);
    std::cout << test1 << std::endl;

    Test test2(8);
    std::cout << test2 << std::endl;

    Test test3;
    std::cout << test3 << std::endl;
    
    test3 = test1;
    std::cout << test3 << std::endl;

    // C++ 11 extends the definition of lvalues and rvalues and they become lot more important.

    int value1 = 7;

    // lvalue is basically address of value1 
    int *pValue1 = &value1;

    // but we can't point pValue equal to address of 7, because 7 is our value
    // int *pValue2 = 7;

    // same thing applies with the objects 
        // test1 is lvalue, it is a named value which we can take address of 
        Test *pTest1 = &test1;

        // rvalues are temporary values for e.g. values returned from functions. we can't say
        Test *pTest2 = &getTest();


    //distinction between rvalues and lvalues is hard to define
        // prefix increment and address of variable works as it is lvalue
        int *pValue3 = &++value1;

        // same thing with postfix increment does not work because it is rvalue
        // int *pValue4 = &value1++;

    return 0;
}