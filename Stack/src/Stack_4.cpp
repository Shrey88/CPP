/*
	Reverse a string
*/

#include "Stack_4.h"
#include<iostream>

Stack_4::Stack_4()
{
	pStack = NULL;
	stackSize = 0;
	top = 0;
}

Stack_4::Stack_4(int stackSize)
{
	this->stackSize = stackSize;
	pStack = new char[stackSize];
	top = -1;
}

void Stack_4::push(char nameChar)
{
		pStack[++top] = nameChar;
}

bool Stack_4::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

void Stack_4::reverse_string(char* origString)
{
	char* temp = origString;
	int i = 0;

	while (i < stackSize-1 && temp[i] != '\0')
	{
		push(static_cast<char>(temp[i]));
		++i;
	}

	temp = pStack;
	
	i = 0;
	while (i < stackSize-1 && temp[i] != '\0')
	{
		origString[i] = pStack[top];
		--top;
		++i;
	}
	origString[i] = '\0';
}

int main(void)
{
	char origName[]{ "Shreyas" };
	int stackSize = static_cast<int>((sizeof(origName) / sizeof(origName[0])));
	Stack_4* ss = new Stack_4(stackSize);
	std::cout << "Original String :: " << origName << std::endl;
	ss->reverse_string(origName);
	std::cout << "Reverse String :: " << origName << std::endl;
	delete ss;
}