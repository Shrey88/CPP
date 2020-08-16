/*
	Creating a Node class

	so a node class object will be created on the heap.

	and it will contain 4 bytes of memory for the int  and 4 bytes of memory for the pointer.
*/

#pragma once

class Node
{
public:
	int num;
	Node* next;

	Node();
};