/*
	Reverse the Linked List using recursion
*/
#include "Reverse_LL.h"
#include "../Common.h"


Reverse_LL::Reverse_LL()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this is wrong way of initializing as you are not storing any address in that variable, but trying to dereference it.
		this->headNode  = NULL
		this->tailNode  = NULL
	*/
	headNode = NULL;
	tailNode = NULL;
}


void Reverse_LL::insert_at_end(int num)
{
	RecursionNode* newNode = new RecursionNode;
	newNode->num = num;

	if (headNode == NULL)
	{
		headNode = newNode;
	}
	else
	{
		RecursionNode* temp = headNode;

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

/*
	here we are going till the end of the list and then while returning back we are making the last element 
	point to its previous element and so on and when we 
*/
void Reverse_LL::reverse_linked_list(RecursionNode* nextNode)
{
	/*
		base condition 1

		this is to mark the end of the list and start returning back to its head
	*/
	if ((nextNode)->next == NULL)
		return;

	reverse_linked_list((nextNode)->next);
	if ((nextNode)->next->next == NULL)
		tailNode = (nextNode)->next;

	(nextNode)->next->next = (nextNode);

	/*
		base condition 2

		this is to mark that after returning back from the recursive function we have reached our starting point 

		so now we will make the the current headNode element point to the NULL address.

		we will assign the address of the last element of the list to headNode and make the tailNode point to null
	*/
	if (headNode == nextNode)
	{
		(nextNode)->next = NULL;
		headNode = tailNode;
		tailNode = NULL;
	}

}

void Reverse_LL::display()
{
	RecursionNode* temp = headNode;

	while (temp->next != NULL)
	{
		std::cout << temp->num << " ";
		temp = temp->next;
	}
	std::cout << temp->num << " ";
}

int main(void)
{
	Reverse_LL* rll = new Reverse_LL;

	rll->insert_at_end(10);
	rll->insert_at_end(20);
	rll->insert_at_end(30);
	rll->insert_at_end(40);
	rll->insert_at_end(50);


	rll->reverse_linked_list(rll->headNode);

	rll->display();
}