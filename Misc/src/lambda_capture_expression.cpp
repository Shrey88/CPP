/*
 *  Lambda Capture Expression
 * 
 * 
 */
#include <iostream>

int main(){

    int one = 1;
    int two = 2;
    int three = 3;

    // cpature one and two by value
    auto func1 = [one, two](){ std::cout << one << ", " << two << std::endl;};


    // capture all local variables by value
    auto func2 = [=](){ std::cout << one << ", " << two << ", " << three << std::endl;};

    
    // by default all the local variables capture are pass by value
    // but capture variable three by reference
    // here all the variables except three will be pass by value
    auto func3 = [=, &three](){ three = 7;
                                std::cout << one << ", " << two << ", " << three << std::endl;
                                };


    // by default capture all the local variables by reference 
    auto func4 = [&](){ one = 7; 
                        two = 8; 
                        three = 9;
                        std::cout << one << ", " << two << ", " << three << std::endl;
                        };


    // if you want the value of variable one to be reference and rest as pass by value.
    auto func5 = [&, two, three](){ one = 10;
                                    std::cout << one << ", " << two << ", " << three << std::endl;
                                    };
    func1();
    func2();
    func3();
    func4();
    func5();
    return 0;
}