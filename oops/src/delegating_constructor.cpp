#include "delegating_constructor.h"

/*
 *  we can delegate the constructor initialization to another constructor.
 * 
 *  This only works in the initialization list.
 *  You can't call the other constructors from the body in the delegating constructors.
 *  Also you can't delegate to another constructor and provide initialization values to class members.
 * 
 */

Player::Player(std::string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{

}

/*
 *  delegating to 3 parameter constrcutor from the non parameterized constructor.
 */
Player::Player():Player("None", 0, 0)
{

}

/*
 *  delegating to 3 parameter constructor frone the single parametere constructor.
 */
Player::Player(std::string name_val):Player(name_val, 0, 0)
{

}
