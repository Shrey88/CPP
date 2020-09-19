#ifndef ACCESS_MODIFIERS_H_
#define ACCESS_MODIFIERS_H_

#include <iostream>

using namespace std;

class Parent{

    /*
     *  Protected: Protected access modifier is similar to that of private access modifiers, 
     *  the differece is that the class member declared as protected are inaccessible outside the 
     *  class but they can be accessd by any subclass(derived class) of that
     */
    protected:
        int id_protected;
};

class Child : public Parent{

    public:
        void setID(int id){
            
            /*
             *  child class is able to access the inherited 
             *  protected data members of base class
             */
            id_protected = id;
        };

        void displayId(){
            cout << "id_protected is : " << id_protected << endl;
        }
};

#endif