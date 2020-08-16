/*
	sum of maximum elements of all subsets

	given  an array of integer numbers we need to find sum of maximum number of all possible subsets

	Input: arr[]{3, 2, 5}

	Output: 28

	Explanation:

	Subsets and their maximum are
	{}			max = 0
	{3}			max = 3
	{2}			max = 2
	{5}			max = 5
	{3, 2}		max = 3
	{2, 5}		max = 5
	{3, 5}		max = 5
	{3, 2, 5}	max = 5

	sum of these max will the our answer
*/

#include<iostream>

void sort_array(int arr[], int array_size);

void find_max_subsets(int arr[], int array_size);

int main()
{
	int arr[]{ 3, 2, 5 };

	int array_size = sizeof(arr) / sizeof(int);

	sort_array(arr, array_size);

	find_max_subsets(arr, array_size);

	return 0;
}


void sort_array(int arr[], int array_size)
{
	for (int index1 = 0; index1 < array_size - 1; index1++)
	{
		int index2 = index1 + 1;

		if (arr[index1] > arr[index1 + 1])
		{
			int tmp = arr[index1];
			arr[index1] = arr[index1 + 1];
			arr[index1 + 1] = tmp;

			for (; index2 < array_size - 1; index2++)
			{
				if (arr[index1] > arr[index2 + 1])
				{
					int tmp = arr[index1];
					arr[index1] = arr[index2 + 1];
					arr[index2 + 1] = tmp;
				}
			}
		}

	}
}


void find_max_subsets(int arr[], int array_size)
{
	int max = arr[array_size - 1];
	for (int index = 0; index < array_size; index++)
	{
		max = max + arr[index];
		for (int index1 = index + 1; index1 < array_size; index1++)
		{
			if (arr[index] > arr[index1])
			{
				max = max + arr[index];
			}
			else if (arr[index] < arr[index1])
			{
				max = max + arr[index1];
			}
		}

	}

	std::cout << max;
}