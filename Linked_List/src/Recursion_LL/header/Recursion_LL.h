#pragma once
#include "RecursionNode.h"

class Recursion_LL
{
public:
	RecursionNode* headNode;

	Recursion_LL();

	void insert_at_end(int num);

	void recursive_display(RecursionNode* nextNode);
};

