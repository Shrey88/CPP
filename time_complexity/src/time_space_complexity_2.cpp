# include <iostream>


/*
	Time Complexity : O(n)

	UOT: Unit of Time

	if you add all the UOT then it would be 
	=> 1 + n/2 + 1/2 + n/2 
	=> 2n/2 + 3/2				// ignoring the constant values
	=> n						// the degree of n is 1
	=> O(n)						// <--time complexity 

	Space Complexity : O(1)
		in space complexity for space consumption we use word like in time complexity its unit

	n -> occupies 1 word
	i -> occupies 1 word
	statement-> occupies 1 word

	so if you add all the words then it is 3 which is constant value so it is represeneted as O(1)

*/

int main(void)
{
	int n = 10;	//<-- this takes 1 UOT

	/*
		for statement will be executed half of n+1 i.e (n+1)/2

			i				Condition			No of times executed 
		=========		================	=============================
			0				0 < n						1
			2				2 < n						1
			4				4 < n						1
			6				6 < n						1
			8				8 < n						1
			12				12 < n						0		// here the i will get incremented to see if the condition will be true  or not
	*/
	for (int i = 0 ; i < n; i+=2) //<-- this takes n+1/2 UOT
	{
		/*
			so this statement will get executed n/2 times, here the degree of polynomial is n so the time complexity is again O(n)
			
			consider that i was incrementing by 20 then it would be n/20 and degree of n is n that means the time complexity is O(n)
		*/
		// statement;	//<--this takes n/2 UOT
	}
}