/*
	Piority Queue

	enqueue: insert the elements based on the priority.

	dequeue: deleting the element based on the priority should delete all the elements having same priority.
*/
#pragma once
class QueueNode
{
public:
	int num;
	int priority;
	QueueNode* node;
	QueueNode();
};

class Queue
{
public:
	QueueNode* headNode;
	QueueNode* tailNode;
	Queue();
	void enqueue(int num, int priority);
	void dequeue(int priority);
	void disp_Queue();
};