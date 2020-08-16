/*
	divide an array in two subsets such that sum of square of sum of both subsets is maximum.

	given an integer array arr[], the task is to divide this array into two non-empty subsets such that
	the sum of the square of the sum of both the subsets is maximum and sizes of both the subsets must
	not differ by more than 1.

	Input:		arr[]={1, 2, 3}
	Output:		26

	Explanation:
	sort the array first  so that no need to store the result in array and then do the sorting again.
	sum of subset pairs are as follows
	(1)^2 + (2+3)^2 = 26
	(2)^2 + (1+3)^2 = 20
	(3)^2 + (1+2)^2 = 18

	Maximum among these is 26. Therefore the required sum is 26.
*/

#include<iostream>

int equate_set1_set2(int set1, int set2);

void find_max_sum_subset(int arr[], int array_size);

void sort_array(int arr[], int array_size);

int main()
{
	int arr[]{ 3, 1, 2 };

	int array_size{ sizeof(arr) / sizeof(int) };

	sort_array(arr, array_size);

	find_max_sum_subset(arr, array_size);
}

void find_max_sum_subset(int arr[], int array_size)
{
	int index2 = 0,
		sum_subset2 = 0,
		result;

	index2 = 0;
	sum_subset2 = 0;

	for (; index2 < array_size; index2++)
	{
		if (index2 != 0)
		{
			sum_subset2 += arr[index2];
		}
	}

	result = equate_set1_set2(arr[0], sum_subset2);
	std::cout << result << std::endl;
}

int equate_set1_set2(int set1, int set2)
{
	return ((set1 * set1) + (set2 * set2));
}

void sort_array(int arr[], int array_size)
{
	int tmp;

	for (int index1 = 0; index1 < array_size - 1; index1++)
	{
		if (arr[index1] > arr[index1 + 1])
		{
			tmp = arr[index1];
			arr[index1] = arr[index1 + 1];
			arr[index1 + 1] = tmp;

			for (int index2 = index1 + 1; index2 < array_size - 1; index2++)
			{
				if (arr[index1] > arr[index2 + 1])
				{
					tmp = arr[index1];
					arr[index1] = arr[index2 + 1];
					arr[index2 + 1] = tmp;
				}
			}
		}

	}
}