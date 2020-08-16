#include <iostream>

/*
	this is the demonstration of plain enum:
		where the enumerator names are in the same scope as the enum and their values implicitly convert
		to int or enum types

		if no values are assigned to the enum contants then it will assign the contants integer values 
		starting from 0.

		i.e.	Male = 0
				Female = 1
				
		two enum cannot share the same enum contants

		no variable can have a name which is already in some enumeration

		enums are not type safe.
*/


int main()
{
	/* 
		enum declaration with constants
		default values will be 0, 1 respectively
	*/
	enum Gender {
		Male,
		Female
	};
	
	enum Gender2 {
		Male1,	//<-- as two enums cannot have same constants
		Female1	//<-- as two enums cannot have same constants
	};

	/*
		you can assign the values you want it can be of other enum or int type
	*/
	enum Color1 {Red = 34, Orange = 36, Green = 38, Blue = 0 };

	/*
		you can assign the values you want it can be of other enum or int type

		in this case
			White will have 100
			Black will have 0
			Brown will have 1, because we have not assigned any value and it follow the sequence
			Purple will be 32 as we have assigned the value explicitly.
	*/
	enum Color2 { White = 100, Black = 0, Brown, Purple = 32 };

	/* 
		creating variable of type enum "Color1" and assigning it with enum constant

		the below variable initilization is equivalent to 
			Color1 color = Blue or 
			Color1 color = Color1::Blue
	*/
	Color1 color{ Color1::Blue };

	/*
		plain enum are bad when we want to compare 
		in below case it will true as both the constants have same value
	*/
	if (Color1::Blue == Color2::Black) // <-- no problem, but it is bad idea to do this
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}


	/* on enabling the compiler warnings it will
	 * report the respective warning messages
	 * either you can add the missing constants or define "default:"
	 * to clear the warning message
	 * warning: enumeration value <value> not handled in switch
	 */
	switch (color)
	{
	case Red:
		std::cout << "Red";
		break;
	case White:
		std::cout << "White";
		break;
	case Green:
		std::cout << "Green";
		break;
	case Orange:
		std::cout << "Orange";
		break;
	case Black:
		std::cout << "Black";
		break;
	case Brown:
		std::cout << "Brown";
		break;
	}

	std::cout << std::endl;
	std::cin.get();
	return 0;
}
