/*
 *  Static Member
 *      we can define class members static using static keyword.
 *      
 *      When we declare a memeber of a class as static it means no 
 *      matter how many objects of the class are created, there is only one copy of the static member
 * 
 *      A static member is shared by all objects of the class. All static data is initialized to zero when 
 *      the first object is created, if no other initialization is present. We can't put it in the class definition
 *      but it can be initialized outside the class 
 * 
 * 
 *  Static Function
 *      by declaring a function member as static, you make it independent of any particular object of the class.
 *      A static member function can be called even if no objects of the class exist and the static functions are 
 *      accessed using only the class name and the scope resolution operator::
 * 
 *      A static member function can only access static data member, other static member functions, they cannot access
 *      the non-static data members or member functions of the class.
 * 
 *      Static member functions have a class scope and they do not have access to this pointer of the class.
 * 
 *      You could use a static member function to determine wheteher some objects of the class have been created or not.
 */


#include "../header/static_function.h"

/*
 *  Initialize the static member of class
 */ 
int Box::objectCount = 0;


int main(){
 

    Box box1(3.3, 1.2, 1.5);
    Box box2(8.5, 6.0, 2.0);

    // data member as static
    cout << "Total Objects : " << Box::objectCount << endl;

    // function as static
    cout << "Total Objects : " << Box::getCount() << endl;

    return 0;
}