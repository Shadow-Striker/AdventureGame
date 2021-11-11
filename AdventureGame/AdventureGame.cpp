// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*For this step in the project, you will connect your new classes with some functionality in Main for reading input and acting on it. You should allow the player to look around and go between areas. 
You should set up several Areas for the player to go between, and keep track of which area they are currently in. You might want to do this with string for now (we will learn a better way soon).

Your program should accept a command to look, and a target for what you want to look at (such as "area" to look around). You program should also accept a command to "go" between areas, and a target for where you want to go (such as the area name). Make sure the player can only move to an area that is actually connected to the current one!

You may want to add a help command, or look into ways to adapt input better (such as the tolower() function, or allowing multiple similar commands such as "go" and "move") - but this is not required.

*/

#include <iostream>
#include <string>
#include <algorithm>
#include "Area.h"
#include  "Player.h"

int main()
{
    Player player;
    Area startingArea("Starting Area", "Area where player starts");
    Area dungeon("Dungeon", "Contains enemies");
    Area cave("Cave", "A dark cave.");
    std::string currentArea = startingArea.name;
    std::string command;
    std::string target;
    bool isPlaying = true;
    std::cout << "Hello World!\n";



    while (isPlaying)
    {
        std::cout << "Please enter a command\n";
        std::cin >> command;
        std::transform(command.begin(), command.end(), command.begin(), ::tolower);
        if (command == "look")
        {
            std::cout << "What do you want to look at?\n";
            std::cin >> target;
            if (target == "area")
            {
                std::cout << "You look at the " << player.currentArea << "\n";
            }
            else 
            {
                std::cout << "You look at the " << target << "\n";
            }

        }
        else if (command == "go")
        {
            std::cout << "Where do you want to go?\n";
            std::cin >> target;
            std::cout << "You go to the" << target << "\n";
            player.currentArea == target;
        }
        else if (command == "exit")
        {
            isPlaying = false;
        }
    }

        
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
