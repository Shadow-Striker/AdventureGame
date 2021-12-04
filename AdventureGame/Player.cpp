#include "Player.h"

Player::Player()
	: currentArea(nullptr)
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
