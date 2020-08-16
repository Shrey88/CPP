/*
	Constructor is a special method that runs when your object is instantiated

	Destructor is a special method that runs when your object is destroyed.

	Constructor and Destructor should have the same name as the class name

	Constructor and Destructor doesn't have return value not even void
*/


#pragma once
#include<iostream>


class Const_Destruct
{
public:
	Const_Destruct(); // <-- constructor

	~Const_Destruct(); // <-- destructor
};

