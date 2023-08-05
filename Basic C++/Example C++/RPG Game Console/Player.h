#ifndef PLAYER_H
#define	PLAYER_H

#include "Character.h"

class Player : public Character
{

public:
	Player(const std::string& name);
	virtual ~Player();

	std::string getName() const;

	void attackTarget(Character& target);
	virtual void takeDamage(int damage) override;
};

#endif // !PLAYER_H
