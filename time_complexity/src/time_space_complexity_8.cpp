#include <iostream>


/*
	Time Complexity: O(n^3)

	UOT: Unit of Time

	if you add all the UOT then it would be
	=>	n + 1 + n^2 + n + n^2 + n^3 + n^2 + n^3
	=>	2n^3 + 3n^2 + 2n + 1					// ignoring the constant value 
	=>	n^3 + n^2 + n							// highest degree of n is 3
	=>	O(n^3)									// time complexity

	Space Complexity: O()
	A	--> occupies n * n word
	B	--> occupies n * n word
	C	--> occupies n * n word
	i	--> occupies 1word
	j	--> occupies 1word
	k	--> occupies 1word
	n	--> occupies 1word

	=>	n^2 + n^2 + n^2 + 1 + 1 + 1 + 1
	=>	3n^2 + 4							// ignoring the  constant value
	=>	n^2									// highest degree of n is 2
	=>	O(n^2)								// space complexity

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
			*/
			C[i][j] = 0;			//<-- this takes n * n UOT


			/*
				this for loop will also get executed n+1 times but it will also get executed 
				n times for the j for loop 
				n times for the i for loop
				
				so you can say n * n * (n+1)
			*/
			for (int k = 0; k < n; k++)
			{
				/*
					this will get execued 
					n times for the k for loop
					n times for the j for loop
					n times for the i for loop


				*/
				C[i][j] = C[i][j] + A[i][j] * B[i][j]; //<-- this takes n*n*n UOT
			}
		}
	}
}