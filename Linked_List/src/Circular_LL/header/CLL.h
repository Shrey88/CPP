#pragma once
#include "../header/C_Node.h"

class CLL
{
public:
	C_Node* headNode;
	CLL();
	void insert_at_start(int data);
	void insert_at_end(int data);
	void insert_at_position(int data, int position);
	void delete_at_start();
	void delete_at_end();
	void delete_at_position(int position);
	void display();
};

