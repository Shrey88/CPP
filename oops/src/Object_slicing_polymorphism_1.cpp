#include "../header/Object_slicing_polymorphism_1.h"

int main(){


    Child c1;

    // here we are taking the reference of the parent and assigning 
    // the object of subclass of the super class to it
    Parent &p1 = c1;

    // this will call the print from the parent class 
    // if the function is not declared as virtual.
    // else it will call the child function.
    p1.print();

    // so when we do this we are actually slicing away the part of the 
    // child object because we can't make any use of it here.
    // we are purely initializing a class of parent type.
    // this is known as object slicing.
    Parent p2 = Child();    // implicit up casting becuase we moving from subclass to superclass.
    p2.print();

    return 0;
}