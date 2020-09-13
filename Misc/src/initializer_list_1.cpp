/*
 *
 *  Initializer List
 * 
 * 
 */
#include <iostream>
#include <initializer_list>

class Test{
public:
    // so whatever we passed to the object as list is stored in the initializer list
    Test(std::initializer_list<std::string> texts){
        for(auto value: texts){
            std::cout << value << std::endl;
        }
    }

    void print(std::initializer_list<std::string> texts){
        for(auto value : texts){
            std::cout << value << std::endl;
        }
    }
};


int main(){

    Test test{"apple", "orange", "banana"};
    test.print({"one", "two", "three", "four"});
    
    return 0;
}