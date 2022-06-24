#include <iostream>
#include <string>


class Player
{
    private:
            std::string name;
            int health;
            int xp;

    public:

        /*
         *      we are assigning some default values to the member variables
         *      so that if only one parameter is passed or no parameter is passed the default 
         *      value will be considered.
         */
        Player(std::string name_val="None", int heatlh_val=0, int xp_val=0);
};