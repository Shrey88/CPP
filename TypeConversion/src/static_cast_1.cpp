#include "../header/static_cast_1.h"


int main() {

    Parent parent;
    Brother brother;

    Parent *ppb = &brother; // ppb is rerferncing to brother and it is implicitly converted to Parent type
    ppb->pprint();          // when you try to access print method you will be accessing pprint and not bprint


    // this is dangerous and result in undefined behaviour
    Brother *pbb = static_cast<Brother *>(ppb);
    

    return 0;

}