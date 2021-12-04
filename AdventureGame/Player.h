#pragma once

#include <string>
#include <iostream>
#include "Area.h"
#include "Creature.h"
/*For this step in the project, you will set up the basic Player and Area classes and test them out. 

Your Player should have health and attack values, and a string for the name of the Area they are currently in.



You should set up constructors and destructors for both classes - the constructors should set up default values for all data. 
The destructors can be blank - these would be used to clean up any dynamic memory for these classes. */

class Player : public Creature
{
public:

	Player();
	~Player();


private:
	Area* currentArea;

public: 
	void SetCurrentArea(Area* _area);
	Area* GetCurrentArea();
};
