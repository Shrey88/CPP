/*
	Modular Exponentiation - using recursion

	x^n Mod M

	5^2 Mod 7 = 25 % 7 = 4
	5^3 Mod 7 = 125 % 7 = 6

	for a higher value of "n", we wont be able to store the result in any data type

	we can also apply the associativity, commutativity and distributie property 

	(a * b) % M	=	{(a % M) * (b % M)} % M
	(5 * 7) % 3 =	35 % 3 = 2	
				=	{(5 % 3) * (7 % 3)} % 3
				

	so now we can write 
	x^n % M	=	{(x^(n/2) % M) * (x^(n/2) % M)} % M,	n : even
			=	{(x % M) * (x ^ (n-1) % M)} % M,		n : odd
			=	1										n = 0

	Time Complexity and Space Complexity is same like what we have seen in exponential 
*/

int Mod(int x, int n, int M)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
	{
		int result = Mod(x, n / 2, M);
		return (result * result) % M;
	}
	else
	{
		return  ( (x % M) * Mod(x, n - 1, M) ) % M;
	}
}