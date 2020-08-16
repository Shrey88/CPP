#include <iostream>


/*
	Time Complexity: O(n^2)

	UOT: Unit of Time

	if you add all the UOT then it would be
	=>	n + 1 + n^2 + n + n^2
	=>	2n^2 + 2n + 1		// ignoring the constant values
	=>	n^2 + n				// highnest degree of n is 2
	=>	O(n^2)				// time complexity 

	
	Space Complexity: O(n^2)
	A	--> occupies n*n as it is matrices i.e. n^2
	B	--> occupies n*n as it is matrices i.e. n^2
	C	--> occupies n*n as it is matrices i.e. n^2
	i	--> occupies 1 word
	j	--> occupies 1 word
	n	--> occupies 1 word

	=>	n^2 + n^2 + n^2 + 1 + 1 + 1
	=>	3n^2 + 3					// ignoring the constant values
	=>	n^2							// highest degree of n
	=> O(n^2)						//space complexity 
*/

void Add(int A[][], int B[][], int n)
{
	/*
		why the for statement will get executed for n+1 times is as follows

			i				Condition			No of times executed
		=========		================	=============================
			0				0 < n						1
			1				1 < n						1
			2				2 < n						1
			3				3 < n						1
			4				4 < n						1
			5				5 < n						1
			6				6 < n						1
			7				7 < n						1
			8				8 < n						1
			9				9 < n						1		// the for loop statement will get executed till this point
			10				10 < n						0		// here the i will get incremented to see if the condition will be true  or not
	*/
	for (int i = 0; i < n; i++) //<-- this takes n+1 UOT
	{
		/*
			this for loop will also get executed n+1 times but as it is statement for the first for loop it will get executed n times

			so you can say n * (n+1)
		*/
		for (int j = 0; j < n; j++) //<-- this takes n*(n+1) UOT
		{
			/*
				this will get executed n(of the first for loop ) * n(of the second for loop) times

				so the time complexity is O(n^2)
			*/
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}