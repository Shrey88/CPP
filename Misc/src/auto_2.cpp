#include <iostream>

/*
 *  auto keyword as the function return type to do type inference 
 *  based on the returned value.
 * 
 */

// we can add return type to function declaration as follows
auto test()-> int {
    return 10;
}

// the above declaration can be useful if you are using the tempate function.
template <class T>
auto test_1(T value) -> int {
    return value;
}

// you can also use decltype to tell what will the return type.
template <typename T>
auto test_2(T value) -> decltype(value){
    return value;
}

// you can also use the expression
// here the return type will depend either on the type of value present 
// in variable value1 or value2
template <typename T, typename S>
auto test_3(T value1, S value2)->decltype(value1<value2?value1 : value2){
    return (value1<value2?value1 : value2);
}

int main(){

    std::cout << test() << std::endl;

    std::cout << test_1(10) << std::endl;

    std::cout << test_2("Shrey") << std::endl;
    std::cout << test_2(13939.324) << std::endl;

    std::cout << test_3(2343.2343, 23434234) << std::endl;
    std::cout << test_3(12345.57, 23) << std::endl;

    return 0;

}