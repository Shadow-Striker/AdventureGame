#pragma once
#include <iostream>
//Your Area should have a nameand description, the name of the Area connected to this one,
//and should have a Look() function that would be called if the player looks at this Area.
class Area
{
public:

	Area();
	Area(std::string _name, std::string _description);
	~Area();
	void Look();

	 std::string name;
	 std::string description;

};