#include <iostream>

/*
 *
 *  Accessing the value from the void pointer.
 * 
 */


int main(){

    float f = 2.4;

    void *ptr = &f;

    // (float*)ptr does type casting of void
    // *((float*)ptr) dereferences the typecasted
    // void pointer variable.
    std::cout << *((float*)ptr) << std::endl;

    return 0;
}