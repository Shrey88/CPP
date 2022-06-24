/*
 *
 *  Default constructor default parameters
 * 
 */

#include "../header/default_constructor_parameters.h"

Player::Player(std::string name_val, int health_val, int xp_val):name{name_val}, health{health_val}, xp{xp_val}
{
    std::cout << "Three args constructor" << std::endl;
    std::cout << "Name : " << name << std::endl;
    std::cout << "Health : " << health << std::endl;
    std::cout << "XP : " << xp << std::endl;
}


int main()
{
    Player empty;
    Player frank("Frank");  // you can either give the curly braces or round braces.

    return 0;

}