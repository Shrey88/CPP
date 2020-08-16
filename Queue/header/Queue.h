/*
	Queue
*/

class QueueNode
{
public:
	int num;
	QueueNode* node;
	QueueNode();
};

class Queue
{
public:
	QueueNode* headNode;
	QueueNode* tailNode;
	Queue();
	void enqueue(int num);
	void dequeue();
	void disp_Queue();
};