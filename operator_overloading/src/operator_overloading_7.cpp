/*
 *
 * Using the objects as key and overloading the < and == operator to insert the value 
 * into the map
 * 
 */

#include<iostream>
#include<map>

class Person{

private:
    std::string name;
    int age;

public:
    Person(): name(""), age(0){

    };

    Person(std::string name, int age): name(name), age(age){

    };

    void print() const{
        std::cout << name << ": " << age << std::endl; 
    };


    // in order to store the objects as keys in map we need to 
    // overload the < operator.
    bool operator<(const Person &other) const{

        if(this->name < other.name)
            return true;
        else if (this->name == other.name)
        {
            return (this->age < other.age);
        }
        else
        {
            return false;
        }
        
        return false;
    };

};

int main(){

    std::map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    
    // when we try to add the person with same name and different age
    // it wont be able to add as we have not handled the condition 
    // where if name is same it should check for the age to make the entry into map
    people[Person("Mike", 44)] = 44;
    people[Person("Sue", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for(std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++){

        std::cout << it->second << " : ";
        it->first.print();
    }
}