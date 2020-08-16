/*
	find the intersection point of two list
*/
#include "../Intersection_LL/Intersection_LL.h"
#include "../Common.h"
Intersection_LL::Intersection_LL()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this is wrong way of initializing as you are not storing any address in that variable but trying to dereference it.
		this->L1_headNode  = NULL
		this->L2_headNode  = NULL
		this->L3_headNode  = NULL
	*/
	L1_headNode = NULL;
	L2_headNode = NULL;
	L3_headNode = NULL;
}


void Intersection_LL::intersect_list()
{

	Node* temp = L1_headNode;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = L3_headNode;

	temp = L2_headNode;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next= L3_headNode;
	
	temp = NULL;
	delete temp;
}
void Intersection_LL::push(int num, int listNo) 
{
	Node* newNode = new Node;
	newNode->num = num;
	if (listNo == 1)
	{
		newNode->next = L1_headNode;
		L1_headNode = newNode;
	}
	else if (listNo == 2)
	{
		newNode->next = L2_headNode;
		L2_headNode = newNode;
	}
	else if (listNo == 3)
	{
		newNode->next = L3_headNode;
		L3_headNode = newNode;
	}
}

void Intersection_LL::create_link()
{
	intersect_list();
}


void Intersection_LL::find_intersection()
{
	Node* headNode1 = L1_headNode;
	Node* headNode2 = L2_headNode;
	
	int list1_len = 0;
	int list2_len = 0;
	int intersection_point = 0;

	while (headNode1->next != NULL)
	{
		++list1_len;
		headNode1 = headNode1->next;
	}
	++list1_len;

	while (headNode2->next != NULL)
	{
		++list2_len;
		headNode2 = headNode2->next;
	}
	++list2_len;

	// reinitializing the pointer to actual head node
	headNode1 = L1_headNode;
	headNode2 = L2_headNode;

	if (list1_len > list2_len)
	{
		int i = 0;

		while (i < (list1_len - list2_len))
		{
			headNode1 = headNode1->next;
			++i;
		}
	}
	else if(list1_len < list2_len)
	{
		int i = 0;

		while (i < (list2_len - list1_len))
		{
			headNode2 = headNode2->next;
			++i;
		}
	}

	while (headNode1!= NULL && headNode2 != NULL && headNode1->next !=NULL && headNode2->next != NULL)
	{
		if (headNode1->next->num != headNode2->next->num)
		{
			++intersection_point;
		}
		else
		{
			++intersection_point;
			std::cout << "Intersecting at " << intersection_point << std::endl;
			return;
		}
		headNode1 = headNode1->next;
		headNode2 = headNode2->next;
		
	}
	if (headNode1 != NULL && headNode2 != NULL && headNode1->next == NULL && headNode2->next == NULL)
	{
		std::cout << "Not Intersecting" << std::endl;
	}


}

int main(void)
{
	Intersection_LL* iLL = new Intersection_LL;
	iLL->push(10, 1);
	iLL->push(20, 1);
	iLL->push(30, 1);
	iLL->push(40, 1);

	iLL->push(50, 2);
	iLL->push(60, 2);

	iLL->push(70, 3);
	iLL->push(80, 3);
	iLL->push(90, 3);

	iLL->create_link();

	iLL->find_intersection();

}