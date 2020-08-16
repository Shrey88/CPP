/*
	you cannot compare the float values by using the comparator operator ==

	the reason being the value of the float will hold some garbage value as well 
	and that cannot be compared with your value.
*/

#include<iostream>
#include<iomanip>

int main()
{
	float value1 = 1.1;

	// this will show you the value as 1.100
	std::cout << "Value1 :: " << std::setprecision(3) << std::fixed << value1 << std::endl;
	
	/*
		whenever you may want to compare two floating values you need to think about asking if 
		the difference between them is less than a certain amount or not, rather than using sequel's 
		to compare them.
	*/
	if (value1 == 1.1) //<-- value1 here can be anything except exact 1.1, 
	{
		std::cout << "equals" << std::endl;
	}
	else
	{
		std::cout << "not equal" << std::endl;
	}
	return 0;
}