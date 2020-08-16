# include <iostream>


/*
	Time Complexity : O(n^2)

	UOT: Unit of Time

	if you add all the UOT then it would be
	=> 1 + n + 1 + n^2 + n + n^2
	=> 2n^2 + 2n + 2				// ignoring the constants 
	=> n^2 + n						// the highest degree of n is 2
	=> O(n^2)						// <--time complexity



	Space Complexity : O(1)
		in space complexity for space consumption we use word like in time complexity its unit

	n -> occupies 1 word
	i -> occupies 1 word
	j -> occupies 1 word
	statement-> occupies 1 word

	so if you add all the words then it is 3 which is constant value so it is represeneted as O(1)
*/

int main(void)
{
	int n = 10; //<-- this takes 1 UOT

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
	for (int i = 0; i < n; i++)	//<-- this takes n+1 times
	{

		/*
			as it is statement of the first for loop it will get executed n times

			so we want to know how many times the statement will be executed

				i			j			Execution No Of Times
			=========	=========	==========================
				0			0					0
			---------------------------------------------------
				1			0					1
							1					0
			---------------------------------------------------
				2			0					1
							1					1
							2					0
			---------------------------------------------------
				3			0					1
							1					1
							2					1
							3					0
			---------------------------------------------------
				:
				:
				:
				:
				:
				:
			---------------------------------------------------
				n								n


			so it is executin 0 + 1 + 2 + 3 + 4 +........n this is nothing but n(n+1)/2

			we will consider the term with the highest degree of polynomial

			degree of n^2/2 + n/2 => O(n^2)
		*/
		for (int j = 0; j < i; j++)	//this takes n *(n+1)
		{
			/*
				this will get executed n(of the first for loop ) * n(of the second for loop) times

				so the time complexity is O(n^2)
			*/
			// statement;	//<-- this will take n * n UOT
		}

	}
}