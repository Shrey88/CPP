#include"../header/Const_Destruct.h"


int main(int argc, char** argv)
{
	// this brackets are added to specifically deallocate memory at specific point in our program
	{
		// when you create an object of a class that's when contructor runs.
		Const_Destruct cd;

		// when the object is deleted or memory of the object is deallocated, destructor runs
	}
	
	std::cout << "End of Program" << std::endl;
	return 0;
}