#pragma once
#include <vector>
#include <iostream>
#include<random>
#include "time.h" 
#include "Player.h"
class Cards
{

public:
	int x, z;
	static void GenerateCards();
	Cards();
	Cards(int, int );
	friend std::ostream & operator << (std::ostream & stream, std::vector<Cards> & cards)
	{
	Cards a;
	stream << a.x<<' '<<a.z<< std::endl;

	return stream;
	}
	~Cards();
};

