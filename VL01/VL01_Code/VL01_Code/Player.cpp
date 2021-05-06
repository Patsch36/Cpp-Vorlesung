#include "Player.h"

Player::Player(int position, int strength)
	: m_position(position)
	, m_hasBall(false)
	, m_strength(strength)
{
}

void Player::pass(int position, Ball *ball)
{
	if (m_hasBall) {
		int acceleration = position > m_position ? m_strength : -m_strength;
		ball->changeSpeed(acceleration);
	}
}
