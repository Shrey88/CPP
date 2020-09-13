/*
 *
 * Template Function
 * 
 */

#include <iostream>

template<class T>
void print(T n){
    std::cout << "Template version : " << n << std::endl;
}

// overloading the same function with different signature.
void print(int value){
    std::cout << "Non-Template version : " << value << std::endl;
}

int main(){
    print<std::string>("Hello World");
    print<int>(5);
    print("Hello World! Welcome!"); //<-- c++ performs the implicit type inference which is exactly the same we did explicitly on line 20

    // this matches the signature with the available function and it matches with print(int value)
    // if the function was not available then it would have called the template version by doing the implicit
    // type inference.
    print(32); 

    // in case if you had missed out to type the type of argument inside the diamond bracket
    // then it will call the template version and it internally does the type inference.
    print<>(50);
    return 0;
}