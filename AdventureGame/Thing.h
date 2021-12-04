#pragma once
#include <string>
#include <iostream>
class Thing
{
public:
	Thing();
	~Thing();
	void Look();

protected:
	std::string name;
	std::string description;
	
};