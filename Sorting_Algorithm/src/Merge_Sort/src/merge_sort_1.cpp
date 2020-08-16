#include<iostream>

/*
	Merge Sort	

	pre-requisite for this program is to understand the recursion 

	Property of Merge Sort:
		1. divide and conquer rule : 
										we will keep on dividing the array into half until it reaches a point where the 
										array has only 1 element and from there onwards we will start merging the array by sorting it
		
		2. recursive				:

		3. stable sorting algorithm :
										we can apply sorting algorithm to collection of any data type.
										it preserves the relative order of records with same key.

		4. Not in place				:
										in place sorting algorithm takes a constant amount of extra memory to sort a list.

		
		Space Complexity			:
										we divide the array completely into two entirely new arrays, so the amount of space that we will take will be proportional to 
										size of the list.

										Space complexity of the Merge Sort is O(n).

		Time Complexity				:
										O(nlgon)
										
										n elements will be merged on each split.

										so for 8 elements we get 3 splits and on each split 8 elements are merged.

										so it is log n merge.

										and since it is recursive we will have levels and not passes.

										so we have 3 levels for 8 elements that means that the time complexity will be (n * log n)
*/

# define ARRAY_SIZE 9
void merge(int *array, int low_index, int mid_index, int high_index)
{
	int fIndex = low_index,
		sIndex = mid_index + 1;

	int tIndex = low_index;

	int merge_array[ARRAY_SIZE]{ 0 };

	while (fIndex <= mid_index && (sIndex <= high_index && sIndex < ARRAY_SIZE) )
	{
		if (array[fIndex] < array[sIndex])
		{
			merge_array[tIndex] = array[fIndex];
			++fIndex;
			++tIndex;
		}
		else if (array[fIndex] > array[sIndex])
		{
			merge_array[tIndex] = array[sIndex];
			++sIndex;
			++tIndex;
		}
	}


	while (fIndex <= mid_index)
	{
		merge_array[tIndex] = array[fIndex];
		++fIndex;
		++tIndex;
	}

	while (sIndex <= high_index && sIndex < ARRAY_SIZE)
	{
		merge_array[tIndex] = array[sIndex];
		++sIndex;
		++tIndex;
	}

	//Update the original list
	for (int i = low_index; i <= high_index && i < ARRAY_SIZE; i++)
	{
		array[i] = merge_array[i];
	}
	
}

/*
	Time taken for the recurence method



*/
void merge_sort(int *array, int low_index, int high_index)
{
	if (low_index < high_index)
	{
		int mid_index = (low_index + high_index) / 2;		//<-- it takes constant time

		// this is left list 
		merge_sort(array, low_index, mid_index);			//<-- it takes n/2 unit of time as list is divided into half
		
		// this is right list
		merge_sort(array, mid_index+1, high_index);			//<-- it takes n/2 unit of time as list is divided into half
		
		// left list + right list
		merge(array, low_index, mid_index, high_index);		//<-- it takes n unit of time as we are merging the complete list .
	}


}

void display(int* array)
{
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		std::cout << array[index] << "\t";
	}
}


int main(void)
{
	//NOTE: make change to the macro ARRAY_SIZE, when below array is modified
	int array[]{ 9, 3, 7, 5, 6, 4, 8, 2, 1 };
	int low_index = 0;
	int high_index = sizeof(array) / sizeof(array[0]) - 1; // as the array element starts with 0th index we need to decrease size of the array by 1, so 0 to 7 is 8 elements.


	merge_sort(array, low_index, high_index);

	display(array);
}

