#ifndef FUNCTORS_2_H_
#define FUNCTORS_2_H_

#include <iostream>
#include <bits/stdc++.h>

class increment{

private:
    int num;

public:
    increment(int n) : num(n) {

    }

    int operator()(int arr_num) const{
        return num + arr_num;
    };
};

#endif