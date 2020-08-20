/*
 *  static_cast<type> (expr):
 *                          it performs a nonpolymorphic cast.
 *                          e.g. it can be used to cast a base class pointer into a derived class pointer.
 * 
 *                          it is a compile time cast.
 * 
 *                          it does things like implicit conversions between types(such as int to float, or pointer to void*)
 *                          and it can also call explicit conversion functions(or implicit ones)
 */

#include<iostream>
#include<string>

// int main ()
// {
//     float f = 3.5; 
    
//     int a = f;      // <-- this is how you do in C

//     int b = static_cast<int> (f);

//     std::cout << "value of b : " << b << std::endl;
// }


/*
 *
 *  making few changes to test the static_cast
 * 
 * 
 *  [Error] invalid static_cast from type 'char*' to type 'int*'
 */

// int main()
// {
//     int a = 10;

//     char c = 'a';

//     // pass at compile time, may fail at run time
//     int *q = (int*)&c;
//     std::cout << "value of *q : " << *q << std::endl;

//     int *p = static_cast<int*> (&c);

//     return 0;
// }


/*
 *
 *  another example of converting object to and from a class.
 * 
 *  Explanation:
 *              when obj is created then constructor is called which in our case is also a Conversion Constructor
 * 
 *              when you create str out obj, compiler will not throw an error as we have defined the Conversion operator.
 * 
 *              when you make obj = 20, you are actually calling the conversion constructor.
 * 
 *              when you make str2 out of static_cast, it is quite similar to string str = obj, but with a tight type checking.
 * 
 *              when you write  obj = static_cast<Int>(30), you are converting 20 into Int using static cast.
 */ 

// class Int
// {
//     int x;

//     public:
//         Int(int x_in = 0) : x {x_in}
//         {
//             std::cout << "Conversion Ctor called : " << std::endl;
//         }
//         operator std::string()
//         {
//             std::cout << "Conversion Operator :" << std::endl;
//             return std::to_string(x);
//         }
// };

// int main()
// {
//     Int obj(3);

//     std::string str = obj;

//     obj = 20;

//     std::string str2 = static_cast<std::string> (obj);

//     obj = static_cast<Int>(30);

//     return 0;
// }


/*
 *  
 *  Inheritance example
 * 
 *  Explanation:
 *              we took address of d and explicitly casted it into Base and stored it in b1.
 *      
 *              we took address of d and used static_cast to cast it into Base and stored it in b2
 */

// class Base{

// };

// class Derived : public Base {

// };

// int main()
// {
//     Derived d;
    
//     Base *b1 = (Base*)(&d); //allowed
    
//     Base *b2 = static_cast<Base*>(&d);
    

//     return 0;
// }


/*
 *  
 *  as we know static_cast performs a tight type checking, let's change the code slightly to see it.
 * 
 *  Output:
 *          error : 'Base' is an inaccessible base of 'Derived'
 */

// class Derived : private Base {

// };

// int main()
// {
//     Derived d;

//     Base* b1 = (Base*)(&d);     //allowed

//     Base* b2 = static_cast<Base*>(&d); // <-- the static_cast will not work with class that is inherited as private / protected

//     return 0;
// }


/*
 *
 *  use static_cast to cast 'to and from' void pointer.
 */

int main()
{
    int i = 10;

    void* v = static_cast<void*> (&i);

    int* ip = static_cast<int*> (v);

    return 0;
}
