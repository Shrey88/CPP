#include<iostream>

/*
 *
 *  decltype : this actually allows us to declare variables of an existing type.
 * 
 */

int main(){

    std::string value;

    // defining the variable name of std::string type by using the decltype method
    // and the passing the variable of type std::string to it.
    decltype(value) name = "Shrey"; 


    std::cout << "Name : " << name << std::endl;

    return 0;
}