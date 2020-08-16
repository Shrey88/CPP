/*
	Precedence of postfix ++ is more than prefix ++ and their associativity is also different. 
	
	Associativity of postfix ++ is left to right
	Associativity of prefix ++ is right to left
*/


#include<iostream>


int main(int argc, char** argv)
{
	//Pre - increment increments the value first and then assigns it.
	{
		int counter{ 10 };
		int result{ 0 };

		++counter; // increments the value first counter = counter +1
		result = counter;

		std::cout << "Result1 :: " << result << std::endl;

		result = ++counter;
		std::cout << "Result2 :: " << result << std::endl;
	}

	// Post - increment assigns the value first and then increments it,
	//e.g. 1
	{
		int counter{ 10 };
		int result{ 0 };

		result = counter++; //after assigning the value, counter value will be increased. i.e. counter = counter + 1
		std::cout << "Result3 :: " << result << std::endl;
	}
		
	//e.g. 2
	{
		int counter{ 10 };  //initialized counter variable with value 10
		std::cout << "Counter :: " << counter << std::endl;  // output is 10

		counter += 1;  //incremented the value of counter by 1
		std::cout << "Counter :: " << counter << std::endl;  // output is 11

		counter++; // as we do not have left operand, so considering counter value is assigned here and then                   counter is incremented by 1
		std::cout << "Counter :: " << counter << std::endl;  //output is 12

		++counter; // counter value again incremented by 1
		std::cout << "Counter :: " << counter << std::endl; // output is 13
	}

	return 0;
}