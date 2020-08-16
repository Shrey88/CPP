/*
	find the intersection point of two list
*/
#pragma once
#include "../Intersection_LL/Node.h"
class Intersection_LL
{

private:
	Node* L1_headNode;
	Node* L2_headNode;
	Node* L3_headNode;

	void intersect_list();

public:
	Intersection_LL();
	void push(int num, int listNo);
	void create_link();
	void find_intersection();
};

