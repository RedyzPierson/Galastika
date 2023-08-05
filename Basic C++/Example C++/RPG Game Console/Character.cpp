#include "Character.h"

Character::Character(const std::string& name, int health, int attack, int defense) 
	: name(name), health(health), attack(attack), defense(defense) {}

Character :: ~Character() {}

int Character::getAttack() const {
	return attack;
}

int Character::getDefense() const {
	return defense;
}

int Character::getHealth() const {
	return health;
}

bool Character::isAlive() const {
	return health > 0;
}

void Character::takeDamage(int damage)
{
	health -= damage;
	if (health < 0)
	{
		health = 0;
	}
}

void Character::attackTarget(Character* target)
{
	int damage = std::max(0, attack - target->getDefense());
	target->takeDamage(damage);
}