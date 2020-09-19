#include "../header/move_constructors.h"

int main() {

    std::vector<Test> vec;

    // copy of Test the vector stoles by copying Test() from the actual copy
    // original would try to deallocate the memory that vector had stolen for its internal storage.
    // so for that you have to make the Test()._pBuffer as nullptr. in the move constructor
    
    vec.push_back(Test());

    return 0;
}