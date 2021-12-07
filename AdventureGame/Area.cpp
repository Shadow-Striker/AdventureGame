#include "Area.h"
#include "Player.h"
#include <iostream>
#include <string>
Area::Area(std::string _name, std::string _description)
	: exits()
	, Thing(_name, _description)
{
}

/*Area::Area(std::string _name, std::string _description)
	: Thing()
{

}*/

Area::~Area()
{
}

void Area::Look()
{
	std::cout << "You look around at the " << name << "." << std::endl;
	std::cout << description << std::endl;
	std::cout << "The " << name << " contains these exits: \n";
	for (int i = 0; i < exits.size(); ++i)
	{
		std::cout << "Exit: " << exits[i]->name << "\n";
	}
}

void Area::Go(Player* _player, std::string _target)
{
	for (size_t i = 0; i < exits.size(); i++)
	{
		if (exits[i]->name == _target)
		{
			std::cout << "You go to: " << _target;
			_player->SetCurrentArea(exits[i]);
			return;
		}
		else if (_target == _player->GetCurrentArea()->name)
		{
			std::cout << "\n You are curently in the " << _target << "!";
			return;
		}
	}
	std::cout << "Could not find: " << _target;
}

//std::vector<Area*> Area::GetExits()
//{
//	return exits;
//}

void Area::AddExit(Area* _exit)
{
	exits.push_back(_exit);
}
