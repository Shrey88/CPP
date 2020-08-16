/*
two people are playing a game with a string s, consisting of lowercase latin letters.
On a player's turn, he should choose two consecutive equal letters in the string and delete them.
For example, if the string is equal to "xaax" than there is only one possible turn : delete "aa",
so the string will become "xx".A player not able to make a turn loses.

Your task is to determine which player will win if both play optimally.

Input
The only line contains the string s, consisting of lowercase latin letters(1<= | s | <=100000),
where | s | means the length of a string s.

Output
If the first player wins, print "Yes".If the second player wins, print "No".

Examples
	input
		abacaba
	output
		No

	input
		iiq
	output
		Yes

	input
		abba
	output
		No
*/
#include<iostream>
#include "../header/game_of_string.h"

StringStack::StringStack()
{
	this->stack = NULL;
	this->top = 0;
	this->stackSize = 0;
}

StringStack::StringStack(int stackSize)
{
	this->stackSize = stackSize;
	this->stack = new char[this->stackSize];
	this->top = -1;
}

void StringStack::gameofstring(char* string)
{
	int i = 0;
	int count_Turns = 0;
	do
	{
		if (top == -1)
		{
			stack[++top] = string[i];
		}
		else
		{
			if (string[i] == stack[top])
			{
				--top;
				++count_Turns;
			}
			else
			{
				stack[++top] = string[i];
			}
		}
		++i;

	} while (i < (this->stackSize));


	if (count_Turns % 2 == 0)
		std::cout << "B wins" << std::endl;
	else
	{
		std::cout << "A wins" << std::endl;
	}

	return;
}

int main(void)
{
	char string[]{ "aab" };
	int stackSize = static_cast<int>(sizeof(string) / sizeof(string[0]));
	StringStack* ss = new StringStack(stackSize);

	ss->gameofstring(string);

	return 0;
}