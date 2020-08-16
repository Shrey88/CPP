/*
	Recursion with memoization 

	fib(n)
	{
		if n <= 1
			return n
		else
			return fib(n-1) + fib(n-2)
	}

	let's modify something to avoid the recalculation of the same value again and again

	fib(n)
	{
		if n <= 1
			return n

		if n is in memory
			return n 
		else
			n <- fib(n-1) + fib(n-2)
			save n in memory
			return n
	}


	recursion with memoization is not as efficient as iterative implementation in terms of memory, but it is as good as iterative implementation in terms of time

*/

#include <iostream>

int F[51];	// taking an array to store the values that are visited

int Fib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	if (F[n] != -1)
	{
		return F[n];
	}

	return Fib(n - 1) + Fib(n - 2);
}

int main(void)
{
	for (int i = 0; i < 51; i++)
	{
		F[i] = -1;
	}
	int n;
	std::cout << "Give me an n: ";
	std::cin >> n;

	int result = Fib(n);

	std::cout << result;
}