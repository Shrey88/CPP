/*
 *
 *  Reference Pointers : 
 * 
 */
#include <iostream>



int main()
{
   /*
    *  Pointers are used to store the address of variables or a memory location.
    * 
    *  A variable can be declared as a pointer by putting * in the declaration
    */
   int i = 10;  // variable 

   int *ptr1 = &i;  // Pointer to i

   std::cout << "Pointer to i : " << *ptr1 << std::endl;



    /*
     *  Reference : When a variable is declared as a reference, it becomes an altrernative name for an existing variable.
     *              A variable can be declared as a reference by putting & in the declaration.
     */

    int &ref = i;   // reference to i

    ref = 20; // value of i now changed to 20

    std::cout << "Reference to i : " <<ref << std::endl;


    /*
     *  Reference to pointers : is a modifiable value that's used same as a normal pointer.
     * 
     *  Here ptr_ref is a reference to the pointer ptr2 which points to varaible i. Thus printing the value at ptr_ref gives the value of i
     */
    int * ptr2 = &i; // Pointer to i

    int *&ptr_ref = ptr2;

    std::cout << "Reference to pointer : " << *ptr_ref << std::endl;

    /*
     *  let us try to change the address represented by a reference to a pointer
     */
    int j = 10;
    int k = 20;

    int * ptr4 = &j;    // Pointer to j

    int *&ptr_ref1 = ptr4;  // reference to a pointer ptr

    std::cout << "Reference pointer first pointing to : " << *ptr_ref1 << std::endl;

    ptr_ref1 = &k; // trying to change the reference to pointer ptr_ref to address of k

    std::cout << "Reference pointer after changing the address : " << *ptr_ref1 << std::endl;


    /*
     *  const reference to pointer : is a non-modifiable value that's used same as a const pointer
     * 
     */
    int m = 10;
    int n = 20;

    int *ptr5 = &n;  // Pointer to i

    int * const& ptr_ref2 = ptr5; // const reference to a pointer 

    ptr_ref2 = &m;  // trying to change the const refernce to pointer ptr_ref2 to address of m
                    // since we have declared it as const we cannot change the reference.

    *ptr_ref2 = 100; // we cannot change the reference but we can change the valule of it.

    std::cout << "" << *ptr_ref2 << std::endl;


    /*
     *  Referende to constant pointer : is a  reference to a constant pointer.
     * 
     */
    int a = 10;
    int b = 20;

    int const* ptr6 = &i;    //const pointer to i
    
    int const *& ptr_ref3 = ptr6;     // reference to a const pointer.

    *ptr_ref3 = 124;    // trying to change the value of the pointer ptr6 with the help of its rerference ptr_ref3
    return 0;

}