#include "Game.h"
#include <iostream>

int main()
{
	std::string playerName;
	std::cout << "Enter your Character's name : ";
	std::cin >> playerName;

	Game game(playerName);
	game.Start();
	
	return 0;
}