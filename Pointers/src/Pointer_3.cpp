/*
	Pointers and Arrays
*/

#include<iostream>

int main(int argc, char** argv)
{
	// array knows the no of values in the array.
	std::string texts[] = { "one", "two", "three" };

	std::cout << "Size of string : " << sizeof(std::string) << std::endl;
	std::cout << "Size of texts : " << sizeof(texts) << std::endl;


	// pointer points to the address of the first element in the array and it is unaware of no of elements.
	std::string* pTexts = texts;

	// for loop on pointer
	for (unsigned int index = 0;index < 3;index++)
	{
		std::cout << "Memory Location : " << pTexts << "\t Value : " << *pTexts << std::endl;
		++pTexts;	// <-- incrementing the memory address.
	}

	std::cout << std::endl;

	// another way of looping through the pointer
	std::string* pFirst = &texts[0];
	std::string* pLast = &texts[ (sizeof(texts) / sizeof(std::string)) - 1];

	while(true)
	{
		std::cout << "Memory Location : " << pFirst << "\t Value : " << *pFirst << std::endl;
		++pFirst;	// <-- incrementing the memory address.

		if (pFirst == pLast)
		{
			std::cout << "Memory Location : " << pFirst << "\t Value : " << *pFirst << std::endl;
			break;
		}
	}


	std::cout << std::endl;

	// another way of looping through the pointer
	{
		std::string* pFirst = &texts[0];

		// pointing the pLast to an unallocated memory location 
		std::string* pLast = &texts[sizeof(texts) / sizeof(std::string)];

		while (pFirst!=pLast)
		{
			std::cout << "Memory Location : " << pFirst << "\t Value : " << *pFirst << std::endl;
			++pFirst;	// <-- incrementing the memory address.

		}
	}
	
	return 0;
}