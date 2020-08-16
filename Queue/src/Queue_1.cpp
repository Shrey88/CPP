/*
	Piority Queue

	enqueue: insert the elements based on the priority.

	dequeue: deleting the element based on the priority should delete all the elements having same priority.
*/
#include<iostream>

#include "Queue_1.h"

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
	this->priority = 0;
}

void Queue::enqueue(int num, int priority)
{
	QueueNode* newNode = new QueueNode;
	newNode->num = num;
	newNode->priority = priority;

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
			if (newNode->priority > temp->priority)
			{
				newNode->node = temp;
				headNode = newNode;
				return;
			}
			else if (newNode->priority >= temp->node->priority && newNode->priority <= temp->priority)
			{
				newNode->node = temp->node;
				temp->node = newNode;
				return;
			}
			
			temp = temp->node;
		}
		if (temp!=NULL && temp->node == NULL && newNode->priority < temp->priority)
		{
			temp->node = newNode;
			tailNode = newNode;
		}
		else if (temp != NULL && temp->node == NULL && newNode->priority > temp->priority)
		{
			newNode->node = temp;

			if (temp == headNode)
			{
				headNode = newNode;
				tailNode = temp;
			}
		}
		
		
	}
}


void Queue::dequeue(int priority)
{
	if (headNode == NULL && tailNode == NULL)
	{
		std::cout << "Queue is empty" << std::endl;
		return;
	}
	else
	{
		if (headNode != NULL && tailNode != NULL && headNode->priority == priority && 
			tailNode->priority == priority && 
			headNode == tailNode)
		{
			std::cout << "Value deQueued :: " << headNode->num << " having priority :: " << priority << std::endl;
			delete (headNode);
			(headNode)->node = NULL;
			(tailNode)->node = NULL;
		}
		else
		{
			QueueNode* sNode = headNode;
			if (headNode != NULL && headNode->priority == priority)
			{
				std::cout << "Value deQueued :: " << headNode->num << " having priority :: " << priority << std::endl;
				headNode = headNode->node;
				delete sNode;
				return;
			}
			else
			{

				while (sNode != NULL && sNode->node != NULL)
				{
					if (priority <= sNode->priority && priority >= sNode->node->priority)
					{
						if (priority == sNode->node->priority)
						{
							QueueNode* delNode = sNode->node;
							sNode->node = sNode->node->node;
							std::cout << "Value deQueued :: " << delNode->num << " having priority :: " << priority << std::endl;
							delete delNode;
							continue;
						}
					}
					sNode = sNode->node;
				}
			}
		}
	}	
}


void Queue::disp_Queue()
{
	QueueNode* sNode = headNode;
	QueueNode* eNode = tailNode;

	std::cout << "Displaying Values:" << std::endl;
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

	queue->enqueue(10, 1);
	queue->enqueue(20, 3);
	queue->enqueue(30, 4);
	queue->enqueue(60, 4);
	queue->enqueue(40, 5);
	queue->enqueue(70, 1);


	queue->dequeue(4);

	queue->disp_Queue();
}