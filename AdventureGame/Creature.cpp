#include "Creature.h"

Creature::Creature()
	: health(0)
	, damage (0)
{
	
}

void Creature::Look()
{
	std::cout << "You look at the " << name;
	std::cout << "\n" << description;
	std::cout << "Health: " << health << "\n";
	std::cout << "Damage: " << damage << "\n";
}
