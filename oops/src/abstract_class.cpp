#include "../header/abstract_class.h"

/*
 *
 * Abstraction :
 *      Data abstraction is one of the most essential and important feature
 *  of object oriented programming in C++.
 * 
 *      Abstraction means displaying only essential information and hiding the details.
 *  
 *      Data abstraction refers to providing only esential infomation about the data to the
 *  outside world, hiding the background details or implementation.
 * 
 *  e.g.
 *      a man is driving a car, the man only knows that pressing the accelerators will increase 
 *  the speed of car or applying brakes will stop the car but he does not know about how on pressing
 *  accelerator the speed is actually increasing, he does nt know about the inner mechanism of the car or the implementaion
 * of accelerator, brakes etc in the car
 * 
 * That is what abstraction is.
 * 
 * 
 * Abstraction using classes: 
 *      we can implement abstraction in C++ using classes. Class helps us to group data members and member functions using 
 *  available access specifiers. A class can decide which data member will be visible to outside world and which is not.
 * 
 * 
 * Abstraction in Header files:
 *      One more type of abstraction in C++ can be header files.
 *      e.g.
 *          consider the pow() method present in math.h header file. Whenever we need to calculate the power of a number, we 
 *  simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying
 *  algorithm according to which the function is actually calculating the power of numbers.
 * 
 * 
 *  Advantages of Data Abstraction:
 *      helps the user to avoid writing the low level code
 * 
 *      avoids code duplication and increases reusability
 * 
 *      can change internal implementation of class independently without affecting the user.
 * 
 *      helps to increase security of an application or program as only important details are provided to the user.
 */



/*
 *  Implementation of Coffee Vending Machine
 * 
 *  if you see the blue print of the class you will notice that the implementation is 
 *  hidden from the outside world.
 */

int main(){

    CoffeeMachine cm;

    cm.cappuccino();

    cm.expresso();

    cm.expresso();

    cm.cappuccino();

    cm.cappuccino();
}