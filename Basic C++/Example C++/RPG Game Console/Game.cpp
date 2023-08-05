#include "Game.h"
#include "Potion.h"
#include "Weapon.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

Game::Game(const std::string& playerName) : Player(playerName)
{
	initializeEnemies();
	initializeItems();
}

void Game::initializeEnemies()
{
	// Add Enemies with Different Stats
	enemies.push_back(Enemy("Goblin", 50, 15, 5));
	enemies.push_back(Enemy("Orc",70, 20, 10));
	enemies.push_back(Enemy("Dragon", 100, 25, 15));
}

void Game::initializeItems()
{
	items.push_back(std::make_unique<Potion>("Health Potion", 30));
	items.push_back(std::make_unique<Weapon>("Sword", 5));
}

void Game::Start()
{
	srand(static_cast<unsigned int>(time(0)));

	std::cout << "Welcome to the RPG Game!" << std::endl;
	std::cout << "You are " << Player.getName() << ", a brave adventure." << std::endl;

	while (Player.isAlive() && !enemies.empty())
	{
		// Display Player Stats
		std::cout << "---------------------------------------------------------------" << std::endl;
		std::cout << "Player: " << Player.getName() << "\t Health : " << Player.getHealth() << std::endl;

		//Display Enemy Stats
		std::cout << "---------------------------------------------------------------" << std::endl;
		std::cout << "Enemies : " << std::endl;

		for (size_t i = 0; i < enemies.size(); i++)
		{
			std::cout << i + 1 << ". " << enemies[i].getName() << "\t Health" << enemies[i].getHealth() << std::endl;
		}

		// Player's turn
		int enemyChoice;
		std::cout << "Select an enemy to attack (1- " << enemies.size() << "): ";
		std::cin >> enemyChoice;
		enemyChoice--;

		if (enemyChoice < 0 || enemyChoice >= static_cast<int>(enemies.size()))
		{
			std::cout << "Invalid choice. Try again." << std::endl;
			continue;
		}

		Player.attackTarget(enemies[enemyChoice]);

		// Check if enemy is defeated
		auto it = enemies.begin();
		while (it != enemies.end())
		{
			if (!it->isAlive())
			{
				std::cout << "You defeated" << it->getName() << "!" << std::endl;
				it = enemies.erase(it);
			}
			else
			{
				++it;
			}
		}

		if (enemies.empty())
		{
			std::cout << "Congratulations! You've Defeated all enemies!" << std::endl;
			break;
		}

		// Enemies Turn

		for (size_t i = 0; i < enemies.size(); i++)
		{
			int playerDamage = std::max(0, enemies[i].getAttack() - Player.getDefense());
			Player.takeDamage(playerDamage);

			if (!Player.isAlive())
			{
				std::cout << "Game Over! You were defeated by " << enemies[i].getName() << "!" << std::endl;
				return;
			}
		}

		std::cout << "---------------------------------------------------------------" << std::endl;

	}
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Game Over! Thanks for Playing!" << std::endl;
}

