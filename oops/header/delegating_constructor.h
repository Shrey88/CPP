#include <iostream>
#include <string>

class Player
{
    private:
            std::string name;
            int health;
            int xp;

    public:
            Player();
            Player(std::string name_val);
            Player(std::string name_val, int heatlh_val, int xp_val);
};