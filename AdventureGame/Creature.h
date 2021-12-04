#pragma once
#include "Thing.h"
class Creature : public Thing
{
public:
	Creature();
	void Look();

protected:
	int health;
	int damage;
};
