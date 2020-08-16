/*
	check whether an array is sorted or not using recursion
*/
#include<iostream>


bool check_array_sorted(int* arr, int size, int position)
{
	if (arr[position] < arr[position + 1] && (position + 1) != size)
	{
		bool isSorted = check_array_sorted(arr, size, position + 1);
		if (isSorted)
			return true;
		else
			return false;
	}
	else if ((position + 1) == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int arr[]{ 1,2,3,4,5,4 };

	bool isSorted = check_array_sorted(arr, 6, 0);

	if (isSorted)
		std::cout << "Sorted" << std::endl;
	else
		std::cout << "Not Sorted" << std::endl;

	return 0;
}