# include <iostream>


/*
	Time Complexity : O(n)

	UOT: Unit of Time

	if you add all the UOT then it would be 
	=> 1 + n + 1 + n 
	=> 2n + 2	// ignoring the constants i.e. 2
	=> n		// the degree of n is 1
	=> O(n)		// <--time complexity 

	Space Complexity : O(1)
		in space complexity for space consumption we use word like in time complexity its unit

	n -> occupies 1 word
	i -> occupies 1 word
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
	for (int i = 0; i < n; i++)	// <-- this takes n+1 UOT
	{
		/*
			here the statement will get executed n times so the complexity is O(n)
		*/
		// statement;	//<-- this takes n UOT.
	}
}