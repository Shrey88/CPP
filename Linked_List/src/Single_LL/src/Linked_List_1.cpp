#include "../header/Linked_List_1.h"
#include "../../Common.h"

Linked_List_1::Linked_List_1()
{
	std::cout << "Linked List Initialized" << std::endl;
}

Linked_List_1::~Linked_List_1()
{
	std::cout << "Self Destruction" << std::endl;
}

Node* Linked_List_1::getNewNode()
{
	return new Node;
}

void Linked_List_1::insert_at_start(Node** headNode, int num)
{
	Node* newNode = this->getNewNode();

	if (newNode != NULL)
	{
		newNode->num = num;
		
		if (*headNode == NULL)
		{
			*headNode = newNode;
		}
		else
		{
			newNode->next = *headNode;
			*headNode = newNode;
		}
	}
	else
	{
		std::cout << "Memory not allocated on heap" << std::endl;
	}
}

void Linked_List_1::insert_at_end(Node** headNode, int num)
{
	Node* newNode = this->getNewNode();

	if (newNode != NULL)
	{
		newNode->num = num;

		if (*headNode == NULL)
		{
			*headNode = newNode;
		}
		else
		{
			Node* temp = *headNode;

			while ( temp->next!= NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	else
	{
		std::cout << "Memory not allocated on heap" << std::endl;
	}
}

void Linked_List_1::insert_at_position(Node** headNode, int num, int position)
{
	Node* newNode = this->getNewNode();
	
	if (newNode != NULL)
	{
		newNode->num = num;

		if (*headNode == NULL)
		{
			if (position == 0)
			{
				*headNode = newNode;
			}
			else
			{
				std::cout << "List is Empty";
				delete newNode;
			}
		}
		else
		{
			int ipos = 0;
			Node* temp = *headNode;
			if (position == 0)
			{
				newNode->next = *headNode;
				*headNode = newNode;
			}
			else
			{
				while (temp->next != NULL)
				{
					++ipos;

					if (ipos == position)
					{
						Node* iNode = temp->next;
						newNode->next = iNode;
						temp->next = newNode;
						return;
					}
					else
					{
						temp = temp->next;
					}
				}
				if (ipos != position)
				{
					std::cout << "Position does not exist" << std::endl;
					delete newNode;
				}
			}
		}
	}
	else
	{
		std::cout << "Memory not allocated on heap" << std::endl;
	}
}

void Linked_List_1::insert_at_middle_position(Node** headNode, int num)
{
	Node* newNode = this->getNewNode();

	if (newNode != NULL)
	{
		newNode->num = num;

		if (*headNode == NULL)
		{
			delete newNode;
			std::cout << "List is Empty" << std::endl;
		}
		else
		{
			if ((*headNode)->next == NULL)
			{
				std::cout << "Only one element is in the list." << std::endl;
				return;
			}
			Node* temp = *headNode;
			int iMidPos = 0;
			while (temp->next != NULL)
			{
				temp = temp->next;
				++iMidPos;
			}
			if (temp->next == NULL)
			{
				++iMidPos;
			}

			temp = *headNode;
			iMidPos /= 2;
			while (temp->next!=NULL)
			{
				--iMidPos;
				if (iMidPos == 0)
				{
					Node* iNode = temp->next;

					newNode->next = iNode;
					temp->next = newNode;
					return;
				}
				temp = temp->next;
			}
		}
	}
	else
	{
		std::cout << "Memory not allocated on heap" << std::endl;
	}
}

void Linked_List_1::insert_after_middle_position(Node** headNode, int num)
{
	Node* newNode = new Node;

	if (newNode != NULL)
	{
		newNode->num = num;

		if (*headNode == NULL)
		{
			delete newNode;
			std::cout << "List is empty" << std::endl;
		}
		else
		{
			if ((*headNode)->next == NULL)
			{
				delete newNode;
				std::cout << "Only one element is in the list" << std::endl;
			}
			else
			{
				Node* temp = *headNode;
				int iMidPos = 0;
				while (temp->next != NULL)
				{
					temp = temp->next;
					++iMidPos;
				}
				if (temp->next == NULL)
				{
					++iMidPos;
				}

				temp = *headNode;
				iMidPos /= 2;
				while (temp->next != NULL)
				{
					--iMidPos;
					if (iMidPos == 0)
					{
						Node* iNode = temp->next->next;
						newNode->next = iNode;
						temp->next->next = newNode;
					}
				}
			}
		}
	}
	else
	{
		std::cout << "Memory not allocated on heap" << std::endl;
	}
}

void Linked_List_1::getNthValue(Node* headNode, int position) 
{
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
	}
	else
	{
		Node* temp = headNode;
		int iPos = position;
		while (position != 0 && temp->next != NULL)
		{
			--position;
			temp = temp->next;
		}
		if (position == 0)
		{
			std::cout << "Value at " << iPos << " position :: " << temp->num;
		}
		else
		{
			std::cout << "Position not found" << std::endl;
		}
	}
}

void Linked_List_1::display(Node* headNode)
{
	Node* temp = headNode;
	if (headNode == NULL)
	{
		std::cout << "List is empty" << std::endl;
		return;
	}

	while (temp->next != NULL)
	{
		std::cout << temp->num << " -> ";
		temp = temp->next;
	}
	std::cout << temp->num << std::endl;
}