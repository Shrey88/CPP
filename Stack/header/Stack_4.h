/*
	Reverse a string
*/

#pragma once
class Stack_4
{
private:
	char* pStack;
	int top;
	int stackSize;

public:
	Stack_4();
	Stack_4(int stackSize);
	void push(char nameChar);
	bool isEmpty();
	void reverse_string(char* origString);
};

