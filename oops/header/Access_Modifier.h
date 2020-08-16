/*
	access modifiers are used, so that we don't share all the information outside a class
*/
#pragma once



class Access_Modifier
{
	/*
		if you don't specify the access modifier then it is private by default.

		when it is private, it is private to the class in which it is defined and not accessible to other class
	*/
	bool isHappy;

	/*
		to share some information with the other classes you need to make it public
	*/
public:
	void happy();
	void sad();
	void speak();
};

