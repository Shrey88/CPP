#include "../header/DLL.h"
#include "../../Common.h"

DLL::DLL()
{
	headNode = NULL;
}


void DLL::insert_at_start(int data)
{
	D_Node* newNode = new D_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
	}
	else
	{
		newNode->next = headNode;
		headNode->prev = newNode;
		headNode = newNode;
	}
}


void DLL::insert_at_end(int data)
{
	D_Node* newNode = new D_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
	}
	else
	{
		D_Node* temp = headNode;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			temp->next = newNode;
			newNode->prev = temp;
		}
	}
}


void DLL::insert_at_position(int data, int position)
{
	D_Node* newNode = new D_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
	}
	else
	{
		int ipos = 0;
		D_Node* temp = headNode;

		while (ipos != position && temp->next != NULL)
		{
			temp = temp->next;
			++ipos;
		}
		if (ipos == position)
		{
			if (ipos == 0)
			{
				newNode->next = headNode;
				headNode->prev = newNode;
				headNode = newNode;
				std::cout << "Added the element at the position :: " << position << std::endl;
				return;
			}
			else
			{
				D_Node* prev = temp->prev;

				prev->next = newNode;
				newNode->prev = prev;
				newNode->next = temp;
				temp->prev = newNode;
				std::cout << "Added the element at the position :: " << position << std::endl;
				return;
			}
		}
	}
}


void DLL::delete_at_start()
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		if (headNode->next == NULL)
		{
			delete headNode;
			std::cout << "Deleted the node. List is empty now" << std::endl;
			return;
		}
		else
		{
			D_Node* delN = headNode;
			headNode = headNode->next;
			delN->next = NULL;
			headNode->prev = NULL;
			std::cout << "Deleting node having data " << delN->data << std::endl;
			delete delN;
			return;
		}
	}
}


void DLL::delete_at_end()
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		if (headNode->next == NULL)
		{
			delete headNode;
			std::cout << "Deleted the node. List is empty now" << std::endl;
			return;
		}
		else
		{
			D_Node* temp = headNode;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			if (temp->next == NULL)
			{
				D_Node* delN = temp;
				D_Node* prev = temp->prev;
				prev->next = NULL;
				delN->prev = NULL;
				std::cout << "Deleting the node having data :: " << delN->data << std::endl;
				delete delN;
				return;
			}
		}
	}
}


void DLL::delete_at_position(int position)
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		int ipos = 0;
		D_Node* temp = headNode;

		while (ipos != position && temp->next != NULL)
		{
			temp = temp->next;
			++ipos;
		}
		if (ipos == position)
		{
			if (ipos == 0 && temp == headNode)
			{
				D_Node* delN = temp;
				headNode = temp->next;
				delN->next = NULL;
				headNode->prev = NULL;
				std::cout << "Deleting the node having the data :: " << delN->data << std::endl;
				delete delN;
				return;
			}
			else
			{
				if (temp->next == NULL)
				{
					D_Node* delN = temp;
					D_Node* prev = temp->prev;
					prev->next = NULL;
					delN->prev = NULL;
					std::cout << "Deleting the node having the data :: " << delN->data << std::endl;
					delete delN;
					return;
				}
				else
				{
					D_Node* delN = temp;
					D_Node* prev = temp->prev;
					prev->next = temp->next;
					temp->next->prev = prev;
					delN->prev = NULL;
					delN->next = NULL;
					std::cout << "Deleting the node having the data :: " << delN->data << std::endl;
					delete delN;
					return;
				}
			}
		}
		else
		{
			std::cout << "Invalid Position" << std::endl;
			return;
		}
	}
}


void DLL::display()
{
	D_Node* temp = headNode;

	while (temp->next != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << temp->data;
}


int main(void)
{
	DLL* dll = new DLL;
	
	dll->insert_at_end(10);
	dll->insert_at_start(20);
	dll->insert_at_position(30, 1);
	dll->insert_at_start(40);
	dll->insert_at_start(50);
	dll->insert_at_start(60);
	dll->display();

	dll->delete_at_start();
	dll->display();
	dll->delete_at_end();
	dll->display();
	dll->delete_at_position(3);
	dll->display();

	return 0;
}