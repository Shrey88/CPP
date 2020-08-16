/*
	Find Duplicate Parenthesis in an Expression

	Input : ((x+y))+z
	Output: Duplicate () found in sub expression((x+y))

	Input: (x+y)
	Output: No Duplicate () is found

	Input: ((x+y)+((z)))
	Output: Duplicate () found in sub-expression ((z))
*/
#include "Stack_3.h"
#include "Common.h"

Stack_3::Stack_3()
{
	std::cout << "Default Initializatoin...." << std::endl;
	this->stackSize = 0;
	this->pStack = NULL;
	this->top = 0;
}


Stack_3::Stack_3(int stackSize)
{
	std::cout << "Initialized......" << std::endl;
	this->stackSize = stackSize;
	this->pStack = new char[this->stackSize];
	this->top = -1;
}


Stack_3::~Stack_3() 
{
	std::cout << "Self Destructing.." << std::endl;
}

void Stack_3::push(char cParenthesis)
{
	if (cParenthesis != '\0')
	{
		pStack[++top] = cParenthesis;
	}
}

void Stack_3::pop()
{
	if(!isEmpty())
		--top;
}

bool Stack_3::isEmpty()
{
	if (top == -1)
	{
		std::cout << "Stack is Empty";
		return true;
	}
	else
	{
		return false;
	}
}


void Stack_3::val_dup_parenthesis(char* input)
{
	if (*input != '(' && top == -1)
		return;
	else
	{
		while (*input != '\0')
		{
			if (*input != ')')
			{
				if (top == -1 && *input != '(')
				{
					//no action required here
				}
				else
				{
					push(static_cast<char>(*input));
				}
				
				++input;
				continue;
			}
			else
			{
				if (*input == ')')
				{
					push(static_cast<char>(*input));
					char* next = input;
					++next;
					if (*next == ')')
					{
						push(static_cast<char>(*input));
						if (check_in_stack())
						{
							std::cout << "Duplicate () found in sub-expression ";
							get_expression();
							std::cout << std::endl;
							top = -1;
							++input;
							continue;
						}
						else
						{
							top = -1;
						}
					}
					else
					{
						top = -1;
					}
				}
				++input;
				continue;
			}
		}	

		if (top)
		{
			std::cout << "No Duplicate () is found" << std::endl;
			return;
		}			
	}
}

bool Stack_3 :: check_in_stack()
{
	int tTop = top;
	int iBrac = 2;
	while (tTop != -1)
	{
		if (pStack[tTop] == '(')
		{
			--iBrac;
		}
		if (iBrac == 0)
		{
			--tTop;
			return true;
		}

		--tTop;
	}
	
	return false;
}

void Stack_3 :: get_expression()
{
	int i = 0;
	while (i <= top)
	{
		std::cout << pStack[i];
		++i;
	}
}

int main(void)
{
	char input[] {"((x+y))+((z))"};
	int stackSize = static_cast<int> (sizeof(input) / sizeof(input[0])) ;

	Stack_3* ss = new Stack_3(stackSize);

	ss->val_dup_parenthesis(input);

	return 0;
}