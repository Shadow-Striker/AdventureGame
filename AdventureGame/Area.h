#pragma once
#include <iostream>
#include <vector>
#include "Thing.h"
//Your Area should have a nameand description, the name of the Area connected to this one,
//and should have a Look() function that would be called if the player looks at this Area.
class Player;
class Area : public Thing
{
public:

	Area();
	Area(std::string _name, std::string _description);
	~Area();
	void Look();
	void Go(Player& _player, std::string _target);

private:
	 std::vector<Area*> exits;

public: 
	std::vector<Area*> GetExits();
};