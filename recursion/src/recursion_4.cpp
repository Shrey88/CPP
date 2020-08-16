/*
	find the length of string using recursion
*/

#include<iostream>

int find_str_len_recursion(char* string)
{
	char* temp = string;
	static int sum = 0;

	if (*temp != '\0')
	{
		++sum;
		find_str_len_recursion(++temp);
	}
	else
	{
		return sum;
	}

}

int main(void)
{
	char string[]{ "ShreyasPotdar" };

	int len = find_str_len_recursion(string);

	std::cout << "Length of the string :: " << len << std::endl;

	return 0;
}