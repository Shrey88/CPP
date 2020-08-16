/*
	Queue
*/

#include<iostream>

#include "Queue.h"

Queue::Queue()
{
	std::cout << "Queue constructor called...." << std::endl;
	headNode = NULL;
	tailNode = NULL;
}

QueueNode::QueueNode()
{
	this->num = 0;
	this->node = NULL;
}

void Queue::enqueue(int num)
{
	QueueNode* newNode = new QueueNode;
	newNode->num = num;

	if (headNode == NULL && tailNode == NULL)
	{
		headNode = newNode;
		tailNode = newNode;
	}
	else
	{
		QueueNode* temp = headNode;
		while (temp!=NULL && temp->node != NULL)
		{
			temp = temp->node;
		}
		if (temp != NULL)
		{
			temp->node = newNode;
			tailNode = newNode;
		}
	}
}
void Queue::dequeue()
{
	if (headNode == tailNode)
	{
		delete (headNode);
		(headNode)->node = NULL;
		(tailNode)->node = NULL;
	}
	else
	{
		QueueNode* sNode = headNode;
		(headNode) = sNode->node;
		std::cout << "Value removed :: " << sNode->num << std::endl;
		delete sNode;
	}
}
void Queue::disp_Queue()
{
	QueueNode* sNode = headNode;
	QueueNode* eNode = tailNode;
	std::cout << "Displaying values:: " << std::endl;
	while (sNode != eNode)
	{
		std::cout << sNode->num << std::endl;
		sNode = sNode->node;
	}
	std::cout << sNode->num << std::endl;
}


int main(void)
{
	Queue* queue = new Queue;

	queue->enqueue(10);
	queue->enqueue(20);
	queue->enqueue(30);
	queue->enqueue(40);

	queue->dequeue();
	queue->disp_Queue();
}