#pragma once
#include "RecursionNode.h"

class Reverse_LL
{
public:
	RecursionNode* headNode;
	RecursionNode* tailNode;

	Reverse_LL();
	void insert_at_end(int num);

	void reverse_linked_list(RecursionNode* nextNode);

	void display();
};

