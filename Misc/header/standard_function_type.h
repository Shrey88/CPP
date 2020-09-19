#ifndef STANDARD_FUNCTION_TYPE_H_
#define STANDARD_FUNCTION_TYPE_H_

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

class Check {

public:
    bool operator()(std::string name){
        return (name.size() == 4);
    };
};

#endif