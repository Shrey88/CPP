# include <iostream>


/*
	Time Complexity : O(square root of n)

	UOT: Unit of Time

	if you add all the UOT then it would be
	=> k^2/2 + k/2 + 1 + 1 > n
	=> k^2/2 + k/2 + 2 > n	// ignoring the constant values
	=> k^2/2 + k/2 > n		// the degree of n is 2
	=> k^2 > n				// 
	=> k > n^1/2			// square root of n


	Space Complexity : O(1)
		in space complexity for space consumption we use word like in time complexity its unit

	n -> occupies 1 word
	i -> occupies 1 word
	p -> occupies 1 word
	statement-> occupies 1 word

	so if you add all the words then it is 3 which is constant value so it is represeneted as O(1)
*/

int main(void)
{
	int n = 10; //<-- this takes 1 UOT
	int p = 0; //<-- this takes 1 UOT

	/*
		here the condition is different p <= n and p is 0, so we dont know how many times it is going to execute because it is not iterating n times
		so we will find out the value of k


			i			p
		=========	=========
			1		0 + 1 

			2		1 + 2 

			3		1 + 2 + 3

			4		1 + 2 + 3 + 4

			:			:

			:			:

			:			:

			K		1 + 2 + 3 + 4 +.....+ k

			Assuming that the condition will fail when p > n

			so p here is k(k+1)/2 > n

			what is k?

			k^2/2 + k/2 > n


	*/
	for (int i = 1; p <= n; i++)
	{
		/*
			every time i is added to p
		*/
		p = p + i;
	}
}