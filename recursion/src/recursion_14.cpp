/*
	Fibonacci Sequence - Time Complexity analysis

	0 1 1 2 3 5 8 .....

	fib(n)
	{
		if n <= 1
			return n
		else
			return fib(n-1) + fib(n-2)
	}


	Time Complexity : O(2^n)

	T(n) = T(n-1) + T(n-2) + C		// C is the constant value for addition, substraction, conditional operators
	
	T(0) = T(1) = 1 unit

	time taken to calculate T is nothing but function fib
	
	T(n-1) ~ T(n-2) in reality T(n-1) > T(n-2)

	we are trying to calculate the lower bound of n

	T(n) = 2T(n-2) + C
		 = 2{ 2T(n-4) + C } + C			// k = 1
		 = 4T(n-4) + 3C					// k = 2
		 = 8T(n-6) + 7C					// k = 3
		 = 2^kT(n-2k) + (2^k - 1)C
		 n - 2k = 0
		 k = n/2
		 = 2^(n/2)T(0) + (2^(n/2) - 1 )C
		 = (1 + C)*2^(n/2) - C

	T(n) is proportional to 2^(n/2)  this is the lower bound 


	Now lets consider that 
	T(n-2) ~ T(n-1) in reality T(n-2) < T(n-1)
	T(n) = 2T(n-1) + C			// C is the constant value for addition, substraction, conditional operators
		 = 4T(n-2) + 3C
		 = 8T(n-3) + 7C
		 = 2^kT(n-k) + (2^k -1)C

		 n - k = 0 => k = n
		 T(n) = 2^n T(0) + (2^n - 1)C
		 T(n) = (1 + C)2^n - C
	T(n) is proportional to 2^n that is the upper bound
*/
#include <iostream>

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int n = 5;
	int result = fib(n);
	std::cout << result << std::endl;

	return 0;
}