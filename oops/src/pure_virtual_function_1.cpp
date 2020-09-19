#include "../header/pure_virtual_function_1.h"

int main(){

    Cat c("Betsy");

    cout << c.speak() << endl;

    Dog d("Sally");

    cout << d.speak() << endl;


    return 0;
}