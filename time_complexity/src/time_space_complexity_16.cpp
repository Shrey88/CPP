#include <iostream>


/*
	Analysis of while loop, for while loop we need to study the while loop to find the time complexity as it only contains the condition 

	Time Complexity: O(n)

	consider if we take 

		m			n
	=========	==========
		6			3
		3			3
	this got executed one time 

	
	m = 5 and n =5 this will not execute as m and n are equal


	now let's say

		m				n
	=========		==========
		16				2
		14				2
		12				2
		10				2
		8				2
		6				2
		4				2
		2				2

	so if you count this you will see that it has been executed n/2 times so the time complexity is O(n) (this is max time)
	and the minimum time to execute this is 1 that is constant time O(1)

*/

//GCD
while (m != n)
{
	if (m > n)
		m = m - n;
	else
		n = n - m;
}