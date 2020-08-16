#include <iostream>

/*
	Selection Sort  (Slow Sorting Algorithm)

	let's consider we have set of cards and we want to arrange it in the increasing order.

	keep all the cards in the left hand and then find the minimum card and move it to the right hand
	at point of stage the left hand will have unsorted cards and right hand will have sorted cards.

	Left Hand					Right Hand
================			==================
	9 of spade 
	6 of spade
	4 of hearts
	3 of diamonds

Now find the minimum and move it to right hand
	9 of spade					3 of diamonds
	6 of spade
	4 of hearts

repeat the process and finally you will have right hand with a sorted cards.

Time Complexity : O(n^2)
adding all the unit of time 
=>	n - 1 + n^2 - n + n^2 - n + n - 1 + n - 1 + n - 1
=>	4n - 4 + 2n^2 - 2n
=> 2n^2 + 2n + 4		// highest order of n is 2
=> n^2					// ignoring the constant values and n we get the time complexity
*/

void selection_sort(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int iMin = i;						// n-1 unit of time 
		for (int j = i + 1; j < n; j++)		//n * (n-1) unit of time 
		{
			if (array[j] < array[iMin])		//n* (n-1) unit of time 
				iMin = j;
		}
		int temp = array[i];				//n-1 unit of time
		array[i] = array[iMin];				//n-1 unit of time
		array[iMin] = temp;					//n-1 unit of time
	}
}

int main(void)
{
	int array[]{ 7, 5, 4, 3 ,2, 1 };

	selection_sort(array, 6);

	return 0;
}

