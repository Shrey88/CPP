/*
	Check whether a matrix is a latin square or not

	given a square matrix of size N*N, the task is to check if it is Latin square or not.

	a square matrix is a Latin square if each cell of the matrix contains one of N different values
	(in the range [1, N]) and no value is repaeatd within a row or a column

	Input:	1	2	3	4
			2	1	4	3
			3	4	1	2
			4	3	2	1

	Output: Yes


	Input:	2	2	2	2
			2	3	2	3
			2	2	2	3
			2	2	2	2

	Output: No

*/


#include<iostream>


int main()
{
	int arr[][4]{ 1, 2, 3, 4, 2, 1, 4, 3, 3, 4, 1, 2, 4, 3, 2, 1 };
	//int arr[][4]{ 2, 2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 3, 2, 2, 2, 2 };

	int rows = sizeof(arr) / sizeof(arr[0]),
		columns = sizeof(arr[0]) / sizeof(int);

	bool isLatin = false;
	//rows
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < (columns - 1); j++)
		{

			for (int k = j + 1; k < columns; k++)
			{
				if (arr[i][j] == arr[i][k])
				{
					std::cout << "No";
					isLatin = true;
					break;
				}

				if (arr[j][i] == arr[k][i])
				{
					std::cout << "No";
					isLatin = true;
					break;
				}
			}
			if (isLatin)
			{
				break;
			}
		}

		if (isLatin)
		{
			break;
		}

	}

	if (isLatin == false)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}



	return 0;
}