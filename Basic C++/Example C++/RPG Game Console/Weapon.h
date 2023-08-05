#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
private:
	int attackBonus;

public:
	Weapon(const std::string& name, int attackBonus);

	virtual void use(Character& target) const override;
};

#endif // !WEAPON_H
