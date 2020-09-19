#include "../header/interface_class.h"

/*
 *  Interface Classes:
 *      An interface class is a class that has no member variables, 
 *      and where all of the functions are pure virtual in other words,
 *      the class is purely a definition, and has no actual implementation.
 * 
 *      Interfaces are useful when you want to define the functionality that 
 *      derive classes must implement, but leave the details of how the derived
 *      class implements that functionality entirely up to the derived class.
 * 
 *  Interface class are often named beginning with an I.
 * 
 */

int main(){

    FileErrorLog fLog;
    mySqrt(-1.0, fLog);

    ScreenErrorLog sLog;
    mySqrt(-1.0, sLog);

    return 0;

}