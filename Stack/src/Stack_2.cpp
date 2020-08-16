/*
	Implementing Balanced Parenthesis
*/

#include "Stack_2.h"
#include "Common.h"


Stack_2::Stack_2()
{
	std::cout << "Default Initializing....." << std::endl;
	this->top = -1;
	this->parenthesis = NULL;
	this->size = 0;
	std::cout << "Default Constructor called" << std::endl;
}


Stack_2::Stack_2(int Stacksize)
{
	std::cout << "Initializing....." << std::endl;
	this->top = -1;
	this->size = Stacksize;
	this->parenthesis = new char[this->size];
}

Stack_2::~Stack_2()
{
	std::cout << "Self Destructing..." << std::endl;
}

char& Stack_2::getArray()
{
	return parenthesis[0];// this will return the starting address of the array.
}

int Stack_2::increment_Top()
{
	return ++top;
}

void Stack_2::decrement_Top()
{
	--top;
}

void Stack_2::push(char parenthesis)
{
	if (this->top == (size - 1))
	{
		std::cout << "Stack is full" << std::endl;
		return;
	}

	if (parenthesis == '[' || parenthesis == '{' || parenthesis == '(')
	{
		char* pArray = &this->getArray();//the address return will get dereferenced so to get the address we have prefixed reference operator
		pArray[increment_Top()] = parenthesis;
	}
	else
	{
		//check if it is the closing bracket for the top element
		if ((this->parenthesis[top] == '[' && parenthesis == ']') ||
			(this->parenthesis[top] == '{' && parenthesis == '}') ||
			(this->parenthesis[top] == '(' && parenthesis == ')'))
			pop();
	}
}

void Stack_2::pop()
{
	if (isEmpty())
		return;

	decrement_Top();
}

void Stack_2::getTop()
{
	if (isEmpty())
		return;

	std::cout << "Top Parenthesis :: " << this->parenthesis[top] << std::endl;
}

bool Stack_2::isEmpty()
{
	if (top == -1)
	{
		std::cout << "Stack is Empty" << std::endl;
		return true;
	}
	else
		return false;
}

void Stack_2::disp_Stack()
{
	if (isEmpty())
		return;
	else
	{
		int iSize = top;
		while (iSize > 0)
		{
			std::cout << this->parenthesis[iSize] << " -> ";
			--iSize;
		}
		std::cout << this->parenthesis[iSize];
	}
}

void Stack_2::val_bal_parenthesis(char* parentString)
{
	int i = 0;
	while (parentString[i] != '\0')
	{
		push(static_cast<char>(parentString[i])); // parentString will return the address so changed the value to char using casting
		++i;
	}

	if (this->top == -1)
	{
		std::cout << "It's Balanced" << std::endl;
	}
	else
	{
		std::cout << "It's Not Balanced" << std::endl;
	}
}

int main(void)
{
	Stack_2 *ss = new Stack_2(10);
	char parenthesis[]{ "{()}[][" };
	ss->val_bal_parenthesis(parenthesis);
	ss->disp_Stack();

	delete ss;
	return 0;
}