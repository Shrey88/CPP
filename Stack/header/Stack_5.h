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
#pragma once
class Stack_5
{
private:
	char* pStack;
	int stackSize;
	int top;
	void push_string(char* string);
	void replace_X();

public:
	Stack_5();
	Stack_5(int stackSize);
	void push(char cParenthesis);
	void val_bal_parenthesis(char* input);
};

