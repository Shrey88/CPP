/*
 *  Size of Pointers for different types will always be 4 bytes
 *  
 * 
 */


#include <iostream>
#include <vector>

void main(){


    int *p1 {nullptr};
    std::cout << "Size of p1 -> " << sizeof(p1) << std::endl;

    double *p2 {nullptr};
    std::cout << "Size of p2 -> " << sizeof(p2) << std::endl;

    unsigned long long *p3 {nullptr};
    std::cout << "Size of p3 -> " << sizeof(p3) << std::endl;

    std::vector<std::string> *p4 {nullptr};
    std::cout << "Size of p4 -> " << sizeof(p4) << std::endl;

    std::string *p5 {nullptr};    
    std::cout << "Size of p5 -> " << sizeof(p5) << std::endl;


}