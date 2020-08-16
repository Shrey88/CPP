/*
	find the subsets of the given string

	send string twice as argument to the function string_subsets


	keep on incrementing the arg2 till it reaches the null character
		if it reaches null character 
			increment arg1 and assign the new address of arg1 to arg2
		else
			print the arg1 and arg2, value of arg2 is base on the ternary operation if the arg1 value is same then print only arg1 else print arg1 and arg2
			increment arg2 value 

	if the arg1 reaches the null character then start returning from the function.

*/


#include<iostream>
void string_subsets(char* arr, char* arr2)
{
	/*
		the second string will iterate through the complete string till it reaches end of string character.
		
		intitially 
			arr will be A
			arr2 will also be A


	*/
	if (*arr2 == '\0')
	{
		++arr;	//<-- increment the initial character that was sent 
		arr2 = arr; //<-- reinitialize the second pointer to char to address of the first element of the incremented arr.
		std::cout << std::endl;
	}
	else if(*arr2 != '\0')
	{
		/*
			here we are printing the value of arg1  and arg2 (but in this case we will only print it if it is not equal to arg1)
		*/
		std::cout << (*arr != '\0' ? *arr : static_cast<char>(' ')) << (*arr2 != '\0' ? *arr2 != *arr ? *arr2 : static_cast<char>(' ') : static_cast<char>(' ')) << " ";
		
		/*
			before assigning the prev address of the array we are checking if that is not equal's to the arg1 value

			the reason being say arg1 is A and arg2 is also A 
				if i decrement the address i may get some address from the stack which is not allocated for my array .

			the second reason being i want the subset so the combination here would be say A AB AC AD ABC ACD
				so say if my arg2 is pointing to B even i decrement it, it will give me A which is equalt to *arr value.
				next time when arg2 is C decrementing it will give me B and the comdition will satisfy as B != A and it will print ABC
				
		*/
		char* temp = *arr2 != *arr?arr2-1:arr2;
		if (*temp != *arr)
		{
			std::cout	<< (*arr != '\0' ? *arr : static_cast<char>(' ')) 
						<< (*temp != '\0' ? *temp != *arr ? *temp : static_cast<char>(' ') : static_cast<char>(' '))
						<< (*arr2 != '\0' ? *arr2 != *arr ? *arr2 : static_cast<char>(' ') : static_cast<char>(' ')) 
						<< " ";
		}
		
		++arr2;
	}
	
	if (*arr == '\0')
		return;

	string_subsets(arr, arr2);
}

int main(void)
{
	char string[]{"ABCD"};

	/*
		we are sending the string two times to get the subsets
	*/
	string_subsets(string ,string);

	return 0;
}