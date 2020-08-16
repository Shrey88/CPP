#include<iostream>

/*
	Bubble Sort ( Slow Sorting )

	In this algorithm we are going to scan the array from left to right multiple times.

	we will call each scan 1 pass on the array, so we will look at 0th element and then look at 1st element and then element at index 2 and so on

	we will compare the a element at the current position with the element at adjacent position.

	consider we are at 0th position we will compare it with 1st position, if the element at the current position is greater than the element at the next position 
	we will swap the 2 elements

	if the condition does not satisfy than mark the next element as the current element and check its adjacent element 

	Worst Case Time Complexity	:	O(n^2)

	Best Case Time Complexity	:	O(n)

	Average Time Complexity		:	O(n^2)

	Space Complexity			:	O(1)
*/

/*
	Time Complexity :	O(n^2) 
						this is bad time complexity for the sorting algorithm

	UOT : Unit Of Time
	adding all the UOT
	=>	n - 1 + n^2 - 2n + 1 + n^2 - 2n + 1
	=>	2n^2 - 3n + 1
	=>	n^2				// ignoring the constant values and also ignoring the terms where the degree of n is small 
	=>	O(n^2)			//time complexity
*/
void bubble_sort_1(int* array, int n)
{
	for (int i = 0; i < n-1; i++)			// <-- takes n UOT
	{
		for (int j = 0; j < n - 1; j++)		// <-- takes (n)(n-1) UOT 1st n-1 is for the parent for loop and n-1 for its own
		{
			if (array[j] > array[j+1])		// <-- takes (n)(n-1) UOT 1st n-1 is for the parent for loop and n-1 is for the 
			{
				int temp = array[j];		
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}


/*
	Time Complexity :	O(n)
						this is best case time complexity when the list is already sorted.
	UOT : Unit Of Time
	adding all the UOT
	= > n - i - 1		// ignoring the constant values and consdering the highest degree on n is 1
	= > O(n)			//time complexity
*/

void bubble_sort_2(int* array, int n)
{
	bool isSwapped = false;

	for (int i = 0; i < n-1; i++)
	{
		isSwapped = false;						// <-- this will not get executed for n UOT as it may break the for loop at some point

		for (int j = 0; j < (n - i - 1); j++)	// <-- this will get executed for n-i-1 UOT
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				isSwapped = true;
			}
		}

		if (isSwapped)
			break;
	}
}


int main(void)
{
	{
		int array[]{ 2, 7, 4, 1, 5, 3 };
		bubble_sort_1(array, sizeof(array) / sizeof(array[0]));
	}
	
	{
		int array[]{ 2, 7, 4, 1, 5, 3 };
		bubble_sort_2(array, sizeof(array) / sizeof(array[0]));
	}

	return 0;
}