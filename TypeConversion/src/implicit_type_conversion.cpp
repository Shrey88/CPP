/*
 *  Implicit type conversion also known as the automatic type conversion
 * 
 *  Done by the compiler on its own, without any external trigger from the user.
 * 
 *  Generally takes place when in an expression more than one data type is present. 
 *  In such condition type conversion(type promotion) takes place to avoid lose of data.
 * 
 *  All the data types of the variable are upgradded to the data type od the variable with largest data type.
 *      bool -> char -> short int -> int ->
 * 
 *      unsigned int -> long -> unsigned ->
 * 
 *      long long -> float -> double -> long double
 * 
 *  it is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned)
 *  and overflow can occur (when logn long is implicitly converted to float).
 */

#include<iostream>

int main()
{
    int x = 10; //integer x

    char y = 'a'; //character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float.
    float z = x + 1.0;

    std::cout << "x = " << x << std::endl
              << "y = " << y << std::endl
              << "z = " << z << std::endl;

    return 0;
}