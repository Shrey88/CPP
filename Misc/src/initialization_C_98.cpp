#include <iostream>

/*
 *
 *  Initializing the class variables or structure variable in C++ 98
 * 
 */

int main(){
    int values[] = {1, 2, 3, 4, 5};

    std::cout << values[0] << std::endl;

    class C{

    public:
        std::string text;
        int id;
    };

    // this is how we can initialize the data members of the class
    C c1 = {"Welcome", 9};


    // similar thing can be done with the structures as well.
    struct{
    public:
        std::string text;
        int id;
    } r1 = {"Hello", 7}, r2 = {"World", 8};

   

    std::cout << r1.text << " " << r2.text << "! " << c1.text << std::endl;

    return 0;
}