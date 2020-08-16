#include<iostream>


/*
	Insertion Sort

	it is not the best sorting algorithm in terms of performance, but its a little more efficient than selection sort and bubble sort

	so we will have array A and we have 6 elements in the array.

	what we can do is we can start by saying that we will divide the array into subsets.

	Initially elements till index 0 will be part of sorted subset or sorted half because if you have one element in a set, the set is always 
	sorted and all other elements are part unsorted subset.

	now we will go on picking elements from the unsorted subset and we will keep on inserting them into the sorted subset.so we will keep
	on expanding the sorted subset till unsorted subset becomes empty.

	in-place logic of shifting and inserting the elements to sort a list is insertion sort.

	UOT	:	Unit Of Time

	Worst Time Complexity	:	O(n^2)
								when you have an array in descending order 

								adding all the UOT 

								=>	n + n - 1 + n^2 - n + n^2 - n + n^2 - n + n^2 - n + n^2 - n 
								=>	5n^2 - 3n - 1		
								=>	n^2 - n			// <-- ignoring the constant value 
								=>	n^2				// <-- considering the highest degree of n 
								=>	O(n^2)			// <-- time complexity

	Average Time Complexity	:	O(n^2)

	Best Time Complexity	:	O(n)
								this will hold true if the array is sorted.

	Even though the worst case time complexity is O(n^2) the number of comparison and shifts in insretion sort in all practical scenarios is a lot less than 
	selection and bubble sort and it is consider better than selection and bubble sort.


*/

void insertion_sort(int* array, int len)
{
	for (int i = 0; i < len-1; i++)										// <-- this will get executed n-1+1 i.e n UOT (assumed len as n)
	{
		int hole = i+1;													// <-- this will get executed n-1 UOT 
		while (hole > 0 && hole < len && array[hole] < array[hole-1])	// <-- this will get executed n(n-1)
		{
			int temp = array[hole - 1];									// <-- this will get executed n(n-1)
			array[hole - 1] = array[hole];								// <-- this will get executed n(n-1)
			array[hole] = temp;											// <-- this will get executed n(n-1)
			--hole;														// <-- this will get executed n(n-1)
		}
	}
}

int main(void)
{
	{
		int array[]{ 7, 5, 4, 3, 2, 1 };
		insertion_sort(array, sizeof(array) / sizeof(array[0]));
	}

	return 0;
}