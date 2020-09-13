/*
 *
 *  Overloading the operator << (left shift bit)
 * 
 */

#include <iostream>

class Test{

private:
    int id;
    std::string name;

public:
    Test(): id(0), name(""){

    }

    Test(int id, std::string name): id(id), name(name){

    }

    const Test &operator=(const Test &other)
    {
        this->id = other.id;
        this->name = other.name;

        return *this;
    }

    Test(const Test &other){
        *this = other;
    }

    // friend function is used to access the private members or method outside the class.
    friend std::ostream &operator<<(std::ostream &out,const Test &other);
};

std::ostream &operator<<(std::ostream &out, const Test &other){
    out << other.id << " : " << other.name;
    return out;
}

/*
int main(){
    Test test1(10, "Mike");

    std::cout << test1 << std::endl;

    return 0;
}
*/