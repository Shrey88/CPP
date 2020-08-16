/*
	Implemented Stack using dynamic array
*/

#include "Stack_1.h"
#include "Common.h"

void Stack::increment_Top()
{
	++top;
}

void Stack::decrement_Top()
{
	--top;
}

void Stack::push(int num)
{
	if (this->top == (size - 1))
	{
		std::cout << "Stack is full" << std::endl;
		return;
	}

	int* arr = &this->getArray();
	arr[++top] = num;

}

void Stack::pop()
{
	if (isEmpty())
		return;
	std::cout << "Element " << arr[top] << " popped" << std::endl;
	this->decrement_Top();
}

void Stack::getTop()
{
	if (isEmpty())
		return;

	std::cout << "Top element :: " << arr[top] << std::endl;
}

bool Stack::isEmpty()
{
	if (top == -1)
	{
		std::cout << "Stack is Empty" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}
int& Stack::getArray()
{
	return arr[0];// this will return the starting address of the array.
}

void Stack::disp_Stack()
{
	int* arr = &this->getArray();//the address return will get dereferenced so to get the address we have prefixed reference operator
	int i = size-1;

	while (i > 0)
	{
		std::cout << arr[i] << " -> ";
		--i;
	}
	std::cout << arr[i] << std::endl;
}

Stack::Stack(int size)
{
	this->arr = new int[size];
	this->top = -1;
	this->size = size;
}

Stack::~Stack()
{
	std::cout << "Deleting the array" << std::endl;
}

int main(void)
{
	Stack *ss = new Stack(5);
	ss->push(1);
	ss->push(2);
	ss->push(3);
	ss->push(4);
	ss->push(5);
	ss->push(6);
	ss->pop();
	ss->push(7);
	ss->disp_Stack();
	ss->getTop();
	ss->pop();
	ss->pop();
	ss->pop();
	ss->pop();
	ss->pop();
	ss->pop();
	ss->~Stack();
	
	delete ss; //deletes the dynamic error implicitly.

	return 0;
}