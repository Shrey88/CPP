#ifndef ABSTRACTION_H_
#define ABSTRACTION_H_

#include <iostream>

using namespace std;

class CoffeeMachine {

    private:
        int coffee_beans = 80;
        int milk = 150;
        int water = 150;

        int expresso_c(){
            /*
             *  implementation that is hidden from outside world
             */
            if(coffee_beans >= 20 && water >= 50){
                coffee_beans -= 20;
                water -= 50;
                
            }                
            else if (coffee_beans < 20)
            {
                return 1;
            }
            else if (water < 50){
                return 2;
            }
            
            return 0;
        };

        int cappuccino_c(){
            /*
             *  implementation that is hidden from outside world
             */
            if(coffee_beans >=20 && water >= 20 && milk >= 50){
                coffee_beans -= 20;
                water -= 20;
                milk -= 50;
            }
            else if (coffee_beans < 20){
                return 1;
            }
            else if(water < 20){
                return 2;
            }
            else if(milk < 50){
                return 3;
            }

            return 0;
        };
    
    public:

        void expresso(){
            int iResult = expresso_c();
            if(iResult == 0){
                cout << "Expresso Coffee Ready" << endl;
            }
            else if (iResult == 1){
                cout << "Not enough coffee beans" << endl;
            }
            else if (iResult == 2){
                cout << "Not enough water" << endl;
            }
        }

        void cappuccino(){
            int iResult = cappuccino_c();
            if(iResult == 0){
                cout << "Cappuccino Coffee Ready" << endl;
            }
            else if (iResult == 1){
                cout << "Not enough coffee beans" << endl;
            }
            else if (iResult == 2){
                cout << "Not enough water" << endl;
            }
            else if (iResult == 3){
                cout << "Not enough milk" << endl;
            }
        }
};
#endif