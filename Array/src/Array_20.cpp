/*
	Maximize the profit by selling at most M products

	given two lists that contains cost prices CP[] and selling prices SP[] of products resp.

	the task is to maximize the profit by selling a most M products

	Input : N = 5, M = 3
	CP[]{5, 10, 35, 7, 23}
	SP[]{11, 10, 0, 9, 19}

	Output: 8
	Profit on 0th product i.e 11 - 5 = 6
	Profit on 3rd prodcut i.e 9 - 7 = 2

	Selling any other product will not give profit

	so, total profit  = 6 + 2 = 8
*/

#include<iostream>


void find_max_profit(int* CP, int* SP, int array_size, int m_products, int n_products);

void sort_array(int* array, int array_size);

int main()
{
	int CP[]{ 5, 10, 35, 7, 23 },
		SP[]{ 11, 10, 0, 9, 19 };

	int n_products = 5;
	int m_products = 3;

	find_max_profit(CP, SP, (sizeof(CP) / sizeof(CP[0])), m_products, n_products);

	return 0;
}


void find_max_profit(int* CP, int* SP, int array_size, int m_products, int n_products)
{
	int size = 0;
	int result_array[5]{ 0 };
	int profit_array[25]{ 0 };
	int p_size = 0;
	int p_sum = 0;


	while (size < array_size)
	{
		result_array[size] = SP[size] - CP[size];
		++size;
	}


	for (int index = 0; index < n_products; index++)
	{
		for (int index1 = index + 1; index1 < n_products; index1++)
		{
			for (int index2 = index1 + 1; index2 < n_products; index2++)
			{
				p_sum = result_array[index] + result_array[index1] + result_array[index2];
				if (p_sum > 0)
				{
					profit_array[p_size] = p_sum;
					++p_size;
				}
				else
				{

				}
			}


		}
	}


	sort_array(profit_array, sizeof(profit_array) / sizeof(profit_array[0]));

	std::cout << "Max Profit :: " << profit_array[(sizeof(profit_array) / sizeof(profit_array[0])) - 1];
}

void sort_array(int* profit_array, int array_size)
{
	for (int index1 = 0; index1 < array_size - 1; index1++)
	{
		if (profit_array[index1] > profit_array[index1 + 1])
		{
			int tmp = profit_array[index1];
			profit_array[index1] = profit_array[index1 + 1];
			profit_array[index1 + 1] = tmp;

			for (int index2 = index1 + 1; index2 < array_size; index2++)
			{
				if (profit_array[index1] > profit_array[index2])
				{
					int tmp = profit_array[index1];
					profit_array[index1] = profit_array[index2];
					profit_array[index2] = tmp;
				}
			}
		}
	}
}