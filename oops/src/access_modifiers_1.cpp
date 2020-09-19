#include "../header/access_modifiers_1.h"

/*
 *
 *  Access Modifiers
 *      Access modifiers are used to implement an important feature of object oriented Programming
 *  known as Data Hiding
 * 
 *      The Indian secret informatic system having 10 senior members have some top secret regarding national security.
 *  So we can think that 10 people as class data members or member functions who can directly access secret information 
 *  from each other but anyone can't access this information other than these 10 members i.e outside people can't access
 *  information directly without havind any priveleges. This is what data hiding is.
 * 
 * There are 3 types of access modifiers
 *      Public
 * 
 *      Private     // if the access modifiers are not specified then data members/ function will be private by default.
 * 
 *      Protected
 * 
 */

int main(){

    Child obj;

    obj.setID(81);
    obj.displayId();
    
    return 0;
}