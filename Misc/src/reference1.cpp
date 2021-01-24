/*
 *  Reference : 
 */


#include <iostream>
#include <vector>
#include <string>

int main(){

    std::vector<std::string> storages{"Larry", "Moe", "Curly"};


    /*
     *  str is a reference to each vector element.
     */
    for (auto &str:storages)
    {
        str="Funny";
    }


    /*
     *  if you dont want to change the values of the array
     *  you can mentioon const keyword 
     */

    for(auto const &str:storages){
        str = "Funny";  // you cannot change the value of the vector.
    }
}