/*
	Complexity analysis of recursive programs

	Factorial:
	{
		if n == 0
			return 1
		else
			return n * Factorial(n-1)
	}
	
	Recursion Tree
	F(5)	Level 0
	F(4)	Level 1
	F(3)	Level 2
	F(2)	Level 3
	F(1)	Level 4
	F(0)	Level 5		// this will not make any further recursion calls

	so this functions will be stored in the implicit stack memory.

	Maximum memory of the stack  = maximum depth of the tree i.e 5 in this case.

	if you draw this recursion tree for any generic n value then the maximum memory will be n

	Space Complexity : space is directly proportional to n so we can say that it is O(n)
*/
#include <iostream>

int Fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Fact(n - 1);
}

int main(void)
{
	int n = 5;
	int result = Fact(n);

	std::cout << result << std::endl;

	return 0;
}