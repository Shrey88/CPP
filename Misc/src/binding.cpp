/*
 *
 * bind allows you to create kind of aliases to functions, a bit like function pointers
 * but there are some other things that you can do with them basically.
 * 
 */

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;
class Test {

    public:
        int add(int a, int b, int c) {
            cout <<"a : " << a << ", b : " << b << ", c : " << c << endl;

            return a+b+c;
        }

};

int add(int a, int b, int c) {
    cout <<"a : " << a << ", b : " << b << ", c : " << c << endl;

    return a+b+c;
}

int run(function<int(int, int)> func){
    return func(7 , 3);
}


int main(){

    // here we created an alias calc1
    auto calc1= bind(add, 3, 4, 5);
    cout << calc1() << endl;


    // here _1, _2, _3 are the placeholders and for that you need to use
    // the namespace placeholders
    auto calc2 = bind (add, _1, _2, _3);

    // we are passing the values to the placeholders
    cout << calc2(10, 20, 30) << endl;


    // the position of the placeholders can be changed
    auto calc3 = bind (add, _2, _3, _1);
    cout << calc3(10, 20, 30) << endl;


    // we can also have a default value in bind so that we don't have 
    // to provide the value for the one of the placeholder that will not 
    // be mentioned.
    auto calc4 = bind (add, _2, 100, _1);
    cout << calc4(200, 200) << endl;


    // we can make use of function call
    auto calc5 = bind (add, _2, 100, _1);
    cout << run(calc5) << endl;


    // we can also pass the pointer to the class method and the object of the class
    Test test;
    auto calc6 = bind(&Test::add, test, _2, 50, _1);
    cout << run(calc6) << endl;
    
    return 0;
}