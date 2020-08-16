#include <iostream>
using namespace std;


/*
    When exceptions is thrown, destructors of th objects(whose scope ends with try block)
    is automatically called before the catch block get executed.

    What we are going to see is what happens when an exception is thrown from a constructor.

    destructors are called in the reverse order of the constructors.

    Also, after the try block, the destructors are called only for completely constructed objects.
*/
class Test {
    static int count;
    int id;
public:
    Test() {
        count++;
        id = count;
        cout << "Constructing object number " << id << endl;
        if (id == 4)
            throw 4;
    }
    ~Test() { cout << "Destructing object number " << id << endl; }
};

int Test::count = 0;

int main() {
    try 
    {
        Test array[5];
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }
}