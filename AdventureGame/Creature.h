#pragma once
#include "Thing.h"
class Creature : public Thing
{
public:
	void Look();

protected:
	int health;
	int damage;
};
