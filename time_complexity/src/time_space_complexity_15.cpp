#include <iostream>

/*
	Time Complexity: O(nlog n to base 2)

	as we know that first loop will execute n+1 times
	
	the second for loop will be executed n times because it is statement for first for loop and log n times because value of j
	increase twice the current value. so it is n * log n

	the inner statement of second for loop will get executed n * log n UOT only( explanation from the previous one applies here as well)

	so if we sum up all the UOT then 

	n + 1 + nlog n + n*log n
	
	2nlog n + n + 1		// the highest degree of n is 1 but the highest term is 2nlog n

	nlog n to base 2	// time complexity 


*/


for (i = 0; i < n; i++)	//<- this takes n + 1 UOT
{
	for (j = 0; j < n; j=j*2) //<- this takes n*log n UOT
	{
		//statement //<- this takes n*log n UOT
	}
}