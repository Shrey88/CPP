/*
	Trapping Rain Water
	Given n non-negative integers representing an elevation map where the width of each bar is 1,
	compute how much water it is able to trap after raining.


*/

#include <iostream>

void trapping_rain_water_count(int* a, unsigned int cols)
{
	unsigned int y = 1;
	unsigned int x = 0;
	int sum = 0;
	for (; y < cols; y++)
	{
		if (a[x] <= a[y])
		{
			for (unsigned int k = x + 1; k < y; k++)
			{
				if (a[x] - a[k] > 0)
				{
					sum += a[x] - a[k];
				}
			}
			x = y;
			continue;
		}
		else if ((y + 1) == cols)
		{
			++x;
			y = x;
		}

	}

	std::cout << sum << std::endl;
}

int main()
{
	int a[5]{ 3, 0, 2, 0, 4 };

	unsigned int cols = sizeof(a) / sizeof(a[0]);

	trapping_rain_water_count(a, cols);

	return 0;
}