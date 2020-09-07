/*
 *
 *  The qualifier const can be applied to the declaration of any variable to specify that its 
 *  value will not be changed. const keyword applies to whatever is immediately to its left.
 *  If there is nothing to its left, it applies to whatever is immediately to its right.
 * 
 */

#include<iostream>


/*
 *
 * const char *ptr : This is a pointer to a constant character. 
 * 
 * You cannot change the value pointed by the ptr, but you can change the pointer itself.
 * const char* is a (non-const)pointer to a const char.
 * 
 * There is no difference between const char *p and char const *p as both are pointer to a const char and position of 
 * *(asterik) is also same
 */
// int main()
// {
//     char a = 'A', b = 'B';
//     const char *ptr = &a;

//     // *ptr = b; illegal  statement (assignment of read only location *ptr)

//     //ptr can be changed
//     std::cout << "Value pointed to by ptr : " << *ptr << std::endl << std::endl;
//     ptr = &b;
//     std::cout << "Value pointed to by ptr : " << *ptr << std::endl << std::endl;

//     return 0;
// }

/*
 *
 * char* const ptr : This is a constant pointer to a non-constant character.
 *  
 * You cannot change the pointer p, but you can change the value pointed by ptr. 
 * 
 * pointer always points to the same address, only the value at the location is changed.
 */
// int main()
// {
//     char a = 'A', b = 'B';
//     std::cout << "Address of a : " << &a << std::endl;
//     std::cout << "Address of b : " << &b << std::endl << std::endl;

//     char* const ptr = &a;
//     std::cout << "Value pointed to by ptr : " << *ptr << std::endl;
//     std::cout << "Address ptr is pointing to " << ptr << std::endl << std::endl ;

//     // ptr = &b; illegal statement (assignment of read only variable ptr)

//     //changing the value at the address ptr is pointing to
//     *ptr = b;
//     std::cout << "Value pointed to by ptr : " << *ptr << std::endl;
//     std::cout << "Address ptr is pointing to :" << ptr << std::endl;

//     return 0;
// }

/*
 *
 * const char* const ptr: This is a constant pointer to constant character.
 * 
 * You can neither change the value pointed by ptr nor the pointer ptr.
 * 
 */
int main()
{
    char a = 'A', b = 'B';
    const char* const ptr = &a;

    std::cout << "Value pointed to by ptr : " << *ptr << std::endl;
    std::cout << "Address ptr is pointing to : " << ptr << std::endl << std::endl;

    //ptr = &b; illegal statement (assignment of read only variable ptr)
    //*ptr = b; illegal statement (assignment of read only location *ptr)

    return 0;
}