#include <iostream>


/*
	Time Complexity : O(log n to base 2)


	value of i starts from n here 

		i
	=========
		n

		n/2

		n/2^2

		n/2^3

		:

		:

		n/2^k		// it will be executed for n/2^k times

		Assume condition will fail when
		i < 1	// replacing i with n/2^k

		n/2^k < 1	// we will equate it

		n = 2^k

		so k = log n to base 2


*/


for (int i = n; i >= 1; i = i / 2)
{
	//statement;
}