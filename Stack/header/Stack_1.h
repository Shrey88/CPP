/*
	Implemented Stack using dynamic array
*/
#pragma once
class Stack
{
private:
	int top;
	int* arr;
	int size;

public:
	Stack(int size);
	int& getArray();
	void increment_Top();
	void decrement_Top();
	void push(int num);
	void pop();
	void getTop();
	void disp_Stack();
	bool isEmpty();
	~Stack();
};

