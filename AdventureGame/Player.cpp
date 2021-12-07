#include "Player.h"

Player::Player(int _health, int _damage)
	: currentArea(nullptr)
{
	health = _health;
	damage = _damage;
}

Player::~Player()
{
}

void Player::SetCurrentArea(Area* _area)
{
	currentArea = _area;
}

Area* Player::GetCurrentArea()
{
	return currentArea;
}
