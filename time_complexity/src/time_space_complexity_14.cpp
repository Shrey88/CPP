#include<iostream>


/*
	Time Complexity : O(log log n to base 2)


	the first for loop will execute for 2^k times

	2^k = n;
	k = log n to base 2	//time complexity of first for loop



	the second for loop will execute till 2^k times again as we are incrementing it by 2
	
	2^k = p		// we have written p because that is the varaible against we are checking our condition

	k log 2 = log p

	k = log p to base 2

	
	if you see p executes for log n times in the first for loop so 
	we can say that 

	k = log log n to base 2
*/


p = 0

for (i = 1; i < n; i = i * 2)
{
	p++;
} 

for (j = 1; j < p; j = j * 2)
{
	//statement;
}