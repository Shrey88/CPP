#include "../header/Access_Modifier.h"
#include <iostream>

void Access_Modifier::happy()
{
	this->isHappy = true;
};

void Access_Modifier::sad()
{
	this->isHappy = false;
};

void Access_Modifier::speak()
{
	if (this->isHappy)
	{
		std::cout << " Meeow!!!!" << std::endl;
	}
	else
	{
		std::cout << " Ssssss!!!" << std::endl;
	}
};
