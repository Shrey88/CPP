/*
	Creating a Linked List
		
		Adding value at the beginning and at the end

		Deleting values from the beginning and at the end.
*/
#pragma once
#include "../header/Node.h"

class Linked_List_1
{
private:
	//Node* headNode;
public:
	
	Node* getNewNode();

	Linked_List_1();
	~Linked_List_1();

	//operations
	void insert_at_start(Node** headNode, int num);
	void insert_at_end(Node** headNode, int num);
	void insert_at_position(Node** headNode, int num, int position);
	void insert_at_middle_position(Node** headNode, int num);
	void insert_after_middle_position(Node** headNode, int num);
	void getNthValue(Node* headNode, int position);

	void display(Node* headNode);

	void delete_at_start(Node** headNode);
	void delete_at_end(Node** headNode);
	void delete_at_position(Node** headNode, int position);
	void delete_middle_element(Node** headNode);
};

