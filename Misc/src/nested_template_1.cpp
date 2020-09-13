#include "../header/nested_template_1.h"


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

    for(Ring<std::string>::iterator it = textRing.begin(); it != textRing.end(); it++){
        std::cout << *it << std::endl;
    }
     
    for(std::string text: textRing){
       std::cout << text << std::endl; 
    }

    return 0;
}