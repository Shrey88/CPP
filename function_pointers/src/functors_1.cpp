#include "../header/functors_1.h"

/*
 *
 * Functors are objects that can be treated as though they are a function
 * or function pointer.
 * 
 * Functors are most commonly used along with STLs.
 * 
 */
int main() {

    MatchTest_1 pred;

    std::string value = "lion";

    check("lion", pred);

    return 0;
}