#pragma once

#include "Ball.h"

class Player
{
	int  m_position;
	bool m_hasBall;
	int  m_strength;
public:
	Player(int position, int strength);
	void pass(int position, Ball *ball);
};

