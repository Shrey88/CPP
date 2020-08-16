#include<iostream>

/*
	Merging 2 sorted arrays into 3rd array

	this is also known as 2-way merging because we are merging two arrays/list at a time.

	this can also be called as M-Way Merging because we can merge 3, 4, 5.... arrays/list into final array

	but mostly we follow two way merging.

	Time Complexity	:	theta(m + n) 
						because we have 2 list, one with m list and another with n list.
						though the time complexities are written using n but for merging we use theta, this symbol is used to represent merging.
*/

void merge(int* array_1, int* array_2, int *merge_arr, int len_arr_1, int len_arr_2)
{
	int index = 0,
		index1 = 0,
		index2 = 0;

	/*
		Compare the elements from both the arrays

		iterate the while loop until any one of the condition reaches the end of the array
	*/
	while ( index1 < len_arr_1 && index2 < len_arr_2)
	{
		/*
			if the element from the 1st array is smaller than the 2nd array
				insert the smaller element into the new array and increment the index of 1st array.
		*/
		if (array_1[index1] < array_2[index2])
		{
			merge_arr[index] = array_1[index1];
			++index1;
		}
		/*
			if the element from the 2nd array is smaller than the 1st array
				insert the smaller element into the new array and increment the index of 2nd array.
		*/
		else if (array_1[index1] > array_2[index2])
		{
			merge_arr[index] = array_2[index2];
			++index2;
		}		
		
		++index;
	}

	/*
		if the loop got terminated because the 2nd array reached the end of the array before 
		1st array then copy all the remaining elements from 1st array
	*/
	while (index1 < len_arr_1)
	{
		merge_arr[index] = array_1[index1];

		++index;
		++index1;
	}

	/*
		if the loop got terminated because the 1st array reached the end of the array before
		2nd array then copy all the remaining elements from 2nd array
	*/
	while (index2 < len_arr_2)
	{
		merge_arr[index] = array_2[index2];

		++index;
		++index2;
	}

}

int main(void)
{
	int array_1[]{ 2, 8, 15, 18 };
	int len_arr_1 = sizeof(array_1) / sizeof(array_1[0]);

	int array_2[]{ 5, 9, 12, 17, 19, 25, 30 };
	int len_arr_2 = sizeof(array_2) / sizeof(array_2[0]);

	int merge_arr[11];

	merge(array_1, array_2, merge_arr, len_arr_1, len_arr_2);

	return 0;
}