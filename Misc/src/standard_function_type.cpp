/*
 *
 *  Standard Function Type
 * 
 *  function type is very nice convenience in C++ 11 that lets you easily 
 *  define a type equivalent to what it can be used to reference any callable type in 
 *  C++ 11 which basically means anything you can call around brackets
 * 
 */

#include "../header/standard_function_type.h"

bool check(std::string name){

    return (name.size() == 3);
}


// we will define a function that accepts anything that's callable which turns bool 
// and accepts the string.
// for this you need to include the header file functional.
// here in the angular bracket you need to mention the return type along with the function
// parameters in the round braces.
void run(std::function<bool(std::string)> check){
    std::string name = "dog";

    std::cout << check(name) << std::endl;
}

int main(){
    
    int size = 5;
    int count = 0;

    std::vector<std::string> vec{"one", "two", "three", "four", "five"};

    // passing the lambda function
    count = count_if(vec.begin(), vec.end(), [size](std::string name){ return name.size() == size; });
    std::cout << count << std::endl;


    // passing the function pointer
    count = count_if(vec.begin(), vec.end(), check);
    std::cout << count << std::endl;


    // passing the functor
    Check c;
    count  = count_if(vec.begin(), vec.end(), c);
    std::cout << count << std::endl;


    // passing the function with callable function 
    std::cout << std::endl;

        // passing the lambda function which returns bool and accepts string
        run([size](std::string name){ return name.size() == size; });

        // passing the function another function which returns bool and accepts string
        run(check);


        // passing the functors which returns bool and accepts string.
        run(c);

    
    /*
     *  there is possibility of using this syntax to define the local variable as well
     *  
     *  let's say we had some function in a void return type.
     * 
     *  let's consdier that it takes two integers and returns an integer.
     */
    std::function<int(int, int)> add = [](int one, int two){ return one+two; };

    std::cout << add(7, 3) << std::endl;
    

    return 0;
}