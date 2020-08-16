/*
	get the sum of diagonal values, without repeating the middle value of the diagonal.

	rows and columns should be >=3
*/


#include <iostream>


int main()
{

	int arr[3][4] = { { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 } };
	int sum = 0;


	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		if ((static_cast<unsigned long long>(i) + 2) < (sizeof(arr) / sizeof(arr[0])))
		{
			for (int j = 0; j < (sizeof(arr[0]) / sizeof(int)); j++)
			{
				if ((static_cast<unsigned long long>(j) + 2) < (sizeof(arr[0]) / sizeof(int)))
				{
					sum = sum + arr[i][j] + arr[i][j + 2];

					sum = sum + arr[i + 1][j + 1];

					sum = sum + arr[i + 2][j] + arr[i + 2][j + 2];
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			break;
		}

	}

	std::cout << sum;

	return 0;
}