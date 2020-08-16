/*
	Fibonacci Sequence - Space Complexity analysis

										f(5)
						f(4)							f(3)
				f(3)			f(2)				f(2)	f(1)
			f(2)	f(1)	f(1)	f(0)		f(1)	f(0)	
		f(1)	f(0)

		maximum space consumed by the recursion is maximum depth(length) traversed by the recursion tree which is 4 units in this case.
		if you traverse the left most branch f(5) to f(4) 

		maximum memory consumed is 5 units if you see the left most branch no of times the function has been called for the maximum depth traversal.

		if we would have called the function fib for any generic value n then the space consumed by the recursion tree would be n-1 units
		and the memory consumed would be n units 

		Space complexity : O(n)


*/

#include<iostream>

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int result = fib(10);

	std::cout << result;

	return 0;
}