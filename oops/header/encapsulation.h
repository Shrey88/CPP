#ifndef ENCAPSULATION_H_ 
#define ENCAPSULATION_H_

#include <iostream>

using namespace std;
class Company {
    public:
        void display_name(){
            cout << "XYZ Company" << endl;
        }
};

class Finance : public Company{

    private:
        int x;

    public:
        int get_x(){
            return x;
        }
};

class Sales: public Company{

    private:
        int y;

    public:
        int get_y(){
            return y;
        }
};
#endif