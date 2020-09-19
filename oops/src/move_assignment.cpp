#include "../header/move_assignment.h"

int main() {

    std::vector<Test> vec;

    Test test1; 
    test1 = getTest();
    
    std::cout << test1 << std::endl;
    
    return 0;
}