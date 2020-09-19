#ifndef STATIC_FUNCTION_H_
#define STATIC_FUNCTION_H_

#include <iostream>
using namespace std;

class Box {

    private:
        double length;
        double breadth;
        double height;


    public: 
        static int objectCount;

        //Constructor definition
        Box(double l = 2.0, double b = 2.0, double h = 2.0){
            cout << "Constructor called : " << endl;

            length = l;
            breadth = b;
            height = h;

            objectCount++;
        };

        double Volume(){
            return length * breadth * height;
        };

        static int getCount(){
            return objectCount;
        }
};

#endif 