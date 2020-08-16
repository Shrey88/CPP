/*
	Recursive program
*/

#include<iostream>

int recursive_sum(int* arr, int size)
{
	if (size == 0)
		return 0;

	arr[size - 1] = arr[size - 1] + recursive_sum(arr, size - 1);

	return arr[size - 1];
}

int main(void)
{
	int arr[]{ 1,2,3,4,5,6 };

	recursive_sum(arr, 6);

	int i = 0;
	while (i < 6)
	{
		std::cout << arr[i] << ", ";
	}
}