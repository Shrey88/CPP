#include "../header/SlowFastPointerNode.h"
#include"../../Common.h"

SlowFastPointerNode::SlowFastPointerNode()
{
	/*
		always initialize the pointer like this instead of dereferencing it and assigning.

		this->next  = NULL << this is wrong way of initializing as you are not storing any address in that variable, but trying to dereference it.
	*/
	next = NULL;
	this->num = 0;
}
