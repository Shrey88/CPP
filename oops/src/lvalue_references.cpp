#include "../header/lvalue_references.h"

int main() {

    Test test1 = getTest();
    std::cout << test1 << std::endl;

    // we can bind the lvalue references(old type of references) to our lvalues
    Test &rTest1 = test1;

    
    // so if we try to bind rvalue which is the return value from the function, it is not going to work
    Test &rTest2 = getTest();


    // we can make the above statement work by declaring it as constant
    // so that the lifetime of the rvalue returned from the function gets extended 
    // as long as the reference rTest3 exists and will get destroyed only when the
    // reference goes out of scope.
    // earlier we had seen that as soon the call is returned from the function the object got destroyed.
    const Test &rTest3 = getTest();


    // if you refere the code, we have a copy constructor that takes a rvalue.
    // Test(1) is an rvalue
    Test test4 (Test(1));

    return 0;
}