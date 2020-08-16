#include <iostream>


/*
	so whenever we get log n the value will be in decimal format so we need to decide whether we want to truncate it using floor()
	or round the value using ceil()

	n = 8		no of times executed = 3
		i
	=========
		1		// initial value is 1
		2
		4
		8		// the condition will become false 

	so the time complexity is log 2^3 to base 2 because n = 8 => 2^3
	log 2^3 to base 2
	3 log 2 to base 2 
	3 * 1					// log 2 to base 2 is 1
	
	n = 10		no of times executed = 4
		i
	=========
		1		// initial value is 1
		2		
		4
		8
		16		// the condition will become false

		so the time complexity is log 10 to base 2 because n = 10, so 10 is not the exact powers of 2 so we will not get the integer value 
		we will get decimal value.

		log 10 to base 2 = 3.2

		so if you compare the no of executions then we should take the ceil() value 
*/

/*
	
*/
for (int i = 1; i < n; i = i * 2)
{
	//statement;
}