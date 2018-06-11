#pragma once
#include "Cards.h"
#include "Player.h"
#include <vector>
class BlackJack
{
	Player player;
	Cards cards;
public:
	int a, b;
	std::vector<Cards> card;
	std::vector<BlackJack> bj;
	void Game();
	BlackJack();
	BlackJack(int , int);
	~BlackJack();
};

