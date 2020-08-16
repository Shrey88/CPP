/*
	in this program we are going to print the linked list from tail to head (i.e. bottom to top) using recursive function
	this is known as headrecursion

*/

#include "../header/Recursion_LL.h"
#include "../../Common.h"

Recursion_LL::Recursion_LL()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this->headNode  = NULL << this is wrong way of initializing as you are not storing any address in that variable, but trying to dereference it.
	*/
	headNode = NULL;
}

void Recursion_LL::insert_at_end(int num)
{
	RecursionNode *newNode = new RecursionNode;
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


void Recursion_LL::recursive_display(RecursionNode* nextNode)
{
	/*
		this is the base condition for the recursion

		base condition should always be like at some point it will stop and it has to start returning 
	*/
	if (nextNode->next == NULL)
		return;
	else
	{
		/*
			here we are doing the head recursion

			headrecursion is where function is called recursively till it reaches the base condition
			and starts returning from the functions to its original call.
		*/
		recursive_display(nextNode->next);
		std::cout << nextNode->num << " ";
	}

}

int main(void)
{
	Recursion_LL* rll = new Recursion_LL;

	rll->insert_at_end(10);
	rll->insert_at_end(20);
	rll->insert_at_end(30);
	rll->insert_at_end(40);
	rll->insert_at_end(50);

	rll->recursive_display(rll->headNode);

	return 0;
}