#include"../header/const_overloading.h"

Person::Person()
{
	this->name = '\0';
	this->age = 0;
}

Person::~Person()
{

}

std::string Person::toString()
{
	std::stringstream ss;
	ss << "Name is: ";
	if (this->name[0] != '\0')
		ss << this->name;
	else
		ss << "undefined";

	ss << "; Age is: ";
	ss << this->age;

	return ss.str();
}