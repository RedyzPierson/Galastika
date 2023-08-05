#include "Player.h"

Player::Player(const std::string& name)
	: Character(name, 100, 20, 10) {}

Player :: ~Player() {}

std::string Player::getName() const
{
	return name;
}

void Player::attackTarget(Character& target)
{
	int damage = getAttack() - target.getDefense();
	if (damage > 0)
	{
		target.takeDamage(damage);
	}
}

void Player::takeDamage(int damage)
{
	// Reduce Damage taken by half for the player
	damage /= 2;

	Character::takeDamage(damage);
}