#ifndef OPERATOR_OVERLOADING_3_H_
#define OPERATOR_OVERLOADING_3_H_

#include<iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double real, double imaginary);
    
    // copy constructor
    Complex(const Complex &other);

    // overloading the assignment operator
    const Complex &operator=(const Complex &other);

    // this is the alternative to using the friend function 
    // which does not break the encapsulation
    double get_real() const { return real; }

    double get_imaginary() const { return imaginary; }

    // overloading the operator equality ==
    bool operator==(const Complex &other) const;

    // overloading the operator not equality !=
    bool operator!=(const Complex &other) const;
};


std::ostream &operator<<(std::ostream &out , const Complex &complex);

Complex operator+(const Complex &c1, const Complex &c2);
#endif