/*
 *  Template Function
 * 
 */

#include <iostream>

template<class T>
void show(){
    std::cout << T() << std::endl;
}

int main(){

    // there are no arguments to the actual function
    // so c++ cannot infer the type and therefore we cannot do the following 
    // also we cannot do the like show<>().
    //show();

    // but if we specify the type in the diamond brackets it won't give you the error.
    show<double>();
    return 0;
}