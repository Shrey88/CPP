#include "../header/nested_template.h"


int main() {
    
    // we are creating our own class that can hold no of values based on 
    // value passed as the constructor argument of type mentioned 
    Ring<std::string> textRing(6); // 
    

    // we will also have our own method of adding values to it
    textRing.add("One");
    textRing.add("Two");
    textRing.add("Three");
    textRing.add("Four");
    textRing.add("Five");

    // for(int i = 0; i < textRing.size(); i++){
    //     std::cout << textRing.get(i) << std::endl;
    // }

    try {
        std::cout << textRing.get(7) << std::endl;
    }
    catch(const char* c){
        std::cout << c << std::endl;
    }
     

    return 0;
}