/*
 *  
 *  Explicit Type Conversion:
 *      This process is also called type casting and it is user-defined.
 *      
 *      the user can typecast the result to make it of a particular data type.
 * 
 *      In C++, it can be done by two ways.
 */

/*
 *  Converting by assignment :
 *      This is done by explicitly defining the required type in front of the expression in parenthesis.
 * 
 *      This can also be considered as forceful casting.
 * 
 *      Syntax:
 *              (type) expression  <-- type indicates the data type to which the final result is converted.
 */

#include<iostream>

int main()
{
    double x = 1.2;

    //Explicit conversion from double to int
    int sum = (int)x + 1;

    std::cout << "Sum = " << sum;

    return 0;
}