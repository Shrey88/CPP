#ifndef THIS_KEYWORD_LAMBDAS_H_
#define THIS_KEYWORD_LAMBDAS_H_

#include <iostream>

class Test {

private:
    int one{1};
    int two{2};

public:
    void run() {
        int three{3};
        int four{4};

        // to access the instace variables you need to pass "this" which is basically the reference
        auto pLambda1 =  [this, three, four](){  
                                                one = 11;  // since we are passing the reference of this we can change the value of instance variable
                                                std::cout << one << std::endl;
                                                };
        pLambda1();


        // you cannot do pass by value and pass the reference together here
        //auto pLambda2 = [=, this](){};


        // you can pass all the variables as reference
        auto pLambda3 = [&](){
                                one = 111;
                                two = 222; 
                                three = 333;
                                four = 444;
                                std::cout << one << std::endl;
                                std::cout << two << std::endl;
                                std::cout << three << std::endl;
                                std::cout << four << std::endl;
                                };
        pLambda3();


        // you can also write the above expression like this
        // where & meaning passing the local variable as reference
        // and we can also pass this to access the instance variable
        auto pLambda4 = [&, this](){
                                        one = 1111;
                                        two = 2222;
                                        three = 3333;
                                        four = 4444;
                                        std::cout << one << std::endl;
                                        std::cout << two << std::endl;
                                        std::cout << three << std::endl;
                                        std::cout << four << std::endl;
                                        };
        pLambda4();


    };
};
#endif