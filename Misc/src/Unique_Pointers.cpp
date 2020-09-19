/*
 *  Unique Pointers : 
 *      These are kind of smart pointer which behaves like a normal pointer 
 *      except they handle the deallocation of memory for you.
 * 
 *      you need to mention the memory header
 */

#include "../header/Unique_Pointers.h"

int main() {

    // example of integer pointer
    // you don't have to specify the *(astrik sign) to declare it as integer pointer
    // unique_ptr takes care of it.
    cout << "Creating Integer Pointer" << endl;
    {
        // here we are using the constructor of shared pointer to create object of int
        unique_ptr<int> pInt(new int);
        *pInt = 7;
    }

    cout << endl << "Pointer object of array" << endl;
    // creating the pointer of class Test
    {
        // here we are using the constructor of shared pointer to create object of class Test
        unique_ptr<Test>  pTest(new Test);
        pTest->greet();
    }

    cout << endl << "Array of pointer to class" << endl;
    // we can use the unique pointers with arrays
    {
        unique_ptr<Test[]> pTest1(new Test[2]);
        pTest1[0].greet();
    }

    // so now when you create a object of class Temp it 
    // will create two objects of class Test
    cout << endl << "Creating the object of class Temp to create two objects of class Test" << endl;
    {
        Temp t;
    }
    
    cout << "Finished" << endl;

    return 0;
}