/*
 *
 *  Function Pointers
 * 
 *  how we define the pointer to a variable we can define the pointer to a function.
 * 
 */

#include<iostream>

void test(){

    std::cout << "Hello" << std::endl;

}

int main(){

    test();

    // to declare the pointer to this function we need a 
    // variale of right type and then we can point that 
    // variable to this function.
    // here the function return type is void and does not have any arguments.
    std::cout << "Pointer Variable pTest : " << std::endl;
    void (*pTest)();
    
    pTest = &test;    //<-- address of the function.
    
    (*pTest)();
    std::cout << std::endl;

    std::cout << "Pointer Variable pTest1 : " << std::endl;
    void (*pTest1)();

    pTest1= test;

    pTest1();
    std::cout << std::endl;

    std::cout << "Pointer Variable pTest1 : " << std::endl;
    void (*pTest2)() = test;

    pTest2();
    std::cout << std::endl;
    
    return 0;
}