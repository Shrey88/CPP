#include "../header/copy_elision_return_optimization.h"



int main() {

    /*
     *  compiler optimization technique
     * 
     *  In C++ 98 it will print 
     *  constructor         --> this is called from the getTest() function where we are returning the object of class Test
     *  copy constructor    --> when you return the local object of class Test it is getting copied to the Test 
     *  destructor          --> local object from the getTest() function going out of scope.
     *  copy constructor    --> if you declare an object and you set it immediately equal to something with equals it actually run the copy
     *                          cosntructor, this is called copy initialization.
     *  destructor          --> temporary object being returned is destroyed.
     *  Hello from test     --> it is calling the overloaded operator << 
     *  destructor          --> this is local object test1 which is going out of the scope.
     * 
     * 
     *  C++ 11 
     *  the below code does the return value optimization which involves eliding or getting rid of extra copies of the object.
     *  so this happens in a situation where you are returning some sort of local variable from a function like there's some sort of object 
     *  and you are initializing another object outside the function.
     * 
     *  Usually C++ can spot in that situation that you don't really want the temporary return object, you just want
     *  to initialize this object.
     * 
     *  so it is managed to optimize away and get rid off the extra copies.
     */
    Test test1 = getTest();

    std::cout << test1 << std::endl;

    return 0;
}