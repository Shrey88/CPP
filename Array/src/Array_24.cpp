#include <iostream>

/*
 *  This is how we declare the int array with help of new operator
 */
int main(){

    int *test = new int[5];

    for(int i = 0; i < 5; i++){
        std::cout << test[i] << std::endl;
    }

    return 0;
}