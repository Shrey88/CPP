#ifndef ACCESS_MODIFIERS_H_
#define ACCESS_MODIFIERS_H_

#include <iostream>

using namespace std;

class Circle{

    /*
     *  Public: All the class members declared under public will be available to everyone. 
     *  The data members and member functions declared public can be accessed by other classes too.
     *  The public memebers of a class can be accessed from anywhere in the program using the direct member access operator.
     *  with the object of that class.
     */
    public:
        //double radius;

        double compute_area(){
            return 3.14 * radius * radius;
        };


    /*
     *
     *  Private: The class members declared as private can be accessed only by the functions inside the class.
     *  They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or 
     *  friend fucntions are allowed to access the private data members of a class.
     * 
     */
    private:
        double radius;
};

#endif