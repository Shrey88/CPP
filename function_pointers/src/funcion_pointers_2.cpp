/*
 *
 *  function pointers with arguments
 * 
 */
#include <iostream>


void test(std::string value){

    std::cout << "Hello " << value << std::endl;
};


int main(){

    // specify the return type to a function pointer same as the function it is
    // going to point to.
    // also specify the same set of arguments type argument name are optional.
    void (*pTest1)(std::string);

    pTest1 = test;  // <-- this is equivalent to &test

    (*pTest1)("Shreyas");

    return 0;
}