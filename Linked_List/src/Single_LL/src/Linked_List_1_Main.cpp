#include "../header/Linked_List_1.h"
#include "../../Common.h"


int main(void)
{
	{
		Node* headNode = NULL;

		Linked_List_1* LL = new Linked_List_1;

		LL->insert_at_start(&headNode, 1);
		LL->insert_at_end(&headNode, 2);
		LL->insert_at_position(&headNode, 3, 1);
		LL->display(headNode);
	}
}