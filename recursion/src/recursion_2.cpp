/*
	Tower of Hanoi Program
*/

#include<iostream>
#define MAX_HANOI 3

void tower_of_Hanoi(int rodA[], int rodB[], int rodC[], int* topA, int* topB, int* topC)
{
	if ((*topA == 0) && (*topB == 0) && (*topC == 0))
	{
		if (rodA[*topA] == MAX_HANOI)
		{
			if (rodB[*topB] > rodC[*topC])
			{
				rodB[++(*topB)] = rodC[*topC];
				rodC[*topC] = 0;
			}
			else if (rodB[*topB] < rodC[*topC])
			{
				rodC[++(*topC)] = rodB[*topB];
				rodB[*topB] = 0;
			}
		}
		else if (rodB[*topB] == MAX_HANOI)
		{
			rodB[++(*topB)] = rodC[*topC];
			rodC[*topC] = 0;
		}

		tower_of_Hanoi(rodA, rodB, rodC, &(*topA), &(*topB), &(*topC));

	}
	else if (*topB != MAX_HANOI - 1)
	{
		if (*topA > -1)
		{
			if (rodA[*topA] > rodB[*topB] && rodA[*topA] > rodC[*topC])
			{
				if (rodB[*topB] == 0)
				{
					rodB[*topB] = rodA[*topA];
					rodA[*topA] = 0;
					--(*topA);
				}
				else if (rodC[*topC] == 0)
				{
					rodC[*topC] = rodA[*topA];
					rodA[*topA] = 0;
					--(*topA);
				}
			}
			else
			{
				rodB[++(*topB)] = rodA[*topA];
				rodA[*topA] = 0;
				--(*topA);
			}
		}
		else
		{
			rodA[++(*topA)] = rodC[*topC];
			rodC[*topC] = 0;
			--(*topC);
		}
		tower_of_Hanoi(rodA, rodB, rodC, &(*topA), &(*topB), &(*topC));
	}
}

int main(void)
{
	int rodA[3]{ 3,2,1 };
	int rodB[3]{ 0,0,0 };
	int rodC[3]{ 0,0,0 };
	int topA = 2;
	int topB = 0;
	int topC = 0;

	tower_of_Hanoi(rodA, rodB, rodC, &topA, &topB, &topC);

	return 0;
}