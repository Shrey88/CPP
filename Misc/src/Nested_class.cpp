#include "../header/Nested_class.h"

/*
 *  Nested Class :
 *      A nested class is a class that is declared in another class.
 * 
 *      The nested class is also a member veriable of the enclosing class and has the same access rights
 *      as the other members.
 * 
 *      However the member functions of the enclosing class have no special access to the members of a
 *      nested class.
 * 
 */

int main(){

    Enclosing::Nested e_n;
    Enclosing e;

    e.set_x(10);
    e_n.NestedFun(&e);
    
    return 0;
}