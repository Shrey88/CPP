/*
 *  Template Function
 * 
 * 
 */

#include<iostream>

// here you can use typename instead of class also
// as it is related to functions typename makes more sense.

template<typename T>   // <-- valid, this is also valid template<class T>
void print(T n){
    std::cout << n << std::endl;
}

int main(){

    print<std::string>("Shreyas");
    print<int>(32);

    print("Hi Shreyas");    //<-- C++ looks at the argument passed and does the type inference. 
    return 0;
}