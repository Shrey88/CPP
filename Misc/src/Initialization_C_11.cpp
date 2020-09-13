#include <iostream>
#include <vector>

/*
 *
 *  Initialization in C++ 11
 *  
 */

int main(){

    // you dont have to put equals sign to assign the value instead you can use braces.
    int value {5};
    std::cout << value << std::endl;

    // you can do this with strings as well
    std::string text{"Hello"};
    std::cout << text << std::endl;

    // we can do this with arrays as well
    int numbers[]{1,2,3,4,5};
    std::cout << numbers[3] << std::endl;

    //you can do this with new as well
    int *ptr = new int[3]{1,2,3};
    std::cout << ptr[2] << std::endl;
    delete [] ptr;

    // if you want to initialize the variable with value 0, you can do it with empty braces
    int value1{};
    std::cout << value1 << std::endl;

    // you can also use the curly braces to initialize the pointer variable
    // with reference
    int *ptr1{&value};
    std::cout << *ptr1 << std::endl;

    // if you want to initialize the pointer variable with null pointer
    // nullptr is new way of initializing the pointer variable to NULL
    int *ptr2{nullptr};
    char *c{nullptr};
    std::cout << ptr2 << std::endl;
    if(c == nullptr){
        std::cout << "Variable C is empty" << std::endl;
    }
    
    // same can be done to initialize the data members of the class and structures
    class C{
    public:
        int id;
        std::string text;
    };
    C c1{7, "Hello "};
    
    struct{
    public:
        int id; 
        std::string text;
    }r1{8, "World"};
    std::cout << c1.text << r1.text << std::endl;

    // the same can work with the vectors
    std::vector<std::string> strings{"one", "two", "three"};
    std::cout << strings[2] << std::endl;

    return 0;
}