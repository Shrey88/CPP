#include "../header/rvalue_references.h"

int main() {

    Test test1 = getTest();
    std::cout << test1 << std::endl;

    /*
     *  we have seen that a couple of situations where you have potential inefficiences.
     *  if the compiler optimization doesn't fit in and one of them involves return values 
     *  which are temporary values and other involves passing temporary values for e,g copy
     *  constructor accepts the rvalue as the argument. 
     * 
     * 
     *  in both the cases if we could identify temporary values somehow we could handle them differently
     *  to how we handle non temporary fillings and potentially intoduce optimization in our code.
     */

    // && has special meaning and it accepts the rvalue but not the left value.
    //Test &&rTest1 = test1;  // lvalue not accepted

    Test &&rTest2 = getTest(); // rvalue accepted.

    check(test1);
    check(getTest());
    check(Test());

    return 0;
}