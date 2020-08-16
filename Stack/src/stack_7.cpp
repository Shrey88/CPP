/*
	find the nearest smallest no on left side in an array.

	Input :
		a[] {1,6,4,10,2,5}
	
	Output:
		{_, 1, 1, 4, 1, 2}

	Input: 
		a[]{1,3,0,2,5}
	Output:
		{_, 1, _, 0, 2}
*/

#include "stack_7.h"
#include "Common.h"

Stack_7::Stack_7()
{
	this->numStack = NULL;
	this->top = 0;
	this->stackSize = 0;
}

Stack_7::Stack_7(int stackSize)
{
	this->numStack = new int[stackSize];
	this->stackSize = stackSize;
	this->top = -1;
}

void Stack_7::find_min_nearest(int arr[])
{
	int i = 0;
	while (i < this->stackSize)
	{
		if (i == 0)
		{
			++top;
			numStack[top] = arr[i];
			arr[i] = -1;
			++i;
			continue;
		}
		else
		{
			if (numStack[top] < arr[i])
			{
				int temp = arr[i];
				arr[i] = numStack[top];
				numStack[++top] = temp;
				++i;				
			}
			else if (numStack[top] > arr[i])
			{
				if (numStack[--top] < arr[i])
				{
					int temp = arr[i];
					arr[i] = numStack[top];
					numStack[++top] = temp;
					++i;
				}
				else if (numStack[top] > arr[i])
				{
					arr[i] = -1;
					while (top != 0)
					{
						--top;
					}
					if (top == 0)
					{
						numStack[top] = 0;
					}
					++i;
				}
			}
		}
	}
}

int main(void)
{
	int arr[]{ 1,3,0,2,5 };
	int stackSize = static_cast<int>(sizeof(arr) / sizeof(arr[0]));

	Stack_7* ss = new Stack_7(stackSize);
	
	std::cout << "Before finding the nearest ::"<<std::endl;
	for (int i = 0; i < stackSize; i++)
	{
		std::cout << arr[i] << " ";
	}

	ss->find_min_nearest(arr);

	std::cout << std::endl<< "After finding the nearest ::" << std::endl;
	for (int i = 0; i < stackSize; i++)
	{
		std::cout << arr[i] << " ";
	}

}