/*
	given a 2D array of order NxN, the task is to find the sum of all the elements present in both the
	diagonals and boundary elements of the given array

	Input: arr[][] { {1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4}};

	Output: 40

	explanation:
		1	2	3	4
		1	2	3	4
		1	2	3	4
		1	2	3	4

		the sum of elements on the boumdary is
				0	1	2	3
			0	1 + 2 + 3 + 4
			1	1 +			4
			2	1 +			4
			3	1 + 2 + 3 + 4

		the sum of elements on the diagonals which do not interrsect with the boundary elements is
				1	2
			1	2 + 3
			2	2 + 3
*/


#include<iostream>


int main()
{
	int arr[4][4]{ {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4},
					{1, 2, 3, 4} };

	int		sum = 0,
		j = 0;
	bool	intersect_point = false;

	int total_elements = sizeof(arr[0]) / sizeof(int);

	int internal_matrix = (total_elements - 2);

	int end_position = internal_matrix;

	for (int i = 0; i < total_elements; i++)
	{

		sum = sum + arr[i][0];

		if (i != 0 && i < (total_elements - 1) && internal_matrix > 2)
		{

			if (j > end_position)
			{
				sum = sum + arr[i][j];
				sum = sum + arr[i][end_position];
				--j;
				++end_position;
				intersect_point = true;
			}
			else if (j != end_position)
			{
				sum = sum + arr[i][j];
				sum = sum + arr[i][end_position];

				if (intersect_point)
				{
					--j;
					++end_position;
				}
				else
				{
					++j;
					--end_position;
				}

			}
			else if (j == end_position)
			{
				sum = sum + arr[i][j];
				--j;
				++end_position;
				intersect_point = true;

			}

			sum = sum + arr[i][total_elements - 1];
		}
		else
		{
			for (j = 1; j < (total_elements - 1); )
			{
				sum = sum + arr[i][j];
				++j;
			}

			sum = sum + arr[i][j];

			j = 1;
		}

	}

	std::cout << sum;

	return 0;
}