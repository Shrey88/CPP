/*
 *
 * Overloading the dereference operator
 * 
 */
#include "operator_overloading_3.h"

Complex::Complex(): real(0), imaginary(0){

};

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

};

Complex::Complex(const Complex &other){

    *this = other;

};

const Complex &Complex::operator=(const Complex &other){
    
    this->real = other.real;
    this->imaginary = other.imaginary;

    return *this;
};

// so here we have a const object using which we are trying to call the class methods
// but we are getting error becuase we didn't define the get methods as constants and 
// the c++ things that the object variables can get changed
// so to make sure that using these method we are not changing anything we need to define 
// the method as constant.
std::ostream &operator<<(std::ostream &out , const Complex &c){

    out << "( " << c.get_real() << " : " << c.get_imaginary() << " )";
    
    return out;
};


int main(){

    Complex c1(2,3);

    // copy constructor
    Complex c2(c1);
    // alternative way of writing the copy constructor.
    // c2 = c1;

    // assignment 
    Complex c3 = c2;

    std::cout << c2 << " : " << c3 << std::endl;
    return 0;
}