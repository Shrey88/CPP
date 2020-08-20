/*
 *  Cast is a special operator that forces one data type to be converted into another.
 *  As an operator, a cast is unary and has the same precedence as any other unary operator.
 * 
 *  const_cast<type> (expr):
 *                          is used to explicitly override const and/or volatile in a cast.
 * 
 *                          The target type must be the same as the source type except for the alteration of its const or volatile attributes.
 *                          
 *                          This type of casting manipulates the const attributes of the passed object, either to be set or removed.
 *                          
 */


/*
 *  const_cast can be used to change non-const class members inside a const member function.
 * 
 *  In below code const member function fun(), 'this' is treated by the compiler as 'const student* const this', 
 *  i.e. 'this' is a constant pointer to a constant object, thus compiler doesn't allow to change the data members through 
 *  'this' poiinter.
 * 
 * const_cast changes thhe type of 'this' pointer to 'student* const this'
 * 
 */
 
#include <iostream>
#include <typeinfo>

using namespace std;

class Student
{
    private:
            int roll;
    public:
            //constructor
            Student(int r): roll(r){};

            // const function that changes roll with the help of const_cast
            void func() const
            {
                (const_cast <Student*> (this))->roll = 5;
            }

            int getRoll() 
            {
                return roll;
            }
};

int main(void)
{
    Student s(3);

    std::cout << "Old roll number: " << s.getRoll() << std::endl;

    s.func();

    std::cout << "New roll number: " << s.getRoll() << std::endl;

    return 0;
}


/*
 *
 *  const_cast can be used to pass const data to a function that doesn't receive const.
 * 
 *  fun() receives a normal pointer, but a pointer to a const can be passed with the hekp of const_cast.
 *  
 */

int fun(int* ptr)
{
    return (*ptr + 10);
}

int main(void)
{
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast<int *> (ptr);
    std::cout << fun(ptr1);
    return 0;
}


/*
 *
 * it is undefined behavior to modify a value which is initially declared as const.
 * 
 * the output of the program is undefined.
 * 
 * variable 'val' is a const variable and the call 'fun(ptr1)' tries to modify 'val' using const_cast.
 */

int fun(int* ptr)
{
    *ptr = *ptr + 10;
    return (*ptr);
}

int main(void)
{
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast<int *> (ptr);
    std::cout << fun(ptr1);
    return 0;
}


/*
 *
 *  if is fine to modify a value which is not initially declared as const.
 * 
 *  in the above program, if we remove const from declaration of val, the program
 *  will produce 20 as output
 */
int fun(int* ptr)
{
    *ptr = *ptr + 10;
    return (*ptr);
}

int main(void)
{
    int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast<int *> (ptr);
    std::cout << "return value : "<< fun(ptr1) << std::endl;
    std::cout << "val : " << val << std::endl;
    return 0;
}

/*
 *  const_cast is considered safer than simple type casting.
 * 
 *  It's safer in the sense that the casting won't happen if the type of cast is not same as original object.
 * 
 *  the following program fails in compilation because 'int* is being typecasted to char*'
 */

int main(void)
{
    int a = 40;
    const int* b = &a;
    char* c = const_cast<char*> (b);
    *c = 'A';

    return 0;
}


/*
 *
 *  const_cast can also be used to cast away volatile attribute.
 *  
 *  e.g. in the following program, the typeid of b is PVKi (poitnter to a volatile and constant integer)
 *  and typeid of c is Pi(pointer to integer)
 */ 

int main(void)
{
    int a = 40;

    const volatile int* b = &a;

    std::cout << "typeid of b : " << typeid(b).name() << std::endl;

    int* c = const_cast<int*> (b);

    std::cout << "typeid of c : " << typeid(c).name() << std::endl;

    return 0;
}