/*
 *
 * 
 * 
 * 
 */


#include "../header/delegating_constructors.h"

int main(){

    Parent parent;

   /* when you create a object of child class it has to run the parent class
    * default constructor, it's not because the child is somehow like a parent
    * object and child object bolted together.
    *
    * it's just a child object which include stuff from the parent class and you need
    * to run the parent constructor's from the child class 
    * 
    * parent class constructor's are not inherited, you can't call them directly but they 
    * do exist.
    * 
    * nevertheless in a child class they're existing to be called the child has a slice of it which is parent.
    * and we have added an extra stuff onto that slice.
    * 
    * 
    */ 

    Child child;

    return 0;
}