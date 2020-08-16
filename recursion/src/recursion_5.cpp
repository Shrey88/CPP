/*
	print a reverse linked list using the recursion
*/

#include<iostream>

class Node
{
public:
	int num;
	Node* next;
	Node();
};

class Reverse_LL
{
public:
	Node* headNode;
	Reverse_LL();
	void push(int);
	void reverse_linkedlist(Node* next);
};

Node::Node()
{
	this->num = 0;
	next = NULL;
}

Reverse_LL::Reverse_LL()
{
	headNode = NULL;
}

void Reverse_LL::push(int num)
{
	Node* newNode = new Node;
	newNode->num = num;

	newNode->next = headNode;
	headNode = newNode;
}

void Reverse_LL::reverse_linkedlist(Node* node)
{
	if (node != NULL)
	{
		reverse_linkedlist(node->next);
		std::cout << node->num << " <-- ";
	}

}

int main(void)
{
	Reverse_LL* rll = new Reverse_LL;

	rll->push(10);
	rll->push(20);
	rll->push(30);
	rll->push(40);
	rll->push(50);
	rll->push(60);
	rll->push(70);

	rll->reverse_linkedlist(rll->headNode);


}