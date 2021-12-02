#include "Player.h"

Player::Player()
	: health(100)
	, damage(10)
	, currentArea(nullptr)
{

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
