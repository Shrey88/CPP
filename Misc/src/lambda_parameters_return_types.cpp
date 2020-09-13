/*
 *
 *  Lambda parameters and return types
 * 
 */

#include <iostream>

// creating function with function pointer and name as the argument
void testGreet(void (*pGreet)(std::string) ,std::string name){

    pGreet(name);
};

// we have created a function that takes a function pointer of return type double as argument.
void runDivide(double (*pDivide)(double a, double b)){
    auto val  = pDivide(9, 3);
    std::cout << val << std::endl;
};

int main(){

    // Lambda parameter
    auto pGreet = [](std::string name){ 
                        std::cout << "Hello " << name << std::endl;
                        };

    pGreet("Shreyas");

    testGreet(pGreet, "Anahita");

    // Lambda return type
    // for lambda expression return type is not required as it internally infers the type
    auto pDivide = [](double a, double b){
        return a/b;
    };

    std::cout << pDivide(10.0, 5.0) << std::endl;
    
    // but if the function returns multiple return statements
    // one is int and another is double, you need to explicitly specify the 
    // trailing return type.
    auto pDivide1 = [](double a, double b)->decltype(a){
        
        if(b == 0.0){
            return 0;
        }

        return a/b;
    };

    std::cout << pDivide1(10.0, 0.0) << std::endl;

    runDivide(pDivide1);
    return 0;
}