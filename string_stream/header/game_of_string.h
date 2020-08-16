#pragma once
class StringStack
{
public:
	char* stack;
	int stackSize;
	int top;

	StringStack();
	StringStack(int stackSize);
	void gameofstring(char* string);
};