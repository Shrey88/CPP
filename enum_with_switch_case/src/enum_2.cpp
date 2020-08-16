#include <iostream>

/*
	this is the demonstration of class enum:
		enum classes are also called scoped enumerations, 
		that makes enumeration both strongly typed and strongly scoped

		class enum doesn't allow implicit conversion to int and also doesn't compare enum from different enum

		if no values are assigned to the enum contants then it will not assign the contants with 
		int values

		two different enums can have same enum constants
	
*/


int main()
{
	/*
		enum declaration with constants
		default values will be 0, 1 respectively
	*/
	enum class Gender {
		Male,
		Female
	};

	enum class classGender2 {
		Male,	
		Female
	};

	/*
		in case of class enum both the enums can have same enum constants
	*/
	enum class Color1 { Red, Orange, Green, Blue };

	enum class Color2 { Red, Orange, Green, Blue };

	/*
		creating variable of type enum "Color1" and "Color2"
	*/
	Color1 color1 = Color1::Blue;
	Color2 color2 = Color2::Blue;

	/*
		class enum are good for comparing
	*/
	if (color1 == Color1::Blue) // <-- no problem, because we are comparing an enum object created from Color1
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}


	/*
		if you compare two objects of two different enum class
	*/
	if (color1 == color2) // <-- error, this is good way of comparing which will lead to less bugs
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
	switch (color1)
	{
	// case Green: <-- we cannot just specify the enum constant, we need to mentiond the class name scope::constant
	case Color1::Red:
		std::cout << "Red";
		break;
	case Color1::Green:
		std::cout << "Green";
		break;
	case Color1::Orange:
		std::cout << "Orange";
		break;
	case Color1::Blue:
		std::cout << "Blue";
		break;
	}

	std::cout << std::endl;
	std::cin.get();
	return 0;
}
