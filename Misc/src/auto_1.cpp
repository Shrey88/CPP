#include <iostream>

/*
 *
 *  auto is the default storage class specifier for variables 
 *  so we don't need to type it explicitly.
 * 
 */


int main(){

    /*
     *  in c++ 11 the meaning of the auto has been extended and we can actually
     *  miss out the type declaration all together.
     * 
     *  the auto keyword will actually look at what you are initializing a variable 
     *  with and in effect declared type for you.
     * 
     */
    auto value = 10;

    std::cout << value << std::endl;

    auto text = "Shrey";

    std::cout << text << std::endl;
    

    return 0;
}