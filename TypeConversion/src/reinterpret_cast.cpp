/*
 *
 *  reinterpret_cast<type>(expr):
 *                              it chages a pointer to any other type of pointer.
 *                              
 *                              it also allows casting from pointer to an integer type and vice versa
 *                          
 *                              it is used to convert one pointer of another pointer of any type, 
 *                              no matter either the class is related to each other or not.
 * 
 *                              it does not check if the pointer type and data pointed by the pointer is same or not.
 * 
 *  Syntax:
 *          data_type* var_name = reinterpret_cast<data_type*>(pointer_variable);
 * 
 *  Purpose:
 *          reinterpret_cast is a very special and dangerous type of casting operator, and it is suggested to use it using proper data tye
 *          i.e. (pointer data type should be same as original data type)
 * 
 *          it can typecast any pointer to any other data type.
 * 
 *          it is used when we want to work with bits.
 * 
 *          if we use this type of cast then it becomes a non-portable product. So, it is suggested not to use this concept unless required.
 * 
 *          it is only used to typecast any pointer to its original type.
 * 
 *          Boolean value will be converted into integer value i.e. 0 for false and 1 for true 
 */

#include<iostream>
#include<bits/stdc++.h>


// int main()
// {
//     int* p = new int(65);

//     char* ch = reinterpret_cast<char*>(p);

//     std::cout << *p << std::endl;

//     std::cout << *ch << std::endl;

//     std::cout << p << std::endl;

//     std::cout << ch << std::endl;

//     return 0;
// }


/*
 *  illustrating usig structure.
 */

// struct mystruct{
//     int x;

//     int y;

//     char c;

//     bool b;
// };

// int main()
// {
//     mystruct s;

//     //Assigning values
//     s.x = 4; 
    
//     s.y = 5;

//     s.c = 'a';

//     s.b = true;
    
//     // data type must be same during the casting as that of the original
//     // converting the pointer of 's' to pointer of int type in 'p'
//     int* p = reinterpret_cast<int*>(&s);

//     std::cout << "size of s : " << sizeof(s) << std::endl;

//     //printing the value currently pointed by *p
//     std::cout << *p << std::endl;

//     //incrementing the pointer by 1
//     p++;

//     //printing the next integer value
//     std::cout << *p << std::endl;

//     p++;

//     //we are casting back char* pointed by p using char* ch
//     char* ch = reinterpret_cast<char*>(p);

//     //printitng the character value pointed by (*ch)
//     std::cout << *ch << std::endl;

//     ch++;

//     /*
//      *  since, (*ch) now points to boolean value, so it is required to access the value using
//      *  same type conversion.
//      *  do, we have used data type of *n to be bool
//      */
//     bool* n = reinterpret_cast<bool*>(ch);

//     std::cout << *n << std::endl;

//     // we can also use this line of code to print the value pointed by (*ch)
//     std::cout << *(reinterpret_cast<bool*>(ch)) << std::endl;

//     return 0;
// }


/*
 *  CPP code to illustrate the pointer reinterpret
 */
class A {
    public:
        void fun_a()
        {
            std::cout << "In class A " << std::endl;
        }
};

class B {
    public:
        void fun_b()
        {
            std::cout << "In class B" << std::endl;
        }
};

int main()
{
    //creating object of class B
    B* x = new B();

    //converting the pointer to object
    //referenced of class B to class A
    A* new_a = reinterpret_cast<A*>(x);

    new_a->fun_a();

    return 0;
}