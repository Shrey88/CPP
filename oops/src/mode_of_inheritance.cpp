#include "../header/mode_of_inheritance.h"

int main(){

    B b; 
    b.x = 10 ; // x is public
    
    C c;
    c.x = 10;    // x will be inaccessible here because 
                // it has been nade protected by the base class while inheriting

    D d;
    d.x = 10;   // x will be inaccessible here because
                // it has been made private by the base class while inheriting

    return 0;
}