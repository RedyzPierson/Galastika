#include "Enemy.h"

Enemy::Enemy (const std::string& name, int health, int attack, int defense)
	: Character(name, health, attack, defense) {}

Enemy :: ~Enemy() {}

std::string Enemy::getName() const
{
	return name;
}