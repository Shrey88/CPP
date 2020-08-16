/*
	program to convert  given matrix to a diagonal matrix given a N*N matrix.

	The task is to convert the matrix to a diagonal matrix.

	that is to change teh values of the non diagonal elements of a matrix to 0

	diagonal Matrix: matrix is called a diagonal matrix, if all of the non diagonal elements of the matrix are  zero.

	Input : mat[][] { {2,1,7}, {3,7,2}, {5,4,9} }
	Output: mat[][] { {2,0,7}, {0,7,0}, {5,0,9} }
*/


#include<iostream>

void keep_diagonal_values(int start_point, int end_point, int internal_matrix, int mat[][6]);

int main()
{
	int		mat[6][6]{
						{1, 2, 3, 4, 5, 6},
						{1, 2, 3, 4, 5, 6},
						{1, 2, 3, 4, 5, 6},
						{1, 2, 3, 4, 5, 6},
						{1, 2, 3, 4, 5, 6},
						{1, 2, 3, 4, 5, 6},
	};

	int		j = 0;
	bool	intersect_point = false;

	int total_elements = sizeof(mat[0]) / sizeof(int);

	int internal_matrix = (total_elements - 2);

	int start_point = 0;

	int end_point = total_elements;

	if (total_elements % 2 == 0)
	{
		for (int i = 0; i < (total_elements / 2); i++)
		{
			keep_diagonal_values(start_point, end_point, internal_matrix, mat);
			++start_point;
			--end_point;
		}
	}


	for (int i = 0; i < total_elements; i++) {
		for (j = 0; j < total_elements; j++)
		{
			std::cout << mat[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}


void keep_diagonal_values(int start_point, int end_point, int internal_matrix, int mat[][6])
{
	for (int i = start_point; i < end_point; i++)
	{
		if (i != start_point && i < (end_point - 1))
		{
			mat[i][start_point] = 0;
			mat[i][end_point - 1] = 0;
		}
		else
		{
			for (int j = start_point + 1; j < (end_point - 1); j++)
			{
				mat[i][j] = 0;
			}
		}
	}
}