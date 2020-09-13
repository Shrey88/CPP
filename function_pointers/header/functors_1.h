#ifndef FUNCTORS_H_
#define FUNCTORS_H_

#include <iostream>

class Test {

public:
    virtual bool operator()(std::string &text) = 0;
};

class MatchTest: public Test {

public:
    virtual bool operator()(std::string &text){
        return text == "lion";
    }
};

class MatchTest_1: public Test {

public:
    virtual bool operator()(std::string &text) {
        return text == "tiger";
    }
};

void check (std::string text, Test &test){
    if(test(text)){
        std::cout << "Test matches" << std::endl;
    }
    else{
        std::cout << "No match" << std::endl;
    }
}
#endif