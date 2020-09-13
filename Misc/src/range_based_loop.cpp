#include<iostream>

/*
 *
 *  Range Based Loop
 * 
 * 
 */

int main(){

    // auto will do the type inference implicitly to char array.
    auto texts = {"one", "two", "three"};

    // auto is going to give us the variable "text" of right type
    // and it is going to initialize the variable and set the value of text to
    // each of the value from texts
    // the variable after colon should be of type array or something that 
    // you can iterate 
    for(auto text: texts){
        std::cout << text << std::endl;
    }

    return 0;
}