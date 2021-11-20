#include "Area.h"
#include "Player.h"
#include <iostream>
#include <string>
Area::Area()
	: name("Test Name")
	, description("This is a description")
	, exits()
{
}

Area::Area(std::string _name, std::string _description)
	: name(_name)
	, description(_description)
	, exits()
{
}

Area::~Area()
{
}

void Area::Look()
{
	std::cout << "You look around at the " << name << "." << std::endl;
	std::cout << description << std::endl;
	std::cout << "The " << name << " contains these exits: ";
	for (size_t i = 0; i < exits.size(); ++i)
	{
		std::cout << "Exit: " << exits[i];
	};
}

void Area::Go(Player& _player, std::string _target)
{
	for (size_t i = 0; i < exits.size(); i++)
	{
		if (exits[i]->name == _target)
		{
			std::cout << "You go to: " << _target;
			_player.currentArea = *exits[i];
			break;
		}
	}
	std::cout << "Could not find: " << _target;
}
