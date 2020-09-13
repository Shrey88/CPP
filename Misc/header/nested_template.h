#ifndef NESTED_TEMPLATE_H_
#define NESTED_TEMPLATE_H_

#include <iostream>

template<class T>
class Ring {
private:    
    T *m_values;
    int m_size;

public:
    Ring(int size): m_size(size), m_values(NULL) {
        m_values = new T[size];
    }

    void add(T value){
       static int index = 0;
        if(index < m_size) {
            m_values[index] = value;
            ++index;
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

    ~Ring(){

        delete [] m_values;
    }
};


#endif