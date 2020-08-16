#include "../header/Delete_LL_Node.h"
#include "../../Common.h"


Delete_LL_Node::Delete_LL_Node()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this->headNode  = NULL << this is wrong way of initializing as you are not storing any address in that variable, but trying to dereference it.
	*/
	headNode = NULL;
}

void Delete_LL_Node::insert_at_start(int num)
{
	Node* newNode = new Node;
	newNode->num = num;

	if (headNode == NULL)
		headNode = newNode;
	else
	{
		newNode->next = headNode;
		headNode = newNode;
	}
}

void Delete_LL_Node::delete_node(int position)
{
	Node* temp = headNode;

	if (position == 0)
	{
		if (temp->next == NULL)
		{
			temp = NULL;

			/*
				deleting the memory address which was created by the new operator on the heaps
			*/
			delete headNode;
			return;
		}
		else
		{
			headNode = headNode->next;
			/*
				deleting the memory address which was created by the new operator on the heaps
			*/
			delete temp;
			return;
		}
	}
	else
	{
		int ipos = 0;
		while (temp->next != NULL)
		{
			++ipos;
			if (ipos == position)
			{
				break;
			}
			temp = temp->next;
		}
		if (ipos != position)
		{
			std::cout << "Invalid Position" << std::endl;
		}


		Node* delN = temp->next;
		Node* nextNode = temp->next->next != NULL ? temp->next->next :NULL;
		temp->next = nextNode;
		//TODO: please check why is it failing
		delete delN;
	}
}

void Delete_LL_Node::display()
{
	Node* temp = headNode;

	while (temp->next != NULL)
	{
		std::cout << temp->num << " ";
		temp = temp->next;
	}
	std::cout << temp->num << " ";
}

int main(void)
{
	Delete_LL_Node* delN = new Delete_LL_Node;

	delN->insert_at_start(10);
	delN->insert_at_start(20);
	delN->insert_at_start(30);
	delN->insert_at_start(40);
	delN->insert_at_start(50);
	delN->insert_at_start(60);

	std::cout << "Before deleting the node ::" << std::endl;
	delN->display();

	std::cout << std::endl;
	delN->delete_node(5);
	std::cout << "After deleting the node :: " << std::endl;
	delN->display();

	std::cout << std::endl;
	delN->delete_node(2);
	std::cout << "After deleting the node :: " << std::endl;
	delN->display();
	return 0;
}