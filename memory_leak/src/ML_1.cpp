/*
	Memory Leak

	Simple Betting game

		Jack Queen King - computer shuffles these cards

		playeer has to guess the position of queen.

		if he wins, he takes 3 times the bet amount

		if he looses, he loosed the bet amount

		player has $100 initially
*/

#include<iostream>

int cash = 100;

void Play(int bet)
{
}


int main()
{
	int bet;

	while (cash > 0)
	{
		std::cout << "What's your bet? $ ";
		std::cin >> bet;
		if (bet == 0 || bet > cash)
			break;
		Play(bet);
	}

	return 0;
}