#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
public:
	std::string name;
	int health;
	int attack;
	int defense;

public:
	Character(const std::string& name, int health, int attack, int defense);
	virtual ~Character();

	virtual int getAttack() const;
	virtual int getDefense() const;
	virtual int getHealth() const;
	virtual bool isAlive() const;
	virtual void takeDamage(int damage);
	virtual void attackTarget(Character* target);
};

#endif // CHARACTER_H

