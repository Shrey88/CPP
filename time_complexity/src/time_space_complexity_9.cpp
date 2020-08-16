#include<iostream>

/*
	Time Complexity : O(log n to base 2)



	Space Complexity : O(1)
	i	=> occupies 1 word
	n	=> occupies 1 word
	
	consiering statement just printing the values.
	statement	=> occupies 1 word

*/


int n = 10; // <-- this will take 1 UOT

/*
	here we are checking how many times the for loop will get executed, the value of i is getting incremented 2 times the current value of i
	
		initial value of i					incrementing i			
	==========================			========================
		1		=> 2^0								2 
		1*2		=> 2^1								4
		2*2		=> 2^2								8
		2*2*2	=> 2^3								16
		:											:
		:											:
		:											:
		:											:
				=> 2^k

	Assuming that the condition will fail when
		i >=n	// replace i with 2^k
		2^k >= n // apply log on both sides
		k log 2 = log n
		k = log n base 2
		k = O(log n) base (2)	


	Another way of finding the time complexity:
	note here the everytime value of i is getting multiplied by 2 so its 
		2^k = n	// applying log
		k log 2 = log n
		k = log n to base 2


*/
for (int i = 1; i < n; i = i * 2) // here we don't know how much time it will get executed.
{
	//statement
}