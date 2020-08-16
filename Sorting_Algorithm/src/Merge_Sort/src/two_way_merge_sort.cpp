#include <iostream>
#include <math.h>
/*
	Two Way Merge Sort.

	two way merge sort is a iterative process using loop and merge sort is recursive procedure.

	in two way merging tow list are taken at a time and merge.

*/

#define ARRAY_SIZE	6

void sortMerge(int* array);
void mergeList(int* array, int nList, int nElements);
void update_orig_list(int* array, int* fArray, int len_list);
void display(int* array);


int main(void)
{
	/*
		to use the 2 way merging procedure we need two list, but here we don't have two list.

		so we will assume that each element is a list (that means that they are sorted list as each list contains only one element).
		we will merge two list.

		List		:	1, 2, 3, 4, 5, 6, 7, 8
		Array		:	9, 3, 7, 5, 6, 4, 8, 2

		Merge List	:	1, 2(1)		3, 4(2)		5, 6(3)		7, 8(4)
		1st Pass	:	3, 9		5, 7		4, 6		2, 8		// we got 4 list here
																		//<-- in case there was 9th element then it would just be carry forwarded
																		 

		Merge List	:	1 , 2 (1)		3, 4(2)
		2nd Pass	:	3, 5, 7, 9		2, 4, 6, 8						// we got 2 list here
																		//<-- in case there was 9th element then it would just be carry forwarded
																		

		Merge List	:	1, 2
		3rd Pass	:	2, 3, 4, 5, 6, 7, 8, 9							// we got 1 list which is final list.
																		//<--	in case there was 9th element that would have got compared with this 
																		//		list and there would have been 4th Pass which would be the final sorted list
																		
		so if you see the list got divided into 
		8/2 = 1
		4/2 = 1
		2/2 = 1

		so it is 8 = 2^3
		log 8 = 3			// applying the logs on both side, log 2 to base 2 will be 1

		so no of passes required are (log n)

		for each pass n merges are there and like wise we have (log n) passes, so the time complexity is theta (n log n)
		class available for the function (n log n)
	*/

	//NOTE: change the ARRAY_SIZE depending on the no of elements you are adding to the array
	int array[]{ 9, 3, 7, 5, 6, 4};	
	

	sortMerge(array);


	display(array);
}

void sortMerge(int* array)
{
	int no_of_passes = 0;

	int i = 0;

	/*
		as we know the no of passes will be log n

		so to determine the no of passes for the 
			size of the array that is in the exact power of 2 
			size of the array which are not in the exact power 2.

		add 1 to the value of i to get the total no of passes.
		for e.g.
			if you have 2 elements then no of passes would be 1
				because it will pass the if condition when value of i is 0
				so the condition would be something like this 
				value of i will be 0
				2 >= 1 (2 to the power 0 is 1) && 2 <=  2 (2 to the power 0+1 is 2) 
				2 >= 1 && 2 <= 2

			if you have 5/6/7/8 elements then no of passes would be 3
				because the condition would be something like this 
				value of i will be 2
				(5/6/7/8) >= (2 to the power of 2) && (5/6/7/8) <=(2 to the power of 2+1)
				(5/6/7/8) >= 4 && (5/6/7/8) <= 8
	*/
	do
	{
		if (ARRAY_SIZE >= pow(2, i) && ARRAY_SIZE <= pow(2, i+1) )
		{
			no_of_passes = i + 1;
			break;
		}
		++i;
	} while (true);

	for (int flIndex = 0; flIndex < no_of_passes; flIndex++)
	{
		int power = flIndex + 1;					//<-- no of elements to compare from each list on each pass.
		int nList = static_cast<int>( (ARRAY_SIZE / pow(2, power)) );	//<-- no of list we will get on sorting and merging on each pass
		int nElements = static_cast<int>(pow(2, flIndex));				//<-- no of elements to compare  on each pass.
		
		// if the nList is 0, that means that there is one more sorting and merging remaining
		if(nList == 0)
			++nList;

		// perform sorting on the two list and merge the result in third array.
		mergeList(array, nList, nElements);
	}
}

void mergeList(int* array, int nList, int nElements)
{
	int	lIndex = 0,
		rIndex = lIndex + nElements,
		index = 0,
		lElement = 0,
		rElement = 0;

	int fArray[ARRAY_SIZE];		//<-- this array is used to store the sorted elements 

	for (int flIndex = 0; flIndex < nList; flIndex++)
	{
		/*
			lElement and rElement are used to control the comparison of no of elements on each pass 

			lIndex and rIndex are used to control the array out of bound exception along with the above condition
		*/
		while ( (lElement < nElements && rElement < nElements) && (lIndex < ARRAY_SIZE && rIndex < ARRAY_SIZE) )
		{
			/*
				compare if the first element is smaller than the next element
			*/
			if (array[lIndex] < array[rIndex])
			{
				fArray[index] = array[lIndex];
				
				++index;						//	<--	increment the position of the third array
				++lIndex;						//	<--	increment the index of the first array
				++lElement;						//	<--	increment the count by 1 if the element from the first array is compared successfully 
			}
			/*
				compare if the first element is higher than the next element
			*/
			else if (array[lIndex] > array[rIndex])
			{
				fArray[index] = array[rIndex];
				
				++index;						//	<--	increment the position of the third array
				++rIndex;						//	<--	increment the index of the second array
				++rElement;						//	<--	increment the count by 1 if the element from the second array is compared successfully
			}
		}

		/*
			in case if any elements from the first array are left out from comparison then they need to be inserted into the third array as is without
			making any comparison
		*/
		while (lElement < nElements && lIndex < ARRAY_SIZE)
		{
			fArray[index] = array[lIndex];
			++index;
			++lIndex;
			++lElement;
		}
		
		/*
			in case if any elements from the second array are left out from comparison then they need to be inserted into the third array as is without
			making any comparison
		*/
		while (rElement < nElements && rIndex < ARRAY_SIZE)
		{
			fArray[index] = array[rIndex];
			++index;
			++rIndex;
			++rElement;
		}

		lElement = 0;				//<--	reset the value to 0 for comparing the new list 
		rElement = 0;				//<--	reset the value to 0 for comparing the new list 
		lIndex += nElements;		//<--	increment the index of first list by the no of elements to be compared in each pass
		rIndex += nElements;		//<--	increment the index of second list by the no of elements to be compared in each pass

	}

	/*
		on completion of each pass update the original list by updating the latest sorted list from the third array.
	*/
	update_orig_list(array, fArray, index);
}

/*
	update the original list from the third array
*/
void update_orig_list(int* array, int* fArray, int len_list)
{
	std::cout << "Pass Array ::" << std::endl;
	for (int index = 0; index < len_list; index++)
	{
		array[index] = fArray[index];
		std::cout << array[index] << "\t";
		fArray[index] = 0;
	}

	std::cout << std::endl << std::endl;
}

/*
	display the original list.
*/
void display(int* array)
{
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		std::cout << array[index] << "\t";
	}
}