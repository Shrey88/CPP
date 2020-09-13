/*
 *
 *  Lambda Expression
 * 
 */


#include <iostream>

void test(void (*pfunc)()){
    pfunc();
}

int main(){

    // valid lambda expression
    // we are just defining the function that does not have a name
    // we are taking the reference of the anonymous function and assigning it to 
    // func variable, the type can functor or function pointer.
    auto func = [](){ std::cout << "Hello" << std::endl; };
    func();

    // another thing that we can do is create a function that takes the 
    // function pointer as the argument.
    test(func);

    // another way to pass the function pointer is by passing the lambda function itself
    test([](){ std::cout << "Hello" << std::endl; });


    return 0;
}