#include "Thing.h"
#include <string>
#include <iostream>

Thing::Thing()
	:name("Name")
	,description("Description")
{

	
}

Thing::Thing(std::string _name, std::string _description)
{
	name = _name;
	description = _description;
}

Thing::~Thing()
{
}

void Thing::Look()
{
	std::cout << "You look at the " << name << ".";
	std::cout << description;
}
