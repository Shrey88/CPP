#include "../header/CLL.h"
#include "../../Common.h"


CLL::CLL()
{
	headNode = NULL;
}


void CLL::insert_at_start(int data)
{
	C_Node* newNode = new C_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
		newNode->next = headNode;
		newNode->prev = headNode;
	}
	else
	{
		newNode->next = headNode;
		newNode->prev = headNode->prev;
		headNode->prev->next = newNode;
		headNode->prev = newNode;
		headNode = newNode;
	}
}


void CLL::insert_at_end(int data)
{
	C_Node* newNode = new C_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
		newNode->next = headNode;
		newNode->prev = headNode;
	}
	else
	{
		C_Node* temp = headNode;

		while (temp->next != headNode)
		{
			temp = temp->next;
		}
		if (temp->next == headNode)
		{
			temp->next = newNode;
			newNode->prev = temp;
			newNode->next = headNode;
			headNode->prev = newNode;
		}
	}
}


void CLL::insert_at_position(int data, int position)
{
	C_Node* newNode = new C_Node;
	newNode->data = data;

	if (headNode == NULL)
	{
		headNode = newNode;
		newNode->next = headNode;
		newNode->prev = headNode;
	}
	else
	{
		int ipos = 0;
		C_Node* temp = headNode;

		while (ipos != position && temp->next != headNode)
		{
			temp = temp->next;
			++ipos;
		}
		if (ipos == position)
		{
			if (ipos == 0)
			{
				newNode->next = headNode;
				newNode->prev = headNode->prev;
				headNode->prev = newNode;
				headNode = newNode;
				std::cout << "Added the element at the position :: " << position << std::endl;
				return;
			}
			else
			{
				C_Node* prev = temp->prev;

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


void CLL::delete_at_start()
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		if (headNode->next == headNode)
		{
			headNode->next - NULL;
			headNode->prev = NULL;

			delete headNode;
			std::cout << "Deleted the node. List is empty now" << std::endl;
			return;
		}
		else
		{
			C_Node* delN = headNode;
			headNode = headNode->next;
			headNode->prev = delN->prev;
			headNode->prev->next = headNode;
			delN->next = NULL;
			delN->prev = NULL;
			std::cout << "Deleting node having data " << delN->data << std::endl;
			delete delN;
			return;
		}
	}
}


void CLL::delete_at_end()
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		if (headNode->next == headNode)
		{
			headNode->prev = NULL;
			headNode->next = NULL;

			delete headNode;
			std::cout << "Deleted the node. List is empty now" << std::endl;
			return;
		}
		else
		{
			C_Node* temp = headNode;
			while (temp->next != headNode)
			{
				temp = temp->next;
			}
			if (temp->next == headNode)
			{
				C_Node* delN = temp;
				C_Node* prev = temp->prev;
				prev->next = headNode;
				headNode->prev = prev;
				delN->prev = NULL;
				delN->next = NULL;
				std::cout << "Deleting the node having data :: " << delN->data << std::endl;
				delete delN;
				return;
			}
		}
	}
}


void CLL::delete_at_position(int position)
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	else
	{
		int ipos = 0;
		C_Node* temp = headNode;

		while (ipos != position && temp->next != headNode)
		{
			temp = temp->next;
			++ipos;
		}
		if (ipos == position)
		{
			if (ipos == 0 && temp == headNode)
			{
				C_Node* delN = temp;
				headNode = temp->next;
				headNode->prev = delN->prev;

				delN->next = NULL;
				delN->prev = NULL;
				std::cout << "Deleting the node having the data :: " << delN->data << std::endl;
				delete delN;
				return;
			}
			else
			{
				if (temp != NULL && temp->next == headNode)
				{
					C_Node* delN = temp;
					C_Node* prev = temp->prev;
					prev->next = headNode;
					headNode->prev = prev;

					delN->prev = NULL;
					delN->next = NULL;

					std::cout << "Deleting the node having the data :: " << delN->data << std::endl;
					delete delN;
					return;
				}
				else if (temp != NULL)
				{
					C_Node* delN = temp;
					C_Node* prev = temp->prev;
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


void CLL::display()
{
	C_Node* temp = headNode;

	while (temp->next != headNode)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << temp->data;
}


int main(void)
{
	CLL* cll = new CLL;

	cll->insert_at_end(10);
	cll->insert_at_start(20);
	cll->insert_at_position(30, 1);
	cll->insert_at_start(40);
	cll->insert_at_start(50);
	cll->insert_at_start(60);
	cll->insert_at_end(70);
	cll->insert_at_position(80, 3);
	cll->insert_at_position(90, 4);
	cll->display();

	cll->delete_at_start();
	cll->display();
	cll->delete_at_end();
	cll->display();
	cll->delete_at_position(3);
	cll->display();

	return 0;
}