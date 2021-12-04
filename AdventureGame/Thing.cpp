#include "Thing.h"

Thing::Thing()
	:name("Name")
	,description("Description")
{

	
}

void Thing::Look()
{
	std::cout << "You look at the " << name << ".";
	std::cout << description;
}
