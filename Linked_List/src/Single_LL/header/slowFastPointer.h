#pragma once
#include "slowFastPointerNode.h"
class SlowFastPointer
{
private:
	SlowFastPointerNode* ln_headNode;

public:
	SlowFastPointer();
	void insert_at_end(int num);
	int middle_element();
};

