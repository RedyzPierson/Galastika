#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"
#include <string>

class Enemy : public Character
{
public:
	std::string name;

public:
	Enemy(const std::string& name, int health, int attack, int defense);
	virtual ~Enemy();

	std::string getName() const;
};

#endif // !ENEMY_H
