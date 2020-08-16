#pragma once
#include "D_Node.h"
class DLL
{

public:
	D_Node* headNode;
	DLL();
	void insert_at_start(int data);
	void insert_at_end(int data);
	void insert_at_position(int data, int position);
	void delete_at_start();
	void delete_at_end();
	void delete_at_position(int position);
	void display();
};

