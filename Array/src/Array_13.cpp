/*
	get the sum of diagonal values, without repeating the middle value of the diagonal.
*/
#include <iostream>

int main()
{

	int arr[3][3] = { {1, 2, 3 }, {4, 5, 6 }, {7, 8, 9 } };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; )
		{
			if (i % 2 == 1) {
				j = 1;
			}
			sum = sum + arr[i][j];
			j = j + 2;
		}
	}

	std::cout << sum;

	return 0;
}