/*
	find the middle element using Floyd's approach

	slow pointer -	it moves one element at a time 

	fast pointer - it moves two element at a time.


*/

#include "../header/slowFastPointer.h"
#include"../../Common.h"

SlowFastPointer::SlowFastPointer()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this->headNode  = NULL << this is wrong way of initializing as you are not storing any address in that variable, but trying to dereference it.
	*/
	ln_headNode = NULL;
}

void SlowFastPointer::insert_at_end(int num)
{
	SlowFastPointerNode* newNode = new SlowFastPointerNode;
	newNode->num = num;

	if (ln_headNode == NULL)
	{
		ln_headNode = newNode;
	}
	else
	{
		SlowFastPointerNode* temp = ln_headNode;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			temp->next = newNode;
		}
	}
}

int SlowFastPointer::middle_element()
{
	SlowFastPointerNode* sPointer = ln_headNode;
	SlowFastPointerNode* fPointer = ln_headNode;

	while (fPointer->next->next != NULL)
	{
		sPointer = sPointer->next;
		fPointer = fPointer->next->next != NULL ? fPointer->next->next : fPointer->next;

		if (fPointer->next == NULL)
			break;
	}
	if (fPointer->next != NULL && fPointer->next->next == NULL)
		sPointer = sPointer->next;

	return sPointer->num;
}

int main(void)
{
	SlowFastPointer* sfPointer = new SlowFastPointer;

	sfPointer->insert_at_end(10);
	sfPointer->insert_at_end(20);
	sfPointer->insert_at_end(30);
	sfPointer->insert_at_end(40);
	sfPointer->insert_at_end(50);
	sfPointer->insert_at_end(60);

	int middle_element = sfPointer->middle_element();

	std::cout << "Middle element :: " << middle_element << std::endl;
	return 0;
}