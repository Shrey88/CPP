/*
	Implementing Balanced Parenthesis
*/
#pragma once
class Stack_2
{
private:
	char *parenthesis;
	int top;
	int size;

	char& getArray();
	int increment_Top();
	void decrement_Top();
	void push(char parenthesis);
	void pop();
	bool isEmpty();

public:
	Stack_2();
	Stack_2(int size);
	~Stack_2();
	
	void getTop();
	void disp_Stack();
	void val_bal_parenthesis(char* parentString);
};

