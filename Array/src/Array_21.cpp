/*
	Sliding Window Maximum (Maximum of all subarrays of size k)

	given an array and an integer k, find the maximum for each and every contiguous subarray of size k

	Input : arr[]{1, 2, 3, 1, 4, 5, 2, 3, 6}
			k = 3
	Ouput : 3 3 4 5 5 5 6

	Input : arr[]{8, 5, 10, 7, 9, 4, 15, 12, 90, 13}
			k = 4
*/


#include<iostream>

void sort_array(int arr[], int array_size);

void find_max_sliding_window(int arr[], int array_size, int k);

int main()
{
	//int arr[]{ 1, 2, 3, 1, 4, 5, 2, 3, 6 };
	int arr[]{ 8, 5, 10, 7, 9, 4, 15, 12, 90, 13 };


	int k = 4, //replace 3 with 4 for the second input
		array_size = sizeof(arr) / sizeof(int);

	find_max_sliding_window(arr, array_size, k);

	return 0;
}

void find_max_sliding_window(int arr[], int array_size, int k)
{
	//replace 3 with 4 for the second input
	int new_array[4]{};

	int index1 = 0;

	for (int index = 0; index < array_size; index++)
	{
		int i = 0;


		for (index1 = index; index1 < array_size && i < k; index1++)
		{
			new_array[i] = arr[index1];
			++i;
		}

		if (i == k)
		{
			sort_array(new_array, k);
			std::cout << new_array[k - 1] << " ";
		}

	}
}

void sort_array(int arr[], int array_size)
{
	for (int index_1 = 0; index_1 < array_size - 1; index_1++)
	{
		if (arr[index_1] > arr[index_1 + 1])
		{
			int tmp = arr[index_1];
			arr[index_1] = arr[index_1 + 1];
			arr[index_1 + 1] = tmp;

			for (int index_2 = index_1 + 1; index_2 < array_size; index_2++)
			{
				if (arr[index_1] > arr[index_2])
				{
					int tmp = arr[index_1];
					arr[index_1] = arr[index_2];
					arr[index_2] = tmp;
				}
			}
		}
	}
}