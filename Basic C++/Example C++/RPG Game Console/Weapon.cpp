#include "Weapon.h"

Weapon::Weapon(const std::string& name, int attackBonus)
	:Item(name), attackBonus(attackBonus) {}

void Weapon::use(Character& target) const
{
	target.attack += attackBonus;
}