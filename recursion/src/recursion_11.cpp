/*
	Exponentiation - Calculate Pow(x,n) using recursion
	time complexity here depends on the n

	First Method : 

	x^n		x * x^(n-1)		if n > 0
			1				if n = 0
	Time complexity :	if n is odd		O(n)
							lets consider
								T(n) = T(n-1) + C,	n > 0
								T(0) = 1
								
								T(n) = T(n-1) + C	// C is constant value for assignment, multiplication and substraction
									 = T(n-2) + 2C
									 =	:
									 =	:
									 = T(n-k) + kC

								now n-k = 0 => k = n
							
								T(n) = T(0) + nC
								T(n) = nC + 1
								so the ignoring the constant values results to O(n)

						
						if n = 0	O(1)	//constant time 

	Space Complexity:	O(n)
						function will get some memory allocated on the stack the no of times it is called i.e. n times




	Second Method : 
	
	x^n		x^(n/2) * x^(n/2)		if n is even
			x * x^(n-1)				if n is odd
			1						if n = 0
	
	Time complexity:	if n is even	O(log n)
							T(n) =	T(n/2) + C1, if n is even
									T(n-1) + C2, if n is odd

							T(0) =	1, T(1) = 1 + C2		// these are the base condition for the function to stop recurring

							if n is odd then we can also write it as 
										
							T((n-1)^2) + C1 + C2

							T(n/2) + C				C > C1		//n-1 will give us the even no 

							we can write this as 
							T(n/(2^2)) + 2C
							T(n/(2^3)) + 3C
							T(n/(2^k)) + kC		// this can be written in generic form as 

							this will imply that
							n /2^k = 1	=> 2^k = n
										=> k log 2 to base 2 = log n to base 2
										=> k = log n

							T(n) = 1 + C2 + C log n

							so the time complexity will be O(log n)

							



						if n is odd		O(n)
							lets consider
								T(n) = T(n-1) + C,	n > 0
								T(0) = 1
								
								T(n) = T(n-1) + C	// C is constant value for assignment, multiplication and substraction
									 = T(n-2) + 2C
									 =	:
									 =	:
									 = T(n-k) + kC

								now n-k = 0 => k = n
							
								T(n) = T(0) + nC
								T(n) = nC + 1
								so the ignoring the constant values results to O(n)

						if n = 0	O(1)	//constant time

	Space Complexity:	if n is even	O(log n)
							because the function will be stored in the stack each time it is called, which in this case will be log n times
							because the power of 2 in denominator will go till 2^k
							2^k = n
							k log 2 to base 2 = log n to base 2
							k = log n to base 2					// log 2 to base 2 is 1 that is why k*1 = k

						if n is odd		O(n)
							because the power value is not divisible by 2

				
*/

#include <iostream>


int pow(int x, int n)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
	{
		int result = pow(x, n / 2);
		return result * result;
	}
	else
		return x * pow(x, n-1);
		
}


int main(void)
{
	int result = pow(2, 3);

	std::cout << result << std::endl;

	return 0;
}