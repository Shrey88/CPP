#include<iostream>

/*
	Time Complexity: O(n)

	UOT: Unit of Time

	if you add all the UOT then it would be
	=>	1 + n + 1 + n
	=>	2n + 2			// ignoring constants
	=>	2n				// highest degree of n is 1 
	=> O(n)				// time complexity 


	Space Complexity: O(n)

	A	--> occupies n word
	n	--> occupies 1 word
	s	--> occupies 1 word
	i	--> occupies 1 word

	=> n + 3	//ignoring constant values
	=> O(n)		// space  complexity
*/


void sum(int A[], int n)
{
	int s = 0; // this takes 1 UOT

	for (int i = 0; i < n; i++)	// this takes n+1 UOT
	{
		s = s + A[i];	// <--this takes n UOT
	}
}