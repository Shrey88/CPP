#pragma once
#include"../header/Node.h"
class Delete_LL_Node
{
public:
	Node* headNode;

	Delete_LL_Node();

	void insert_at_start(int num);

	void delete_node(int position);

	void display();
};

