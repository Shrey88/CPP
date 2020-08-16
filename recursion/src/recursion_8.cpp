/*
	print a fibonacci series

	fibonacci series is the sum of current and prev no 

	0 1 1 2 3 5 8 13 21 34 .....

	so we are sending three arguments 

	we are already sending the initial values of the fibonacci series and we do recursion by making 
	
		prev value as current value + next value

		next value as the changed prev value + the current next value.

	
	Time Complexity : O(n)

		we are doing the simple recursion and calling the function once not like the regular fibonacci algorithm where we are calling it n-1 and n-2 times.

		as we are calling the recursion for n times only the time complexity of this program is O(n)
*/

#include <iostream>


void fibonacci(unsigned int prev, unsigned int next, unsigned int length)
{
	if (prev > length)
		return;
	else
	{
		std::cout << prev << " ";
		if (next > length)
			return;
		else
			std::cout << next << " ";
	}

	prev = prev + next;
	next = prev + next;
	fibonacci(prev, next , length);

}

void fibonacci_1(unsigned int prev, unsigned int next, int length)
{
	//std::cout << prev << " ";
	if (length <= 0)
	{
		std::cout << prev << " ";
		return;
	}
	//std::cout << next << " ";
	
	prev = prev + next;
	next = prev + next;

	fibonacci_1(prev, next, length-2);

}

int main(void)
{
	int length = 40;

	//fibonacci(0, 1, length);
	std::cout << std::endl;
	fibonacci_1(0, 1, length);

	std::cout << std::endl;

	return 0;
}