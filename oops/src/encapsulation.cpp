#include "../header/encapsulation.h"

/*
 *
 *  Encapsulation: (data abstraction / hiding)
 *      encapsulation is defined as wrapping of data and information under a single unit.
 *      
 *      In programming, encapsulation is defined as binding together the data ad the functions
 *      that manipulates them.
 * 
 *      e.g.
 *          in a company there are different sections like the accounts section, finance section
 *      sales section etc. The finance section handles all the financial transactions and keep records 
 *      of all the data related to finance .
 * 
 *      Similarly the sales section handles all the sales realted activities and keep records of all the sales.
 * 
 *      Now there may arise a situation when for some reason an official from finance section needs all the data 
 *      about the sales in a particular month. 
 * 
 *      In this case he is not allowed to directly access the data of sales section.
 * 
 *      He will first have to contact some other officer in the sales section and then request him to give the 
 *      particular data. This is what encapsulation is 
 * 
 *      Here data of sales section and employees that can manipulate them are wrapped under a single name "sales section"
 * 
 */

int main(){

    Finance f;  // it is derived from Company

    Sales s;    // it is also derived from company

    /*
     *
     *  to get the details of the sales you need to use the 
     *  object of Sales
     * 
     */


    return 0;
    
}