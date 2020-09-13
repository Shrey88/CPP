/*
 *
 *  Overloading the operator =
 * 
 * if you are defining the operator overloading for = then you also need to 
 * mention the method for copy constructor.
 * 
 */

#include<iostream>

class Test{

private:
    int id;
    std::string name;

public:
    Test():id(0), name(""){
    
    }

    Test(int id, std::string name): id(id), name(name){

    }

    void print(){
        std::cout << id << ": " << name << std::endl;
    }


    // overloading the operator =
    // here we are going to return the const reference of object 
    // because we don't want others to make changes to reference it returns
    const Test &operator=(Test const &t){
        std::cout << "Assignment running" << std::endl;
        this->id = t.id;
        this->name = t.name;

        return *this;
    }

    // copy constructor
    Test(const Test &other){
        std::cout << "Copy Constructor" << std::endl;
        this->id = other.id;
        this->name = other.name;

        //*this = other     <-- this will do the same what we have done in above two steps, 
        // but to that it will call the operator overloading method that we have defined.
    }
};

/*
int main(){

    Test test1(10, "Mike");
    std::cout << "Print test1"  << std::endl;
    test1.print();

    Test test2(20, "Bob");
    std::cout << "Print test2"  << std::endl;
    // this is Shallow Copy, which is the default implementation
    // here the value of the variable from test1 are copied to test2 variable.
    // consider test1 was pointer and performing the below step will make test2
    // point to the same memory address as test1.
    test2 = test1;
    
    // the below statement is equivalent to test2 = test1
    // test2.operator=(test1);

    test2.print();

    Test test3;
    std::cout << "Print test3" << std::endl;
    test3.operator=(test2);
    test3.print();

    // when you try to do this, it will not call the operator overloading method
    // this is called copy at initialization
    // it is calling the copy constructor implicitly
    std::cout << std::endl;
    Test test4 = test1;
    test4.print();

    return 0;
}
*/