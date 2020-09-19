/*
 *
 *  Mutable Lambda: if you want to change the value of the local variable inside the lambda expression,
 *  but the value of the local variable outside the lambda expression remains unchanged. 
 * 
 */
#include <iostream>

int main(){

    int cat = 5;

    [cat]() mutable{    cat = 9;
                        std::cout << "Inside Lambda expression: cat :: " << cat << std::endl;

                        // if you do not want to capture the reference of the function in another 
                        // variable you can provide () making the lambda expression to call directly
                        }(); 


    std::cout << "Outside Lambda expression: cat :: " << cat << std::endl;

    return 0;
}