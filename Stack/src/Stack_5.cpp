/*
	Balanced expression with replacement
	Given a string that contains only the following => ‘{‘, ‘}’, ‘(‘, ‘)’, ‘[’, ‘]’.
	At some places there is ‘X’ in place of any bracket.
	Determine whether by replacing all ‘X’s with appropriate bracket, is it possible to make a valid bracket sequence.

	Input : S = "{(X[X])}"
	Output : Balanced
				The balanced expression after
				replacing X with suitable bracket is:
				{([[]])}.

	Input : [{X}(X)]
	Output : Not balanced
				No substitution of X with any bracket
				results in a balanced expression.
*/
#include "Stack_5.h"
#include "Common.h"
Stack_5::Stack_5()
{
	std::cout << "Default Initialization" << std::endl;
	stackSize = 0;
	pStack = NULL;
	top = 0;
}


Stack_5::Stack_5(int stackSize)
{
	std::cout << "Parameterized Initialization" << std::endl;
	this->stackSize = stackSize;
	top = -1;
	pStack = new char[this->stackSize];
}


void Stack_5::push(char cParenthesis)
{
	pStack[++top] = cParenthesis;
}


void Stack_5::push_string(char* string)
{
	char* temp = string;
	int i = 0;

	while (i < stackSize-1 && temp[i] != '\0')
	{
		push(static_cast<char>(temp[i]));
		++i;
	}
}

void Stack_5::replace_X()
{
	int i = 0;
	int tTop = top;

	while (i <= tTop)
	{
		if ((pStack[i] == '[' || pStack[i] == '{' || pStack[i] == '(') &&
			(pStack[tTop] == ']' || pStack[tTop] == '}' || pStack[tTop] == ')')
			)
		{
			++i;
			--tTop;
			continue;
		}
		else if ((pStack[i] == 'X') && (pStack[tTop] == ']' || pStack[tTop] == '}' || pStack[tTop] == ')'))
		{
			if (pStack[tTop] == ']')
			{
				pStack[i] = '[';
			}
			else if (pStack[tTop] == '}')
			{
				pStack[i] = '{';
			}
			else if (pStack[tTop] == ')')
			{
				pStack[i] = '(';
			}

			++i;
			--tTop;
			continue;
		}
		else if ((pStack[i] == 'X') && (pStack[tTop] == '[' || pStack[tTop] == '{' || pStack[tTop] == '('))
		{
			if (pStack[tTop] == '[')
			{
				pStack[i] = ']';
			}
			else if (pStack[tTop] == '{')
			{
				pStack[i] = '}';
			}
			else if (pStack[tTop] == '(')
			{
				pStack[i] = ')';
			}

			++i;
			--top;
			continue;
		}
		else if ((pStack[tTop] == 'X') && (pStack[i] == '[' || pStack[i] == '{' || pStack[i] == '('))
		{
			if (pStack[i] == '[')
			{
				pStack[tTop] = ']';
			}
			else if (pStack[i] == '{')
			{
				pStack[tTop] = '}';
			}
			else if (pStack[i] == '(')
			{
				pStack[tTop] = ')';
			}

			++i;
			--tTop;
			continue;
		}
		else if ((pStack[tTop] == 'X') && (pStack[i] == ']' || pStack[i] == '}' || pStack[i] == ')'))
		{
			if (pStack[i] == ']')
			{
				pStack[tTop] = '[';
			}
			else if (pStack[i] == '}')
			{
				pStack[tTop] = '{';
			}
			else if (pStack[i] == ')')
			{
				pStack[tTop] = '(';
			}

			++i;
			--tTop;
			continue;
		}
		else
		{
			++i;
			--tTop;
			continue;
		}
	}
}


void Stack_5::val_bal_parenthesis(char* input)
{
	push_string(input);

	replace_X();

	int tTop = top;
	int i = 0;
	bool isBal = true;
	while (i <= tTop)
	{
		if ((pStack[i] == '[' && pStack[tTop] == ']') ||
			(pStack[i] == '{' && pStack[tTop] == '}') ||
			(pStack[i] == '(' && pStack[tTop] == ')')
			)
		{
			++i;
			--tTop;
		}
		else
		{
			isBal = false;
			break;
		}
	}

	if (isBal)
	{
		std::cout << "Balanced" << std::endl;
	}
	else
	{
		std::cout << "Not Balanced" << std::endl;
	}

}



int main(void)
{
	char origString[]{ "[{X}(X)]" };

	int stackSize = static_cast<int>(sizeof(origString) / sizeof(origString[0]));

	Stack_5* ss = new Stack_5(stackSize);
	
	ss->val_bal_parenthesis(origString);
}