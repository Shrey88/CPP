#include "../header/constructors_memory.h"

int main() {

    Test test1(7);
    std::cout << test1 << std::endl;

    Test test2(8);
    std::cout << test2 << std::endl;

    Test test3;
    std::cout << test3 << std::endl;
    
    test3 = test1;
    std::cout << test3 << std::endl;


    return 0;
}