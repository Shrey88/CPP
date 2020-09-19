#ifndef PURE_VIRTUAL_FUNCTION_1_H_
#define PURE_VIRTUAL_FUNCTION_1_H_

/*
 * Pure Virtual Function with bodies
 */

#include <iostream>

using namespace std;

class Animal{
    protected:
        std::string m_name;

    public:
        /* 
         *
         * makig constructor protected wont allow people to create
         * Animal objects directly but we still want derived classes
         * to be able to use it.
         * 
         */
        Animal (const std::string& name): m_name(name){

        };

        
        std::string getName() const{
            return m_name;
        };

        virtual const char* speak() = 0;

        virtual ~Animal() = default;
};

class Cat: public Animal{

    public: 
        Cat(const std::string& name):Animal(name){

        };

        virtual const char* speak() {
            return "Meow";
        };
};

class Dog: public Animal{
    public:
        Dog(const std::string& name):Animal{name}{

        };

        virtual const char* speak() {
            return Animal::speak();
        };
};

/*
 *
 * In this case, speak() is still considered a pure virtual function(even though it 
 * has been given a body, because of the =0) and Animal is still considered an 
 * abstract class ( and thus can't be instantiated)
 * 
 * Any class that inherits from Animal needs to provide its own definition for 
 * speak() or it will also be considered an abstract base class.
 * 
 * when providing a body for a pure virtual function, the body must be 
 * provided separately (not inline)
 * 
 * This paradigm can be useful when you want your base class to provide a default 
 * implementation for a function , but still foce any derived classes to provide their own 
 * implementation. However, if the derived class is happy with the default implementation 
 * provided by the base class, it can simply call the base class implementation directly.
 * 
 */
const char* Animal::speak(){

    return "buzz";
}

#endif