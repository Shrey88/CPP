
/*
	remove a specific character from a string
*/


#include<iostream>

void remove_specific_char(char* string, char findChar)
{
	static bool found = false;
	static int iFound = 0;
	if (*string != findChar && *string != '\0')
	{
		if (found)
		{
			int i = 0;
			char* temp = string;
			do {
				--temp;
				++i;
			} while (i < iFound);
			*(temp) = *string;
			*string = '\0';

			temp = string;
			if (*(++temp) == '\0')
			{
				*string = '\0';
			}

		}
		remove_specific_char(++string, findChar);
	}
	else if (*string != '\0')
	{
		found = true;
		++iFound;
		remove_specific_char(++string, findChar);
	}

	return;
}

int main(void)
{
	char string[]{ "jayant" };
	char findChar = 'a';

	remove_specific_char(string, findChar);

	std::cout << "Remove Char :: " << string << std::endl;
}