#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "Item.h"
#include <memory>

class Game
{
private:
	Player Player;
	std::vector<Enemy> enemies;
	std::vector<std::unique_ptr<Item>> items;

	void initializeEnemies();
	void initializeItems();

public:
	Game(const std::string& playerName);

	void Start();
};

#endif // !GAME_H
