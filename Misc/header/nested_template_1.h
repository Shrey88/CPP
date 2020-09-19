#ifndef NESTED_TEMPLATE_1_H_
#define NESTED_TEMPLATE_1_H_

#include <iostream>

template<class T>
class Ring {
private:    
    T *m_values;
    int m_size;
    int index;
public:
    class iterator;

public:
    Ring(int size): m_size(size), m_values(NULL),index(0){
        m_values = new T[size];
    }

    void add(T value){
       
        if(index < m_size) {
            
            m_values[index++] = value;
            
        }
        else if (index == m_size)
        {
            index = 0;
        }
    }

    auto size() -> decltype(m_size){
        return m_size;
    }

    auto get(int i) -> decltype(m_values[0]){
        if(i < m_size)
            return m_values[i];
        else
            throw ("exception: index out of bound");
    }

    iterator begin(){
        return iterator(0, *this);
    }

    iterator end(){
        return iterator(m_size, *this);
    }

};

template <class T>
class Ring<T>::iterator{
private:
    int m_pos;
    Ring m_ring;

public:
    iterator(int pos, Ring &aRing):m_pos(pos), m_ring(aRing){

    }

    iterator &operator++(int){ // overloading the postfix increment operator. for prefix you dont have to mentions the argument
        m_pos++;

        return *this;
    }

    iterator &operator++(){ // overloading the prefix increment operator.
        m_pos++;

        return *this;u dont have to mentions the argument
    }

    T &operator*(){     // overloading the dereference operator
        return m_ring.get(m_pos);
    }

    bool operator!=(const iterator &other)const{    // overloading the != operator
        return this->m_pos != other.m_pos;
    }

    void print(){
        std::cout << "Hello from iterator" << std::endl;
    }
};
#endif