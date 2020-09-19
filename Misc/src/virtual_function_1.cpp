#include "../header/virtual_function_1.h"

/*
 * Virtual Function:
 *  virtual fucntion is a member function which is declared within a base class and is re-defined
 *  (overriden) by a derived class.
 * 
 *  when you refer to a derived class object using a pointer or a reference to the base class, 
 *  you can call virtual function for that object and execute the derived class's version of the function
 *  
 *  They are mainly used to achieve Runtime Polymorphism
 * 
 *  The resolving of function call is done at Run-time
 * 
 *  
 *  Rules:
 *          Virtual functions cannot be static and also cannot be a friend function of another class.
 *          virtual functions should be  accessed using pointer or reference of base class type to achieve run time polymorphism.
 *          the prototype of virtual functions should be same in base as well as derived class
 *          they are always defined in base class and overridden in derived class. It is not mandatory for derrived class to iverride
 *          (or re-define the virtual function), in that case base class version of fucntion is used.
 *          A class may have virtual destructor but it cannot have a virtual constructor.
 */

/*
 *
 *  Explanation :   Runtime polymorphism is achieved only through a pointer(reference) of base class type. 
 *                  Also, a base class pointer can point to the object of base class as well as the objects of derived class
 *                  
 * 
 *                  Late bnding(runtime) is done in accordance with the content of pointer(ie location pointed to by pointer)
 * 
 *                  Early binding(compile) is done according to the type of pointer, since print() function is declared with virtual 
 *                  keyword so it will be bound at run-time(output is print derived class as pointer is pointing to object
 *                  of derived class) and show() is non-virtual so it will be bound during compile time(output is show base class as 
 *                  pointer is of base type)
 * 
 */

/*
 *
 *  Working of virtual function(concept of VTABLE and VPTR)
 * 
 *  First: 
 *      every class that uses virtual function (or is derived from a class that uses virtual functions) is given its own virtual table.
 *       
 *      table is simply a static array that compiler sets up a compile time. 
 *      
 *      a virtual table contains one entry for each virtual function that can be called by objects of the class.
 * 
 *      each entry in this table is simply a function pointer that points to the most derived functioon accessible by that class.
 * 
 * 
 * Second:
 *      the compiler also adds a hidden pointer to the base class, which we call *_vptr.
 * 
 *      *_vptr is set(automatically) when a class instance is created so that it points to the virtual table for that class.
 * 
 *      Unlike the *this pointer, which is actually a function parameter used by the compiler to resolve self-references
 * 
 *      *_vptr is a real pointer. Consequently, it makes each class object allocated bigger by the size of one pointer..
 * 
 *      it also means that *_vptr is inherited by derived classes.
 * 
 *  
 * Note:
 *      calling a virtual function is slower than calling a non-virtual function for a couple of reasons:   
 *          
 *          1) we have to use the *__vptr to get to the appropriate virtual table.
 * 
 *          2) we have to index the virtual table to find the correct function to call. Only then we can call the function.
 * 
 *          As a result, we have to do 3 operations to fin the function to call, as opposed to 2 operations for a normal indirect function call,
 *          or one operation for a direct function call.
 * 
 */

int main(){
    base* bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime
    bptr->print();

    // non-virtual vundtion, binded at compile time
    bptr->show();

    return 0;
}