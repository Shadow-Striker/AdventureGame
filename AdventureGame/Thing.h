#pragma once
#include <string>
#include <iostream>
class Thing
{
public:
	Thing();
	Thing(std::string _name, std::string _description);
	~Thing();
	void Look();

protected:
	std::string name;
	std::string description;
	
};