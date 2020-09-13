/*
 *
 *  Function pointer which takes the argument and returns the value.
 * 
 */

#include<iostream>
#include<vector>
#include<algorithm>

bool match(std::string test){
    return test.size() == 3;
}


// custom method to return the no of strings matching the condition
// this will take the vector and function pointer as argument.
int countStrings(std::vector<std::string> &texts, bool (*match)(std::string test)){

    int iNo_of_Strings = 0;

    std::vector<std::string>::iterator it;

    for(it = texts.begin(); it != texts.end(); it++){

        if((*match)(*it)){
            ++iNo_of_Strings;
        }
    }

    return iNo_of_Strings;
}
int main(){
    std::vector<std::string> texts;
    
    texts.push_back("One");
    texts.push_back("Two");
    texts.push_back("Three");
    texts.push_back("Four");
    texts.push_back("Two");
    texts.push_back("Three");

    // it will return true if the no of characters in the string are 3
    // else it will return 0
    std::cout << match("Oned") << std::endl;

    // how do we find out which values from the vector matches the condition
    // you can use the algorithm method which accepts the 
    // the starting address of the vector and ending address of the vector 
    // and the function pointer
    // it will return the no of strings mathcing the condition.
    std::cout<< "Using the algorithm method :" << std::endl;
    std::cout << std::count_if(texts.begin(), texts.end(), match) << std::endl;

    std::cout << "Using the custom method : " << std::endl;
    std::cout << countStrings(texts, match) << std::endl;

    return 0;
}