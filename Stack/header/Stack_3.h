/*
	Find Duplicate Parenthesis in an Expression

	Input : ((x+y))+z
	Output: Duplicate () found in sub expression((x+y))

	Input: (x+y)
	Output: No Duplicate () is found

	Input: ((x+y)+((z)))
	Output: Duplicate () found in sub-expression ((z))
*/
#pragma once
class Stack_3
{
private:
	char* pStack;
	int top;
	int stackSize;

	void push(char cParenthesis);
	void pop();
	bool isEmpty();

public:
	Stack_3();
	Stack_3(int stackSize);
	~Stack_3();

	void val_dup_parenthesis(char* input);
	bool check_in_stack();
	void get_expression();
};

