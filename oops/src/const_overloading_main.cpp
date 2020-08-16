#include"../header/const_overloading.h"


int main(int argc, char** argv)
{
	{
		Person p1;

		std::cout << p1.toString() << std::endl;


		Person person2("Shreyas");
		std::cout << person2.toString() << std::endl;
	}

	return 0;
}