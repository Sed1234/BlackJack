#include "BlackJack.h"



void BlackJack::Game()
{
	
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		Cards::GenerateCards();
		Player::choise();
		if (Player::choise() == cards.x)
		{
		sum = sum + cards.x;
		}		

	}
	std::cout << "SUMM =" << sum << std::endl;
	std::cout << std::endl;
		
}

BlackJack::BlackJack()
{

}

BlackJack::BlackJack(int a, int b)
{
	this->a = a;
	this->b = b;
}


BlackJack::~BlackJack()
{
}
