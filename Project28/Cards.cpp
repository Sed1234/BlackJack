#include "Cards.h"



void Cards::GenerateCards()
{
	std::vector<Cards> cards;
	for (int i = 0; i < 4; i++)
	{
		cards.push_back(Cards(rand() % 10 + 1, i));
	}

	for (int i = 1; i < 4; i++)
	{
		//std::cout << card.x << ' ';
		std::cout << cards[i].z << ' ';
		std::cout << cards[i].x << ' ';
		//return cards[i].z ;
		//return cards[i].x ;	
	}
	std::cout << std::endl;
}

Cards::Cards()
{
	
}

Cards::Cards(int x, int z)
{
	this->x = x;
	this->z = z;
}


Cards::~Cards()
{
}
